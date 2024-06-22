#include <stdio.h>
#include <string.h>
#include "lexer/lex.yy.c"
#include "interpreter.h"

int main ( int argc, char* argv[] )
{

	if (argc == 1) {
		printf("Ingrese un string y le dire que es:\n");
		printf("Presione CTRL + C para salir\n");
		yyin = stdin;
		yyparse();
	} else if (argc == 2) {
		printf("Se recibio un solo archivo, se escribira la salida a la pantalla\n");
		parse(argv[1], NULL);
	} else if (argc == 3) {
		printf("Se recibieron dos archivos, se escribira la salida en el segundo\n");
		printf("Archivo de entrada: ");
		printf("%s\n", argv[1]);
		printf("Archivo de salida: ");
		printf("%s\n", argv[2]);
		parse(argv[1], argv[2]);
	}

	return 0;

}

int handleFiles( char* inputFilePath, char* outputFilePath ) {
	FILE* inputFileHandler = fopen(inputFilePath, "r");

	FILE* outputFileHandler = stdout;

	if ( outputFilePath != NULL) {
		outputFileHandler = fopen(outputFilePath, "w");
	}

	if (inputFileHandler == NULL) {
		fclose(outputFileHandler);
		return 1;
	}

	if (outputFileHandler == NULL) {
		fclose(inputFileHandler);
		return 2;
	}

	yyin = inputFileHandler;
	yyout = outputFileHandler;

	return 0;
}


int lex ( char* inputFilePath, char* outputFilePath) {

	execute(1, inputFilePath, outputFilePath);

}

int parse( char* inputFilePath, char* outputFilePath) {

	execute(2, inputFilePath, outputFilePath);

}

int execute ( int mode, char* inputFilePath, char* outputFilePath) {
		int filesOpened = handleFiles( inputFilePath, outputFilePath);

	if ( filesOpened != 0 ) {
		return filesOpened;
	}

	if (mode == 1) {
		yylex();
	} else {
		yyparse();
	}

	fclose( yyin );

	if (yyout != stdout){
		fclose( yyout );
	}
	

	return 0;
}
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "lexer/lex.yy.c"
#include "interpreter.h"

int lex ( char* inputFilePath, char* outputFilePath );
int handleFiles ( char* inputFilePath, char* outputFilePath );


int main ( int argc, char* argv[] )
{

	if (argc == 1) {
		printf("Ingrese un string y le dire que es:\n");
		printf("Presione CTRL + C para salir\n");
		yyin = stdin;
		yylex();
	} else if (argc == 2) {
		printf("Se recibio un solo archivo, se escribirá la salida a la pantalla\n");
		lex(argv[1], NULL);
	} else if (argc == 3) {
		printf("Se recibieron dos archivos, se escribirá la salida en el segundo\n");
		printf("Archivo de entrada: ");
		printf("%s\n", argv[1]);
		printf("Archivo de salida: ");
		printf("%s\n", argv[2]);
		lex(argv[1], argv[2]);
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

	int filesOpened = handleFiles( inputFilePath, outputFilePath);

	if ( filesOpened != 0 ) {
		return filesOpened;
	}

	yylex();

	fclose( yyin );

	if (yyout != stdout){
		fclose( yyout );
	}
	

	return 0;

}



// int parse ( char* inputFilePath, char* outputFilePath) {

// 	int filesOpened = handleFiles( inputFilePath, outputFilePath);

// 	if ( filesOpened != 0 ) {
// 		return filesOpened;
// 	}

// 	yylex();
// 	yyparse();

// }


#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "lexer/lexer.c"
#include "interpreter.h"

int main ( int argc, char* argv[] )
{
	printf("Ingrese un string y le dire que es:\n");
	printf("Presione CTRL + C para salir\n");
	yyin = stdin;
	yylex();

	return 0;

}

int handleFiles( char* inputFilePath, char* outputFilePath ) {
	FILE* inputFileHandler = fopen(inputFilePath, "r");
	FILE* outputFileHandler = fopen(outputFilePath, "w");

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
	fclose( yyout );

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


#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "tokens.h"
#include "lexer.c"

int yywrap() {

}

typedef struct intNode {
	struct intNode* next;
	int value;
} intNode, listHeader;

intNode* createNode(int value) {
    intNode* newNode = (intNode*)malloc(sizeof(intNode));
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

void append(intNode** head, int value) {
    intNode* newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    intNode* last = *head;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = newNode;
}

char* tokenLabel (int token) {

	switch( token ) {
		case 1:  return "STRING";
		case 2 : return "DATE";
		case 3 : return "BOOL";
		case 4 : return "FLOAT";
		case 5 : return "INTEGER";
		case 6 : return "URL";
		case 7 : return "CARGO";
		case 8 : return "ESTADO";
		case 9 : return "NULL_VALUE";
		case 10: return "K_VERSION";
		case 11: return "K_FIRMA_DIGITAL";
		case 12: return "K_EMPRESAS";
		case 13: return "K_NOMBRE_EMPRESA";
		case 14: return "K_FUNDACION";
		case 15: return "K_DIRECCION";
		case 16: return "K_INGRESOS_ANUALES";
		case 17: return "K_PYME";
		case 18: return "K_LINK";
		case 19: return "K_CALLE";
		case 20: return "K_CIUDAD";
		case 21: return "K_PAIS";
		case 22: return "K_DEPARTAMENTOS";
		case 23: return "K_NOMBRE";
		case 24: return "K_JEFE";
		case 25: return "K_SUBDEPARTAMENTOS";
		case 26: return "K_EMPLEADOS";
		case 27: return "K_EDAD";
		case 28: return "K_CARGO";
		case 29: return "K_SALARIO";
		case 30: return "K_ACTIVO";
		case 31: return "K_FECHA_CONTRATACION";
		case 32: return "K_PROYECTOS";
		case 33: return "K_ESTADO";
		case 34: return "K_FECHA_INICIO";
		case 35: return "K_FECHA_FIN";
	}

}


int main ( int argc, char* argv[] )
{

	FILE* readFile = NULL;

	if (argc == 3) {
		readFile = fopen(argv[1], "r");
	}

	

	if (readFile == NULL) {
		printf("Ingrese un string y le dire que es\n");
		yyin = stdin;
	} else {
		printf( "%d\n", &readFile );
		yyin = readFile;
	}


	intNode* listHead = NULL;

	int foundTokens = 0;

	char x[1000];
	scanf("%1000s", x);

	while (strcmp(x, "quit") != 0) {
		int token = yylex();
		foundTokens++;
		printf("%s\n", tokenLabel( token ) );
		append(&listHead, token);
		scanf("%1000s", x);
	}

	
	int* returnArray = malloc( foundTokens * sizeof( int ) );

	intNode* currentNode = listHead;

	int currentIndex = 0;

	while( currentNode != NULL) {
		returnArray[currentIndex] = currentNode->value;
		currentNode = currentNode->next;
		currentIndex++;
	}

	



	return 0;

}


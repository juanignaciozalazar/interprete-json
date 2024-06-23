#include <stdio.h>
#include <string.h>
#include "lexer/lex.yy.c"
#include "interpreter.h"

int main(int argc, char *argv[])
{

	// Modo interprete por consola
	if (argc == 1)
	{
		puts("Desea usar el interprete lexico o el interprete sintactico?");
		puts("0 - Interprete Sintactico (Parser)");
		puts("1 - Interprete Lexico (Lexer)");
		char input[1];
		do
		{
			scanf("%1s", input);
			char flushChar;
			while ((flushChar = fgetc(stdin)) != '\n' && flushChar != EOF)
			{
			}
			if (handleExecutionMode(input) != 0)
			{
				puts("Elija una de las siguientes opciones:");
				puts("0 - Interprete Sintactico (Parser)");
				puts("1 - Interprete Lexico (Lexer)");
			}
			else
			{
				break;
			}

		} while (1);

		puts("Ingrese un string y le dire que es");
		puts("Se aceptaran hasta 8196 caracteres");
		puts("Presione CTRL + C para salir");

		if (executionMode == MODE_LEXER)
			puts("---  LEXER  ---");
		else
			puts("---  PARSER  ---");

		char inputBuffer[8196];
		FILE *tmp;
		while (scanf("%8196s", inputBuffer) != EOF)
		{
			tmp = tmpfile();
			if (tmp == NULL)
			{
				puts("Fallo la creacion del archivo temporal");
				return -1;
			}

			int i = 0;
			while (inputBuffer[i] != '\0')
			{
				fputc(inputBuffer[i], tmp);
				i++;
			}

			fputc('\0', tmp);

			// Apunta el archivo a su inicio para que lo lea el lexer.
			rewind(tmp);

			yyin = tmp;

			if (executionMode == MODE_LEXER)
				yylex();
			else
				yyparse();

			yyrestart(yyin);
			puts("");
			fclose(tmp);
		}
		return 0;
	}

	// Solo recibio el modo y no archivo
	if (argc == 2)
	{
		puts("Debe ingresar un archivo");
		puts("Modo de uso: interpreter.exe MODO(0/1) ARCHIVO_ENTRADA ARCHIVO_SALIDA? TEMPLATE?(Solo en parser)");
		return 0;
	}

	// Maneja el modo de ejecucion recibido
	int execution_result = handleExecutionMode(argv[1]);

	if (execution_result != 0)
	{
		printf("No se encontró el modo %s\n", execution_result);
		return 0;
	}

	// Modo y archivo de entrada
	if (argc == 3)
	{
		puts("Se recibio un solo archivo, se escribira la salida a la pantalla");
		execute(executionMode, argv[2], NULL);
		return 0;
	}

	// Modo, archivo de entrada y archivo de salida
	if (argc == 4)
	{

		puts("Se recibieron dos archivos, se escribira la salida en el segundo");
		printf("Archivo de entrada: %s\n", argv[2]);
		printf("Archivo de salida: %s\n", argv[3]);

		execute(executionMode, argv[2], argv[3]);
		return 0;
	}

	// Modo, archivo de entrada, salida y template
	if (argc == 5)
	{

		puts("Se recibieron tres archivos, se tomará el primero como entrada, el segundo como salida y el tercero como template");
		printf("Archivo de entrada: %s\n", argv[2]);
		printf("Archivo de salida: %s\n", argv[3]);
		printf("Archivo de template: %s\n", argv[4]);

		template_file_path = argv[4];

		execute(executionMode, argv[2], argv[3]);
		return 0;
	}

	return 0;
}

int handleExecutionMode(char *mode)
{

	if (strcmp(mode, "0") == 0)
	{
		executionMode = MODE_PARSING;
		return 0;
	}

	if (strcmp(mode, "1") == 0)
	{
		executionMode = MODE_LEXER;
		return 0;
	}

	return -1;
}

int handleFiles(char *inputFilePath, char *outputFilePath)
{
	FILE *inputFileHandler;
	FILE *outputFileHandler;

	inputFileHandler = fopen(inputFilePath, "r");
	
	// Valor por defecto
	outputFileHandler = stdout;

	if (outputFilePath != NULL)
	{
		outputFileHandler = fopen(outputFilePath, "w");
	} else { 

		// En caso de que no se reciba una ruta de salida,
		// Se debe crear un archivo con el mismo nombre que el archivo de
		// entrada pero con extension .html
		if (executionMode == MODE_PARSING) {
			char *newOutputFilePath = changeExtension(inputFilePath, "html");
			printf("Se generará la salida del parser en: %s", newOutputFilePath);
			outputFileHandler = fopen(newOutputFilePath, "w");
		}
	}

	if (inputFileHandler == NULL)
	{
		fclose(outputFileHandler);
		return 1;
	}

	if (outputFileHandler == NULL)
	{
		fclose(inputFileHandler);
		return 2;
	}

	yyin = inputFileHandler;
	yyout = outputFileHandler;

	return 0;
}

char *changeExtension(char *path, char *extension)
{
	// Encuentra la longitud de la ruta y la extensión
	size_t pathLen = strlen(path);
	size_t extLen = strlen(extension);

	// Encuentra el último punto en la ruta
	const char *lastDot = strrchr(path, '.');
	if (lastDot == NULL)
	{
		// Si no hay punto, simplemente agrega la nueva extensión al final
		char *newPath = malloc(pathLen + extLen + 2); // +1 para el punto y +1 para el terminador nulo
		if (newPath == NULL)
		{
			perror("Error al asignar memoria");
			return NULL;
		}
		strcpy(newPath, path);
		strcat(newPath, ".");
		strcat(newPath, extension);
		return newPath;
	}
	else
	{
		// Si hay un punto, reemplaza la extensión
		size_t baseLen = lastDot - path;
		char *newPath = (char *)malloc(baseLen + extLen + 2); // +1 para el punto y +1 para el terminador nulo
		if (newPath == NULL)
		{
			perror("Error al asignar memoria");
			return NULL;
		}
		strncpy(newPath, path, baseLen);
		newPath[baseLen] = '\0';
		strcat(newPath, ".");
		strcat(newPath, extension);
		return newPath;
	}
}

int lex(char *inputFilePath, char *outputFilePath)
{
	execute(MODE_LEXER, inputFilePath, outputFilePath);
}

int parse(char *inputFilePath, char *outputFilePath)
{
	execute(MODE_PARSING, inputFilePath, outputFilePath);
}

int execute(int mode, char *inputFilePath, char *outputFilePath)
{
	int filesOpened = handleFiles(inputFilePath, outputFilePath);

	if (filesOpened != 0)
	{
		return filesOpened;
	}

	if (mode == MODE_LEXER)
	{
		yylex();
	}
	else
	{
		yyparse();
	}

	fclose(yyin);

	if (yyout != stdout)
	{
		fclose(yyout);
	}

	return 0;
}
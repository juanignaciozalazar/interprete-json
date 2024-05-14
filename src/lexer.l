%{
#include <stdio.h>
#include <conio.h>
#include "parser.c"
#define YYDEBUG 1
%}

%option noyywrap
%option yylineno 
%option caseless 
%option outfile="main.c"
%option prefix=""

Ignorar	(\n|\t|\ )*
String \"([a-zA-Zñü0-9])\"
Year (19|20)[0-9]{2}
Month "1"0-2|[2-9]
Day (1|2)[0-9]|3(0|1)|0?[1-9]
Date \"{Year}-{Month}-{Day}\"
Bool "true"|"false"
Float [0-9]+\.[0-9]{1,2}
Integer [0-9]+
Dominio ([a-zA-Z]+(.[a-zA-Z])+)
Puerto :[0-9]{0,5}
Ruta (\/[a-zA-Z]+)+
Url [a-zA-Z]+"://"{Dominio}{Puerto}?{Ruta}?
Cargo \"("Product Analyst"|"Project Manager"|"UX Designer"|"Marketing"|"Developer"|"Devops"|"DB Admin")\"
Estado \"("To do"|"In progress"|"Canceled"|"Done"|"On hold")\"

%%

{Ignorar} { ; }
{String} { printf("STRING"); return STRING; }
{Date} { return DATE; }
{Bool} { return BOOL; }
{Float} { return FLOAT; }
{Integer} { return INTEGER; }
{Url} { return URL; }
{Cargo} { return CARGO; }
{Estado} { return ESTADO; }
"null" { return NULL_VALUE; }
"\"version\"" { return K_VERSION; }
"\"firma_digital\"" { return K_FIRMA_DIGITAL; }
"\"empresas\"" { return K_EMPRESAS; }
"\"nombre_empresa\"" { return K_NOMBRE_EMPRESA; }
"\"fundacion\"" { return K_FUNDACION; }
"\"direccion\"" { return K_DIRECCION; }
"\"ingresos_anuales\"" { return K_INGRESOS_ANUALES; }
"\"pyme\"" { return K_PYME; }
"\"link\"" { return K_LINK; }
"\"calle\"" { return K_CALLE; } 
"\"ciudad\"" { return K_CIUDAD; }
"\"pais\"" { return K_PAIS; }
"\"departamentos\"" { return K_DEPARTAMENTOS; }
"\"nombre\"" { return K_NOMBRE; } 
"\"jefe\"" { return K_JEFE; }
"\"subdepartamentos\"" { return K_SUBDEPARTAMENTOS; }
"\"empleados\"" { return K_EMPLEADOS; }
"\"edad\"" { return K_EDAD; }
"\"cargo\"" { return K_CARGO; }
"\"salario\"" { return K_SALARIO; }
"\"activo\"" { return K_ACTIVO; }
"\"fecha_contratacion\"" { return K_FECHA_CONTRATACION; }
"\"proyectos\"" { return K_PROYECTOS; }
"\"estado\"" { return K_ESTADO; }
"\"fecha_inicio\"" { return K_FECHA_INICIO; }
"\"fecha_fin\"" { return K_FECHA_FIN; }


%%

yyerror (char * msg)
{

 printf("%s\n",msg);

}

int main ( void )
{
	FILE *archivo;
	
	char caracteres[100];
	char NombreArchivo[100];
	archivo = fopen("Bienvenido.txt","r");
	
	if (archivo == NULL)
	{
		printf("\nBienvenido a nuestro analizador Sintactico");
	}
	else
	{
		while (feof(archivo) == 0)
		{
			fgets(caracteres,100,archivo);
			printf("%s",caracteres);
		}
		sleep (4);
	}
	
	fclose(archivo);
	system("cls");
	archivo = fopen("ruta.txt","r");

	if (archivo == NULL)
	printf("\nRuta del archivo a analizar:");
	else
	{
		while (feof(archivo) == 0)
		{
			fgets(caracteres,100,archivo);
			printf("%s",caracteres);
		}
	}
	fclose(archivo);
	printf("\n\n\nSi no tiene un archivo presione enter para empezar\t");
	printf("\n\n\nIngrese aqui por favor:\t");
	gets(NombreArchivo);
	yyin=fopen(NombreArchivo,"rt");
	if(yyin==NULL){
		printf("\n\n\nEs preferible que uses en una sola linea");
		printf("\n\n\nIngrese aqui su codigo:\t");
		yyin=stdin;
		yyparse();
	}
	else 
	{
		if (!yyparse()){
			system("cls");
			archivo = fopen("perfecto.txt","r");
			if (archivo == NULL)
			printf("\nSintaxis Perfecta");
			else
			{
				while (feof(archivo) == 0)
				{
				fgets(caracteres,100,archivo);
				printf("%s",caracteres);
				}
			}
				fclose(archivo);
				printf ("\n",yylineno);
			}
		else
		{
			printf ("Se encuentran errores en su codigo en linea: %i",yylineno);
		}
	}
	fclose(yyin);
	getch();
}
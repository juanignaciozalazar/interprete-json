%{
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "parser.c"
/*

*/
%}

%option noyywrap
%option yylineno 
%option caseless 
%option outfile="main.c"
%option prefix=""

Ignorar	(\n|\t|\ )*
String \"([a-zA-Z0-9])\"
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


{String} { return STRING; }
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
{Ignorar} { ; }


%%



int yyerror (char * msg)
{

 printf("%s\n",msg);

}

int main ( void )
{

	printf("Ingrese un string y le dire que es\n");
	
	char x[1000];

	scanf("%s", x);
	yyin = stdin;
	int token;
	while( token = yylex() ) {
		//printf("Se encontro el token con id: %d\n", token);
	}

	return 0;

}
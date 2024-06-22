%{
#include <stdio.h>
#include <string.h>
#include "../parser/parser.tab.c"
#ifndef STRING_BUFFER_SIZE
#define STRING_BUFFER_SIZE 1024
#endif

void showError( char *s);
void printToken( char *token ); 
void copyString();

%}

%option noyywrap
%option yylineno 
%option nodefault

Ignorar	("\n"|"\t"|" ")*
String \"([a-zA-Z0-9 \-\.]|"á"|"é"|"í"|"ó"|"ú"|"ü"|"Á"|"É"|"Í"|"Ó"|"Ú"|"Ü")*\"
Year ("19"|"20")[0-9]{2}
Month ("1"[0-2]|"0"[1-9])
Day (("1"|"2")[0-9]|"3"("0"|"1")|"0"?[1-9])
Date \"{Year}-{Month}-{Day}\"
Bool "true"|"false"
Float [0-9]+\.[0-9]{1,2}
Integer [0-9]+
Dominio [a-zA-Z]+(\.[a-zA-Z]+)+
Puerto :[0-9]{0,5}
Ruta (\/[a-zA-Z]+)+
Url \"[a-zA-Z]+"://"{Dominio}{Puerto}?{Ruta}?\"
Cargo \"("Product Analyst"|"Project Manager"|"UX Designer"|"Marketing"|"Developer"|"Devops"|"DB Admin")\"
Estado \"("To do"|"In progress"|"Canceled"|"Done"|"On hold")\"

%%


{Url} { printf("URL"); copyString(); return (URL); }
{Cargo} { printf("CARGO"); copyString(); return (CARGO); }
{Estado} { printf("ESTADO"); copyString(); return (ESTADO); }
"\"version\"" { printf("K_VERSION"); return (K_VERSION); }
"\"firma_digital\"" { printf("K_FIRMA_DIGITAL"); return (K_FIRMA_DIGITAL); }
"\"empresas\"" { printf("K_EMPRESAS"); return (K_EMPRESAS); }
"\"nombre_empresa\"" { printf("K_NOMBRE_EMPRESA"); return (K_NOMBRE_EMPRESA); }
"\"fundaci"("ó"|"o")"n\"" { printf("K_FUNDACION"); return (K_FUNDACION); }
"\"direcci"("ó"|"o")"n\"" { printf("K_DIRECCION"); return (K_DIRECCION); }
"\"ingresos_anuales\"" { printf("K_INGRESOS_ANUALES"); return (K_INGRESOS_ANUALES); }
"\"pyme\"" { printf("K_PYME"); return (K_PYME); }
"\"link\"" { printf("K_LINK"); return (K_LINK); }
"\"calle\"" { printf("K_CALLE"); return (K_CALLE); } 
"\"ciudad\"" { printf("K_CIUDAD"); return (K_CIUDAD); }
"\"pa"("í"|"i")"s\"" { printf("K_PAIS"); return (K_PAIS); }
"\"departamentos\"" { printf("K_DEPARTAMENTOS"); return (K_DEPARTAMENTOS); }
"\"nombre\"" { printf("K_NOMBRE"); return (K_NOMBRE); } 
"\"jefe\"" { printf("K_JEFE"); return (K_JEFE); }
"\"subdepartamentos\"" { printf("K_SUBDEPARTAMENTOS"); return (K_SUBDEPARTAMENTOS); }
"\"empleados\"" { printf("K_EMPLEADOS"); return (K_EMPLEADOS); }
"\"edad\"" { printf("K_EDAD"); return (K_EDAD); }
"\"cargo\"" { printf("K_CARGO"); return (K_CARGO); }
"\"salario\"" { printf("K_SALARIO"); return (K_SALARIO); }
"\"activo\"" { printf("K_ACTIVO"); return (K_ACTIVO); }
"\"fecha_contrataci"("ó"|"o")"n\"" { printf("K_FECHA_CONTRATACION"); return (K_FECHA_CONTRATACION); }
"\"proyectos\"" { printf("K_PROYECTOS"); return (K_PROYECTOS); }
"\"estado\"" { printf("K_ESTADO"); return (K_ESTADO); }
"\"fecha_inicio\"" { printf("K_FECHA_INICIO"); return (K_FECHA_INICIO); }
"\"fecha_fin\"" { printf("K_FECHA_FIN"); return (K_FECHA_FIN); }
{Ignorar} { printf(yytext); }
{Date} { printf("DATE"); copyString(); return (DATE); }
{String} { printf("STRING"); copyString(); return (STRING); }
{Bool} { printf("BOOL"); sscanf(yytext, "%s", yylval.boolean); return (BOOL); }
{Float} { printf("FLOAT"); yylval.number = atof(yytext); return (FLOAT); }
{Integer} { printf("INTEGER"); yylval.integer = atoi(yytext); return (INTEGER); }
"null" { printf("NULL_VALUE"); return (NULL_VALUE); }
\{   { printf("BRACE_OPEN"); return (BRACE_OPEN); }
\}   { printf("BRACE_CLOSE"); return (BRACE_CLOSE); }
\[  { printf("BRACKET_OPEN"); return (BRACKET_OPEN); }
\]  { printf("BRACKET_CLOSE"); return (BRACKET_CLOSE); }
,   { printf("COMMA"); return (COMMA); }
: { printf("COLON"); return (COLON); }
. { showError(yytext); return(OTRO); }


%%

void copyString () {
    yylval.string = malloc( STRING_BUFFER_SIZE * sizeof(char) );
    strcpy( yylval.string, yytext );

    // Elimina comillas
    yylval.string++;
    yylval.string[strlen(yylval.string) - 1] = 0;
}

void printToken( char *token) {

    if ()
}


void showError ( char* s ) {
    fprintf(stderr, "[Error Lexico: Caracter invalido => \"%s\"]", s);
}


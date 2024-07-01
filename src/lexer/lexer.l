%{
#include <stdio.h>
#include <string.h>
#include "../parser/parser.tab.c"
#ifndef STRING_BUFFER_SIZE
#define STRING_BUFFER_SIZE 1024
#endif

#ifndef MODE_LEXER
#define MODE_LEXER 1
#endif

int executionMode;
int lexResult = 0;

void showError( char *s);
void printToken( char *token ); 
void copyString();

%}

%option noyywrap
%option yylineno 
%option nodefault

Ignorar	("\n"|"\t"|" ")*
String \"([a-zA-Z0-9 ,\-\.\/\\'\:]|"á"|"é"|"í"|"ó"|"ú"|"ü"|"Á"|"É"|"Í"|"Ó"|"Ú"|"Ü")*\"
Year ("19"|"20")[0-9]{2}
Month ("1"[0-2]|"0"[1-9])
Day (("1"|"2")[0-9]|"3"("0"|"1")|"0"?[1-9])
Date \"{Year}-{Month}-{Day}\"
Bool "true"|"false"
Float [0-9]+\.[0-9]{1,2}
Integer [0-9]+
UrlChar [a-zA-Z0-9$\-\_\+\!\*\'\(\)\;\?\:\@\=\&\%\<\>\#\{\}\|\\\^\~\[\]\ ]
Dominio {UrlChar}+(\.{UrlChar}+)*
Puerto ":"((6553[0-5])|(655[0-2][0-9])|(65[0-4][0-9]{2})|(6[0-4][0-9]{3})|([1-5][0-9]{4})|([0-5]{0,5})|([0][0-9]{1,4})|([0-9]{1,4}))
Ruta ("/"{UrlChar})*
Url \"[a-zA-Z]+"://"{Dominio}{Puerto}?{Ruta}?\"
Cargo \"("Product Analyst"|"Project Manager"|"UX Designer"|"Marketing"|"Developer"|"Devops"|"DB Admin")\"
Estado \"("To do"|"In progress"|"Canceled"|"Done"|"On hold")\"

%%


{Url} { printToken("URL"); copyString(); if (executionMode == MODE_PARSING) return(URL); }
{Cargo} { printToken("CARGO"); copyString(); if (executionMode == MODE_PARSING) return(CARGO); }
{Estado} { printToken("ESTADO"); copyString(); if (executionMode == MODE_PARSING) return(ESTADO); }
"\"version\"" { printToken("K_VERSION"); if (executionMode == MODE_PARSING) return(K_VERSION); }
"\"firma_digital\"" { printToken("K_FIRMA_DIGITAL"); if (executionMode == MODE_PARSING) return(K_FIRMA_DIGITAL); }
"\"empresas\"" { printToken("K_EMPRESAS"); if (executionMode == MODE_PARSING) return(K_EMPRESAS); }
"\"nombre_empresa\"" { printToken("K_NOMBRE_EMPRESA"); if (executionMode == MODE_PARSING) return(K_NOMBRE_EMPRESA); }
"\"fundaci"("ó"|"o")"n\"" { printToken("K_FUNDACION"); if (executionMode == MODE_PARSING) return(K_FUNDACION); }
"\"direcci"("ó"|"o")"n\"" { printToken("K_DIRECCION"); if (executionMode == MODE_PARSING) return(K_DIRECCION); }
"\"ingresos_anuales\"" { printToken("K_INGRESOS_ANUALES"); if (executionMode == MODE_PARSING) return(K_INGRESOS_ANUALES); }
"\"pyme\"" { printToken("K_PYME"); if (executionMode == MODE_PARSING) return(K_PYME); }
"\"link\"" { printToken("K_LINK"); if (executionMode == MODE_PARSING) return(K_LINK); }
"\"calle\"" { printToken("K_CALLE"); if (executionMode == MODE_PARSING) return(K_CALLE); } 
"\"ciudad\"" { printToken("K_CIUDAD"); if (executionMode == MODE_PARSING) return(K_CIUDAD); }
"\"pa"("í"|"i")"s\"" { printToken("K_PAIS"); if (executionMode == MODE_PARSING) return(K_PAIS); }
"\"departamentos\"" { printToken("K_DEPARTAMENTOS"); if (executionMode == MODE_PARSING) return(K_DEPARTAMENTOS); }
"\"nombre\"" { printToken("K_NOMBRE"); if (executionMode == MODE_PARSING) return(K_NOMBRE); } 
"\"jefe\"" { printToken("K_JEFE"); if (executionMode == MODE_PARSING) return(K_JEFE); }
"\"subdepartamentos\"" { printToken("K_SUBDEPARTAMENTOS"); if (executionMode == MODE_PARSING) return(K_SUBDEPARTAMENTOS); }
"\"empleados\"" { printToken("K_EMPLEADOS"); if (executionMode == MODE_PARSING) return(K_EMPLEADOS); }
"\"edad\"" { printToken("K_EDAD"); if (executionMode == MODE_PARSING) return(K_EDAD); }
"\"cargo\"" { printToken("K_CARGO"); if (executionMode == MODE_PARSING) return(K_CARGO); }
"\"salario\"" { printToken("K_SALARIO"); if (executionMode == MODE_PARSING) return(K_SALARIO); }
"\"activo\"" { printToken("K_ACTIVO"); if (executionMode == MODE_PARSING) return(K_ACTIVO); }
"\"fecha_contrataci"("ó"|"o")"n\"" { printToken("K_FECHA_CONTRATACION"); if (executionMode == MODE_PARSING) return(K_FECHA_CONTRATACION); }
"\"proyectos\"" { printToken("K_PROYECTOS"); if (executionMode == MODE_PARSING) return(K_PROYECTOS); }
"\"estado\"" { printToken("K_ESTADO"); if (executionMode == MODE_PARSING) return(K_ESTADO); }
"\"fecha_inicio\"" { printToken("K_FECHA_INICIO"); if (executionMode == MODE_PARSING) return(K_FECHA_INICIO); }
"\"fecha_fin\"" { printToken("K_FECHA_FIN"); if (executionMode == MODE_PARSING) return(K_FECHA_FIN); }
{Ignorar} { printToken(yytext); }
{Date} { printToken("DATE"); copyString(); if (executionMode == MODE_PARSING) return(DATE); }
{String} { printToken("STRING"); copyString(); if (executionMode == MODE_PARSING) return(STRING); }
{Bool} { printToken("BOOL"); sscanf(yytext, "%s", yylval.boolean); if (executionMode == MODE_PARSING) return(BOOL); }
{Float} { printToken("FLOAT"); yylval.number = atof(yytext); if (executionMode == MODE_PARSING) return(FLOAT); }
{Integer} { printToken("INTEGER"); yylval.integer = atoi(yytext); if (executionMode == MODE_PARSING) return(INTEGER); }
"null" { printToken("NULL_VALUE"); if (executionMode == MODE_PARSING) return(NULL_VALUE); }
\{   { printToken("BRACE_OPEN"); if (executionMode == MODE_PARSING) return(BRACE_OPEN); }
\}   { printToken("BRACE_CLOSE"); if (executionMode == MODE_PARSING) return(BRACE_CLOSE); }
\[  { printToken("BRACKET_OPEN"); if (executionMode == MODE_PARSING) return(BRACKET_OPEN); }
\]  { printToken("BRACKET_CLOSE"); if (executionMode == MODE_PARSING) return(BRACKET_CLOSE); }
,   { printToken("COMMA"); if (executionMode == MODE_PARSING) return(COMMA); }
: { printToken("COLON"); if (executionMode == MODE_PARSING) return(COLON); }
. { if (executionMode == MODE_PARSING) return -1; showError(yytext); return(OTRO); }


%%

void copyString () {
    yylval.string = malloc( STRING_BUFFER_SIZE * sizeof(char) );
    strcpy( yylval.string, yytext );

    // Elimina comillas
    yylval.string++;
    yylval.string[strlen(yylval.string) - 1] = 0;
}

void printToken( char *token) {

    if (executionMode == MODE_LEXER) {
        fprintf(yyout, token);
        return;
    }

    if (executionMode == MODE_PARSING) {
        printf(token);
        return;
    }
}


void showError ( char* s ) {
    FILE *destination;
    if (executionMode == MODE_LEXER) {
        destination = yyout;
    } else {
        destination = stderr;
    }
    fprintf(destination, "[Error Lexico: Caracter invalido => \"%s\"]", s);
    lexResult = -1;
}


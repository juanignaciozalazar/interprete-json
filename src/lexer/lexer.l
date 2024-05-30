%{
#include <stdio.h>
#include <conio.h>
#define YYDEBUG 0
%}

%option noyywrap
%option yylineno 
%option caseless 
%option outfile="lexer.c"

Ignorar	("\n"|"\t"|" ")*
String \"[a-zA-Z0-9áéíóúüÁÉÍÓÚÜ ]*\"
Year ("19"|"20")[0-9]{2}
Month ("1"[0-2]|"0"[1-9])
Day (("1"|"2")[0-9]|"3"("0"|"1")|"0"?[1-9])
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


{Url} { fprintf(yyout, "%s", "URL"); }
{Cargo} { fprintf(yyout, "%s", "CARGO"); }
{Estado} { fprintf(yyout, "%s", "ESTADO"); }
"\"version\"" { fprintf(yyout, "%s", "K_VERSION"); }
"\"firma_digital\"" { fprintf(yyout, "%s", "K_FIRMA_DIGITAL"); }
"\"empresas\"" { fprintf(yyout, "%s", "K_EMPRESAS"); }
"\"nombre_empresa\"" { fprintf(yyout, "%s", "K_NOMBRE_EMPRESA"); }
"\"fundacion\"" { fprintf(yyout, "%s", "K_FUNDACION"); }
"\"direccion\"" { fprintf(yyout, "%s", "K_DIRECCION"); }
"\"ingresos_anuales\"" { fprintf(yyout, "%s", "K_INGRESOS_ANUALES"); }
"\"pyme\"" { fprintf(yyout, "%s", "K_PYME"); }
"\"link\"" { fprintf(yyout, "%s", "K_LINK"); }
"\"calle\"" { fprintf(yyout, "%s", "K_CALLE"); } 
"\"ciudad\"" { fprintf(yyout, "%s", "K_CIUDAD"); }
"\"pais\"" { fprintf(yyout, "%s", "K_PAIS"); }
"\"departamentos\"" { fprintf(yyout, "%s", "K_DEPARTAMENTOS"); }
"\"nombre\"" { fprintf(yyout, "%s", "K_NOMBRE"); } 
"\"jefe\"" { fprintf(yyout, "%s", "K_JEFE"); }
"\"subdepartamentos\"" { fprintf(yyout, "%s", "K_SUBDEPARTAMENTOS"); }
"\"empleados\"" { fprintf(yyout, "%s", "K_EMPLEADOS"); }
"\"edad\"" { fprintf(yyout, "%s", "K_EDAD"); }
"\"cargo\"" { fprintf(yyout, "%s", "K_CARGO"); }
"\"salario\"" { fprintf(yyout, "%s", "K_SALARIO"); }
"\"activo\"" { fprintf(yyout, "%s", "K_ACTIVO"); }
"\"fecha_contrataci[o|ó]n\"" { fprintf(yyout, "%s", "K_FECHA_CONTRATACION"); }
"\"proyectos\"" { fprintf(yyout, "%s", "K_PROYECTOS"); }
"\"estado\"" { fprintf(yyout, "%s", "K_ESTADO"); }
"\"fecha_inicio\"" { fprintf(yyout, "%s", "K_FECHA_INICIO"); }
"\"fecha_fin\"" { fprintf(yyout, "%s", "K_FECHA_FIN"); }
{Ignorar} { ; }
{Date} { fprintf(yyout, "%s", "DATE"); }
{Bool} { fprintf(yyout, "%s", "BOOL"); }
{Float} { fprintf(yyout, "%s", "FLOAT"); }
{Integer} { fprintf(yyout, "%s", "INTEGER"); }
"null" { fprintf(yyout, "%s", "NULL_VALUE"); }
{String} { fprintf(yyout, "%s", "STRING"); }

%%


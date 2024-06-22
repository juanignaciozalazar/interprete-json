%{
  #include <stdio.h>
  #include "../asprintf.h"
  #define YYDEBUG 1
  #define STRING_BUFFER_SIZE 1024
  int yystopparser=0;
  int yylex();
  int yyerror(char *s);
%}

%error-verbose

%token COMMA COLON BRACE_OPEN BRACE_CLOSE BRACKET_OPEN BRACKET_CLOSE STRING DATE BOOL FLOAT INTEGER URL CARGO ESTADO NULL_VALUE K_VERSION K_FIRMA_DIGITAL K_EMPRESAS K_NOMBRE_EMPRESA K_FUNDACION K_DIRECCION K_INGRESOS_ANUALES K_PYME K_LINK K_CALLE K_CIUDAD K_PAIS K_DEPARTAMENTOS K_NOMBRE  K_JEFE K_SUBDEPARTAMENTOS K_EMPLEADOS K_EDAD K_CARGO K_SALARIO K_ACTIVO K_FECHA_CONTRATACION K_PROYECTOS K_ESTADO K_FECHA_INICIO K_FECHA_FIN OTRO

%type <string> STRING ESTADO DATE;
%type <integer> INTEGER;
%type <boolean> BOOL;
%type <string> URL;
%type <string> K_VERSION;
%type <string> K_FIRMA_DIGITAL;
%type <string> nombre_empresa;
%type <string> empleados_lista;
%type <string> link;
%type <string> nombre_subdepartamento;
%type <string> empleados;
%type <string> empleado_nt;
%type <string> nombre_empleado;
%type <string> proyectos_lista;
%type <string> proyecto;
%type <string> proyecto_atributos;
%type <string> nombre_proyecto;
%type <string> estado;
%type <string> fecha_fin nombre_departamento proyecto_nt proyectos fecha_inicio json_atributos version firma_digital empresas empresas_lista empresa empresa_nt empresa_atributos empleado empleado_atributos departamentos departamentos_lista departamento_nt departamento_atributos departamento subdepartamento_atributos subdepartamentos_lista subdepartamento_nt subdepartamento subdepartamentos;

%union{
  double number;
  char boolean[5];
  int integer;
  char *string;
}

%start json

%%

json: BRACE_OPEN json_atributos BRACE_CLOSE    { fprintf(yyout, "<!DOCTYPE html>\n<html><head><style> table, th, td { border: 1px solid black; border-collapse: collapse; }</style></head><body>%s</body></html>", $2); };

json_atributos:
  empresas COMMA version COMMA firma_digital    { $$ = $1; }
| empresas COMMA firma_digital COMMA version    { $$ = $1; }
| version COMMA empresas COMMA firma_digital    { $$ = $3; }
| version COMMA firma_digital COMMA empresas    { $$ = $5; }
| firma_digital COMMA empresas COMMA version    { $$ = $3; }
| firma_digital COMMA version COMMA empresas    { $$ = $5; }
| version COMMA empresas                        { $$ = $3; }
| firma_digital COMMA empresas                  { $$ = $3; }
| empresas COMMA firma_digital                  { $$ = $1; }
| empresas COMMA version                        { $$ = $1; }
| empresas                                      { $$ = $1; }
;

version:
  K_VERSION COLON STRING
| K_VERSION COLON NULL_VALUE
;
		
firma_digital:
  K_FIRMA_DIGITAL COLON STRING
| K_FIRMA_DIGITAL COLON NULL_VALUE
;

empresas: K_EMPRESAS COLON empresas_lista   { $$ = $3; }
;


empresas_lista: BRACKET_OPEN empresa_nt BRACKET_CLOSE    { $$ = $2; }
;

empresa_nt:
  empresa COMMA empresa_nt    { char *buf; asprintf(&buf, "%s%s", $1,$3); $$ = buf; }
| empresa                     { $$ = $1; }
;

empresa: BRACE_OPEN empresa_atributos BRACE_CLOSE    { char *buf; asprintf(&buf, "<div style=\"border-color:grey;border-width:1px;border-style:inset;\">%s</div>", $2); $$ = buf; };

empresa_atributos:
  nombre_empresa COMMA fundacion COMMA direccion COMMA ingresos_anuales COMMA pyme COMMA link COMMA departamentos   { char *buf; asprintf(&buf, "%s%s%s", $1,$11,$13); $$ = buf; }
| nombre_empresa COMMA fundacion COMMA direccion COMMA ingresos_anuales COMMA pyme COMMA departamentos              { char *buf; asprintf(&buf, "%s%s", $1,$11); $$ = buf; }
| nombre_empresa COMMA fundacion COMMA ingresos_anuales COMMA pyme COMMA link COMMA departamentos                   { char *buf; asprintf(&buf, "%s%s", $1,$9,$11); $$ = buf; }
| nombre_empresa COMMA fundacion COMMA ingresos_anuales COMMA pyme COMMA departamentos                              { char *buf; asprintf(&buf, "%s%s", $1,$9); $$ = buf; }
;

nombre_empresa: K_NOMBRE_EMPRESA COLON STRING   { char *buf; asprintf(&buf, "<h1>%s</h1>", $3); $$ = buf; }
;

fundacion: K_FUNDACION COLON INTEGER;

direccion:
  K_DIRECCION COLON BRACE_OPEN direccion_atributos BRACE_CLOSE
| K_DIRECCION COLON BRACE_OPEN BRACE_CLOSE
| K_DIRECCION COLON NULL_VALUE
;

ingresos_anuales: K_INGRESOS_ANUALES COLON FLOAT;

pyme: K_PYME COLON BOOL;

link:
  K_LINK COLON URL          { char* buf; asprintf(&buf, "<a href=\"%s\">%s</a>", $3, $3 ); $$ = buf; }
| K_LINK COLON NULL_VALUE   { $$ = ""; }
;
		
direccion_atributos:
  calle COMMA ciudad COMMA pais
| ciudad COMMA calle COMMA pais
| pais COMMA calle COMMA ciudad
| calle COMMA pais COMMA ciudad
| ciudad COMMA pais COMMA calle
| pais COMMA ciudad COMMA calle
;

calle: 
  K_CALLE COLON STRING
;

ciudad: 
  K_CIUDAD COLON STRING
;

pais: 
  K_PAIS COLON STRING
;

departamentos: 
  K_DEPARTAMENTOS COLON departamentos_lista   { $$ = $3;}
;

departamentos_lista: 
  BRACKET_OPEN departamento_nt BRACKET_CLOSE    { $$ = $2; }
;

departamento_nt:
  departamento COMMA departamento_nt    { char *buf; asprintf(&buf, "%s%s", $1,$3); $$ = buf; }
| departamento                          { $$ = $1; }
;

departamento: 
  BRACE_OPEN departamento_atributos BRACE_CLOSE   { $$ = $2; }
;

departamento_atributos:
  nombre_departamento COMMA jefe_departamento COMMA subdepartamentos    { char *buf; asprintf(&buf, "%s%s", $1, $5); $$ = buf; }    
| jefe_departamento COMMA nombre_departamento COMMA subdepartamentos    { char *buf; asprintf(&buf, "%s%s", $3, $5); $$ = buf; }
| subdepartamentos COMMA nombre_departamento COMMA jefe_departamento    { char *buf; asprintf(&buf, "%s%s", $3, $1); $$ = buf; }
| nombre_departamento COMMA subdepartamentos COMMA jefe_departamento    { char *buf; asprintf(&buf, "%s%s", $1, $3); $$ = buf; }
| jefe_departamento COMMA subdepartamentos COMMA nombre_departamento    { char *buf; asprintf(&buf, "%s%s", $5, $3); $$ = buf; }
| subdepartamentos COMMA jefe_departamento COMMA nombre_departamento    { char *buf; asprintf(&buf, "%s%s", $5, $1); $$ = buf; }
;

nombre_departamento: 
  K_NOMBRE COLON STRING    { char *buf; asprintf(&buf, "<h2>%s</h2>", $3); $$ = buf; }
;

jefe_departamento: 
  K_JEFE COLON STRING
| K_JEFE COLON NULL_VALUE
;

subdepartamentos: 
  K_SUBDEPARTAMENTOS COLON subdepartamentos_lista   { $$ = $3; }
;

subdepartamentos_lista: BRACKET_OPEN subdepartamento_nt BRACKET_CLOSE    { $$ = $2; }

subdepartamento_nt:
  subdepartamento COMMA subdepartamento_nt    { char *buf; asprintf(&buf, "%s%s", $1,$3); $$ = buf; }
| subdepartamento                             { $$ = $1; }
;

subdepartamento: 
  BRACE_OPEN subdepartamento_atributos BRACE_CLOSE    { $$ = $2; }
;

subdepartamento_atributos:
  nombre_subdepartamento COMMA jefe_subdepartamento COMMA empleados   { char *buf; asprintf( &buf, "%s%s", $1,$5); $$ = buf; }
| jefe_subdepartamento COMMA nombre_subdepartamento COMMA empleados   { char *buf; asprintf( &buf, "%s%s", $3,$5); $$ = buf; }
| empleados COMMA nombre_subdepartamento COMMA jefe_subdepartamento   { char *buf; asprintf( &buf, "%s%s", $3,$1); $$ = buf; }
| nombre_subdepartamento COMMA empleados COMMA jefe_subdepartamento   { char *buf; asprintf( &buf, "%s%s", $1,$3); $$ = buf; }
| jefe_subdepartamento COMMA empleados COMMA nombre_subdepartamento   { char *buf; asprintf( &buf, "%s%s", $5,$3); $$ = buf; }
| empleados COMMA jefe_subdepartamento COMMA nombre_subdepartamento   { char *buf; asprintf( &buf, "%s%s", $5,$1); $$ = buf; }
| nombre_subdepartamento COMMA jefe_subdepartamento                   { $$ = $1; }
| jefe_subdepartamento COMMA nombre_subdepartamento                   { $$ = $3; }
| nombre_subdepartamento COMMA empleados                              { char *buf; asprintf( &buf, "%s%s", $1,$3); $$ = buf; }
| empleados COMMA nombre_subdepartamento                              { char *buf; asprintf( &buf, "%s%s", $3,$1); $$ = buf; }
| nombre_subdepartamento                                              { $$ = $1; }
;

nombre_subdepartamento: 
  K_NOMBRE COLON STRING   { char *buf; asprintf(&buf, "<h3>%s</h3>", $3); $$ = buf; }
;

jefe_subdepartamento: 
  K_JEFE COLON STRING
| K_JEFE COLON NULL_VALUE
;

empleados: 
  K_EMPLEADOS COLON empleados_lista    { $$ = $3; }
;

empleados_lista: 
  BRACKET_OPEN empleado_nt BRACKET_CLOSE    { char *buf; asprintf(&buf, "<ul>%s</ul>", $2); $$ = buf; }
| BRACKET_OPEN BRACKET_CLOSE                { $$ = ""; }
| NULL_VALUE                                { $$ = ""; }
;

empleado_nt:
  empleado COMMA empleado_nt    { char *buf; asprintf(&buf, "%s%s", $1,$3); $$ = buf; }
| empleado                      { $$ = $1; }
;

empleado: BRACE_OPEN empleado_atributos BRACE_CLOSE    { $$ = $2;}
;

empleado_atributos:
  nombre_empleado COMMA edad COMMA cargo COMMA salario COMMA activo COMMA fecha_contratacion COMMA proyectos    { char *buf; asprintf(&buf, "%s%s", $1,$13); $$ = buf; }
| nombre_empleado COMMA edad COMMA cargo COMMA salario COMMA activo COMMA fecha_contratacion                    { $$ = $1; }
| nombre_empleado COMMA cargo COMMA salario COMMA activo COMMA fecha_contratacion COMMA proyectos               { char *buf; asprintf(&buf, "%s%s", $1, $11); $$ = buf; }
| nombre_empleado COMMA cargo COMMA salario COMMA activo COMMA fecha_contratacion                               { $$ = $1; }
;

nombre_empleado: K_NOMBRE COLON STRING    { char *buf; asprintf(&buf, "<li>%s</li>", $3); $$ = buf; }
;

edad:
  K_EDAD COLON INTEGER
| K_EDAD COLON NULL_VALUE
;

cargo: K_CARGO COLON CARGO;

salario: K_SALARIO COLON FLOAT;

activo: K_ACTIVO COLON BOOL;

fecha_contratacion: K_FECHA_CONTRATACION COLON DATE;

proyectos: 
  K_PROYECTOS COLON proyectos_lista   { $$ = $3; }
;

proyectos_lista: 
  BRACKET_OPEN proyecto_nt BRACKET_CLOSE    { char* buf; asprintf(&buf, "<table> <tr> <th>Nombre</th> <th>Estado</th> <th>Fecha de Inicio</th> <th>Fecha de Fin</th> </tr> %s </table>", $2); $$ = buf; }
| BRACKET_OPEN BRACKET_CLOSE                { $$ = ""; }
| NULL_VALUE                                { $$ = ""; }
;

proyecto_nt: 
  proyecto COMMA proyecto_nt    { char *buf; asprintf(&buf, "%s%s", $1, $3); $$ = buf; }
| proyecto                      { $$ = $1; }
;

proyecto: 
  BRACE_OPEN proyecto_atributos BRACE_CLOSE    { char *buf; asprintf(&buf, "<tr>%s</tr>", $2); $$ = buf; }
;

proyecto_atributos:
  nombre_proyecto COMMA estado COMMA fecha_inicio COMMA fecha_fin   { char *buf; asprintf(&buf, "<td>%s</td> <td>%s</td> <td>%s</td> <td>%s</td>", $1,$3,$5,$7); $$ = buf; }
| nombre_proyecto COMMA estado COMMA fecha_inicio                   { char *buf; asprintf(&buf, "<td>%s</td> <td>%s</td> <td>%s</td> <td>-</td>", $1,$3,$5); $$ = buf; }
| nombre_proyecto COMMA fecha_inicio COMMA fecha_fin                { char *buf; asprintf(&buf, "<td>%s</td> <td>-</td> <td>%s</td> <td>%s</td>", $1,$3,$5); $$ = buf; }
| nombre_proyecto COMMA fecha_inicio                                { char *buf; asprintf(&buf, "<td>%s</td> <td>-</td> <td>%s</td> <td>-</td>", $1,$3); $$ = buf; }
;

nombre_proyecto: K_NOMBRE COLON STRING    { $$ = $3; }
;

estado:
  K_ESTADO COLON ESTADO   { $$ = $3 }
| K_ESTADO COLON NULL_VALUE   { char *buf; asprintf(&buf, "-"); $$ = buf; }
;

fecha_inicio: K_FECHA_INICIO COLON DATE { $$ = $3; }
;

fecha_fin:
  K_FECHA_FIN COLON DATE          { $$ = $3; }
| K_FECHA_FIN COLON NULL_VALUE    { char *buf; asprintf(&buf, "-"); $$ = buf; }
;

%%

int yyerror(char *error) {
  fprintf(stderr, "[Error Sintactico (%s) en linea %d => %s]\n",yytext, yylineno, error);
}
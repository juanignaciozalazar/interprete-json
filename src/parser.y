%{
	int yystopparser=0;
	#define YYDEBUG 1
%}

%token STRING DATE BOOL FLOAT INTEGER URL CARGO ESTADO NULL_VALUE K_VERSION K_FIRMA_DIGITAL K_EMPRESAS K_NOMBRE_EMPRESA K_FUNDACION K_DIRECCION K_INGRESOS_ANUALES K_PYME K_LINK K_CALLE K_CIUDAD K_PAIS K_DEPARTAMENTOS K_NOMBRE  K_JEFE K_SUBDEPARTAMENTOS K_EMPLEADOS K_EDAD K_CARGO K_SALARIO K_ACTIVO K_FECHA_CONTRATACION K_PROYECTOS K_ESTADO K_FECHA_INICIO K_FECHA_FIN

%start json

%%

json: '{' json_atributos '}';

json_atributos:
  empresas ',' version ',' firma_digital
| empresas ',' firma_digital ',' version
| version ',' empresas ',' firma_digital
| version ',' firma_digital ',' empresas
| firma_digital ',' empresas ',' version
| firma_digital ',' version ',' empresas
| version ',' empresas
| firma_digital ',' empresas
| empresas ',' firma_digital
| empresas ',' version
| empresas
;

version:
  K_VERSION ':' STRING
| K_VERSION ':' NULL_VALUE
;
		
firma_digital:
  K_FIRMA_DIGITAL ':' STRING
| K_FIRMA_DIGITAL ':' NULL_VALUE
;

empresas: K_EMPRESAS ':' empresas_lista;


empresas_lista: '[' empresa_nt ']';

empresa_nt:
  empresa ',' empresa_nt
| empresa
;

empresa: '{' empresa_atributos '}';

empresa_atributos:
  nombre_empresa ',' fundacion ',' direccion ',' ingresos_anuales ',' pyme ',' link ',' departamentos
| nombre_empresa ',' fundacion ',' direccion ',' ingresos_anuales ',' pyme ',' departamentos
| nombre_empresa ',' fundacion ',' ingresos_anuales ',' pyme ',' link ',' departamentos
| nombre_empresa ',' fundacion ',' ingresos_anuales ',' pyme ',' departamentos
;

nombre_empresa: K_NOMBRE_EMPRESA ':' STRING;

fundacion: K_FUNDACION ':' INTEGER;

direccion:
  K_DIRECCION ':' '{' direccion_atributos '}'
| K_DIRECCION ':' '{' '}'
| K_DIRECCION ':' NULL_VALUE
;

ingresos_anuales: K_INGRESOS_ANUALES ':' FLOAT;

pyme: K_PYME ':' BOOL;

link:
  K_LINK ':' URL
| K_LINK ':' NULL_VALUE
;
		
direccion_atributos:
  calle ',' ciudad ',' pais
| ciudad ',' calle ',' pais
| pais ',' calle ',' ciudad
| calle ',' pais ',' ciudad
| ciudad ',' pais ',' calle
| pais ',' ciudad ',' calle
;

calle: K_CALLE ':' STRING;

ciudad: K_CIUDAD ':' STRING;

pais: K_PAIS ':' STRING;

departamentos: K_DEPARTAMENTOS ':' departamentos_lista;

departamentos_lista: '[' departamento_nt ']';

departamento_nt:
  departamento ',' departamento_nt
| departamento
;

departamento: '{' departamento_atributos '}';

departamento_atributos:
  nombre_departamento ',' jefe_departamento ',' subdepartamentos
| jefe_departamento ',' nombre_departamento ',' subdepartamentos
| subdepartamentos ',' nombre_departamento ',' jefe_departamento
| nombre_departamento ',' subdepartamentos ',' nombre_departamento
| jefe_departamento ',' subdepartamentos ',' nombre_departamento
| subdepartamentos ',' jefe_departamento ',' nombre_departamento
;

nombre_departamento: K_NOMBRE ':' STRING;

jefe_departamento: 
  K_JEFE ':' STRING
| K_JEFE ':' NULL_VALUE
;

subdepartamentos: K_SUBDEPARTAMENTOS ':' subdepartamentos_lista;

subdepartamentos_lista: '[' subdepartamento_nt ']';

subdepartamento_nt:
  subdepartamento ',' subdepartamento_nt
| subdepartamento
;

subdepartamento: '{' subdepartamento_atributos '}';

subdepartamento_atributos:
  nombre_subdepartamento ',' jefe_subdepartamento ',' empleados
| jefe_subdepartamento ',' nombre_subdepartamento ',' empleados
| empleados ',' nombre_subdepartamento ',' jefe_subdepartamento
| nombre_subdepartamento ',' empleados ',' jefe_subdepartamento
| jefe_subdepartamento ',' empleados ',' nombre_subdepartamento
| empleados ',' jefe_subdepartamento ',' nombre_subdepartamento
| nombre_subdepartamento ',' jefe_subdepartamento
| jefe_subdepartamento ',' nombre_subdepartamento
| nombre_subdepartamento ',' empleados
| empleados ',' nombre_subdepartamento
| nombre_subdepartamento
;

nombre_subdepartamento: K_NOMBRE ':' STRING;

jefe_subdepartamento: 
  K_JEFE ':' STRING
| K_JEFE ':' NULL_VALUE
;

empleados: K_EMPLEADOS ':' empleados_lista;

empleados_lista: 
  '[' empleado_nt ']'
| '[' ']'
| NULL_VALUE
;

empleado_nt:
  empleado ',' empleado_nt
| empleado
;

empleado: '{' empleado_atributos '}';

empleado_atributos:
  nombre_empleado ',' edad ',' cargo ',' salario ',' activo ',' fecha_contratacion ',' proyectos
| nombre_empleado ',' edad ',' cargo ',' salario ',' activo ',' fecha_contratacion
| nombre_empleado ',' cargo ',' salario ',' activo ',' fecha_contratacion ',' proyectos
| nombre_empleado ',' cargo ',' salario ',' activo ',' fecha_contratacion
;

nombre_empleado: K_NOMBRE ':' STRING;

edad:
  K_EDAD ':' INTEGER
| K_EDAD ':' NULL_VALUE
;

cargo: K_CARGO ':' CARGO;

salario: K_SALARIO ':' INTEGER;

activo: K_ACTIVO ':' BOOL;

fecha_contratacion: K_FECHA_CONTRATACION ':' DATE;

proyectos: K_PROYECTOS ':' proyectos_lista;

proyectos_lista: 
  '[' proyecto_nt ']'
| '[' ']'
| NULL_VALUE
;

proyecto_nt: 
  proyecto ',' proyecto_nt
| proyecto
;

proyecto: '{' proyecto_atributos '}';

proyecto_atributos:
  nombre_proyecto ',' estado ',' fecha_inicio ',' fecha_fin
| nombre_proyecto ',' estado ',' fecha_inicio
| nombre_proyecto ',' fecha_inicio ',' fecha_fin
| nombre_proyecto ',' fecha_inicio
;

nombre_proyecto: K_NOMBRE ':' STRING;

estado:
  K_ESTADO ':' ESTADO
| K_ESTADO ':' NULL_VALUE
;

fecha_inicio: K_FECHA_INICIO ':' DATE;

fecha_fin:
  K_FECHA_FIN ':' DATE
| K_FECHA_FIN ':' NULL_VALUE
;

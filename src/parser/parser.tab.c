
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parser.y"

  #include <stdio.h>
  #include "../lib/asprintf.h"
  #define YYDEBUG 1
  #define STRING_BUFFER_SIZE 1024
  #define READ_BUFFER_SIZE 4096
  #define MODE_PARSING 0
  #define MODE_LEXER 1
  int yystopparser=0;
  char *template_file_path;
  int executionMode;
  int yylex();
  int yyerror(char *s);
  void initTemplate();


/* Line 189 of yacc.c  */
#line 90 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     COMMA = 258,
     COLON = 259,
     BRACE_OPEN = 260,
     BRACE_CLOSE = 261,
     BRACKET_OPEN = 262,
     BRACKET_CLOSE = 263,
     STRING = 264,
     DATE = 265,
     BOOL = 266,
     FLOAT = 267,
     INTEGER = 268,
     URL = 269,
     CARGO = 270,
     ESTADO = 271,
     NULL_VALUE = 272,
     K_VERSION = 273,
     K_FIRMA_DIGITAL = 274,
     K_EMPRESAS = 275,
     K_NOMBRE_EMPRESA = 276,
     K_FUNDACION = 277,
     K_DIRECCION = 278,
     K_INGRESOS_ANUALES = 279,
     K_PYME = 280,
     K_LINK = 281,
     K_CALLE = 282,
     K_CIUDAD = 283,
     K_PAIS = 284,
     K_DEPARTAMENTOS = 285,
     K_NOMBRE = 286,
     K_JEFE = 287,
     K_SUBDEPARTAMENTOS = 288,
     K_EMPLEADOS = 289,
     K_EDAD = 290,
     K_CARGO = 291,
     K_SALARIO = 292,
     K_ACTIVO = 293,
     K_FECHA_CONTRATACION = 294,
     K_PROYECTOS = 295,
     K_ESTADO = 296,
     K_FECHA_INICIO = 297,
     K_FECHA_FIN = 298,
     OTRO = 299
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 41 "parser.y"

  double number;
  char boolean[5];
  int integer;
  char *string;



/* Line 214 of yacc.c  */
#line 179 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 191 "parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   379

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNRULES -- Number of states.  */
#define YYNSTATES  307

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    13,    19,    25,    31,    37,    43,
      47,    51,    55,    59,    61,    65,    69,    73,    77,    81,
      85,    89,    91,    95,   109,   121,   133,   143,   147,   151,
     157,   162,   166,   170,   174,   178,   182,   188,   194,   200,
     206,   212,   218,   222,   226,   230,   234,   238,   242,   244,
     248,   254,   260,   266,   272,   278,   284,   288,   292,   296,
     300,   304,   308,   310,   314,   320,   326,   332,   338,   344,
     350,   354,   358,   362,   366,   368,   372,   376,   380,   384,
     388,   391,   393,   397,   399,   403,   417,   429,   441,   451,
     455,   459,   463,   467,   471,   475,   479,   483,   487,   490,
     492,   496,   498,   502,   510,   516,   522,   526,   530,   534,
     538,   542,   546
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      46,     0,    -1,     5,    47,     6,    -1,    50,     3,    48,
       3,    49,    -1,    50,     3,    49,     3,    48,    -1,    48,
       3,    50,     3,    49,    -1,    48,     3,    49,     3,    50,
      -1,    49,     3,    50,     3,    48,    -1,    49,     3,    48,
       3,    50,    -1,    48,     3,    50,    -1,    49,     3,    50,
      -1,    50,     3,    49,    -1,    50,     3,    48,    -1,    50,
      -1,    18,     4,     9,    -1,    18,     4,    17,    -1,    19,
       4,     9,    -1,    19,     4,    17,    -1,    20,     4,    51,
      -1,     7,    52,     8,    -1,    53,     3,    52,    -1,    53,
      -1,     5,    54,     6,    -1,    55,     3,    56,     3,    57,
       3,    58,     3,    59,     3,    60,     3,    65,    -1,    55,
       3,    56,     3,    57,     3,    58,     3,    59,     3,    65,
      -1,    55,     3,    56,     3,    58,     3,    59,     3,    60,
       3,    65,    -1,    55,     3,    56,     3,    58,     3,    59,
       3,    65,    -1,    21,     4,     9,    -1,    22,     4,    13,
      -1,    23,     4,     5,    61,     6,    -1,    23,     4,     5,
       6,    -1,    23,     4,    17,    -1,    24,     4,    12,    -1,
      25,     4,    11,    -1,    26,     4,    14,    -1,    26,     4,
      17,    -1,    62,     3,    63,     3,    64,    -1,    63,     3,
      62,     3,    64,    -1,    64,     3,    62,     3,    63,    -1,
      62,     3,    64,     3,    63,    -1,    63,     3,    64,     3,
      62,    -1,    64,     3,    63,     3,    62,    -1,    27,     4,
       9,    -1,    28,     4,     9,    -1,    29,     4,     9,    -1,
      30,     4,    66,    -1,     7,    67,     8,    -1,    68,     3,
      67,    -1,    68,    -1,     5,    69,     6,    -1,    70,     3,
      71,     3,    72,    -1,    71,     3,    70,     3,    72,    -1,
      72,     3,    70,     3,    71,    -1,    70,     3,    72,     3,
      71,    -1,    71,     3,    72,     3,    70,    -1,    72,     3,
      71,     3,    70,    -1,    31,     4,     9,    -1,    32,     4,
       9,    -1,    32,     4,    17,    -1,    33,     4,    73,    -1,
       7,    74,     8,    -1,    75,     3,    74,    -1,    75,    -1,
       5,    76,     6,    -1,    77,     3,    78,     3,    79,    -1,
      78,     3,    77,     3,    79,    -1,    79,     3,    77,     3,
      78,    -1,    77,     3,    79,     3,    78,    -1,    78,     3,
      79,     3,    77,    -1,    79,     3,    78,     3,    77,    -1,
      77,     3,    78,    -1,    78,     3,    77,    -1,    77,     3,
      79,    -1,    79,     3,    77,    -1,    77,    -1,    31,     4,
       9,    -1,    32,     4,     9,    -1,    32,     4,    17,    -1,
      34,     4,    80,    -1,     7,    81,     8,    -1,     7,     8,
      -1,    17,    -1,    82,     3,    81,    -1,    82,    -1,     5,
      83,     6,    -1,    84,     3,    85,     3,    86,     3,    87,
       3,    88,     3,    89,     3,    90,    -1,    84,     3,    85,
       3,    86,     3,    87,     3,    88,     3,    89,    -1,    84,
       3,    86,     3,    87,     3,    88,     3,    89,     3,    90,
      -1,    84,     3,    86,     3,    87,     3,    88,     3,    89,
      -1,    31,     4,     9,    -1,    35,     4,    13,    -1,    35,
       4,    17,    -1,    36,     4,    15,    -1,    37,     4,    12,
      -1,    38,     4,    11,    -1,    39,     4,    10,    -1,    40,
       4,    91,    -1,     7,    92,     8,    -1,     7,     8,    -1,
      17,    -1,    93,     3,    92,    -1,    93,    -1,     5,    94,
       6,    -1,    95,     3,    96,     3,    97,     3,    98,    -1,
      95,     3,    96,     3,    97,    -1,    95,     3,    97,     3,
      98,    -1,    95,     3,    97,    -1,    31,     4,     9,    -1,
      41,     4,    16,    -1,    41,     4,    17,    -1,    42,     4,
      10,    -1,    43,     4,    10,    -1,    43,     4,    17,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    52,    52,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    69,    70,    74,    75,    78,    82,
      86,    87,    90,    93,    94,    95,    96,    99,   102,   105,
     106,   107,   110,   112,   115,   116,   120,   121,   122,   123,
     124,   125,   129,   133,   137,   141,   145,   149,   150,   154,
     158,   159,   160,   161,   162,   163,   167,   171,   172,   176,
     179,   182,   183,   187,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   205,   209,   210,   214,   218,
     219,   220,   224,   225,   228,   232,   233,   234,   235,   238,
     242,   243,   246,   248,   250,   252,   255,   259,   260,   261,
     265,   266,   270,   274,   275,   276,   277,   280,   284,   285,
     288,   292,   293
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "COMMA", "COLON", "BRACE_OPEN",
  "BRACE_CLOSE", "BRACKET_OPEN", "BRACKET_CLOSE", "STRING", "DATE", "BOOL",
  "FLOAT", "INTEGER", "URL", "CARGO", "ESTADO", "NULL_VALUE", "K_VERSION",
  "K_FIRMA_DIGITAL", "K_EMPRESAS", "K_NOMBRE_EMPRESA", "K_FUNDACION",
  "K_DIRECCION", "K_INGRESOS_ANUALES", "K_PYME", "K_LINK", "K_CALLE",
  "K_CIUDAD", "K_PAIS", "K_DEPARTAMENTOS", "K_NOMBRE", "K_JEFE",
  "K_SUBDEPARTAMENTOS", "K_EMPLEADOS", "K_EDAD", "K_CARGO", "K_SALARIO",
  "K_ACTIVO", "K_FECHA_CONTRATACION", "K_PROYECTOS", "K_ESTADO",
  "K_FECHA_INICIO", "K_FECHA_FIN", "OTRO", "$accept", "json",
  "json_atributos", "version", "firma_digital", "empresas",
  "empresas_lista", "empresa_nt", "empresa", "empresa_atributos",
  "nombre_empresa", "fundacion", "direccion", "ingresos_anuales", "pyme",
  "link", "direccion_atributos", "calle", "ciudad", "pais",
  "departamentos", "departamentos_lista", "departamento_nt",
  "departamento", "departamento_atributos", "nombre_departamento",
  "jefe_departamento", "subdepartamentos", "subdepartamentos_lista",
  "subdepartamento_nt", "subdepartamento", "subdepartamento_atributos",
  "nombre_subdepartamento", "jefe_subdepartamento", "empleados",
  "empleados_lista", "empleado_nt", "empleado", "empleado_atributos",
  "nombre_empleado", "edad", "cargo", "salario", "activo",
  "fecha_contratacion", "proyectos", "proyectos_lista", "proyecto_nt",
  "proyecto", "proyecto_atributos", "nombre_proyecto", "estado",
  "fecha_inicio", "fecha_fin", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    48,    48,    49,    49,    50,    51,
      52,    52,    53,    54,    54,    54,    54,    55,    56,    57,
      57,    57,    58,    59,    60,    60,    61,    61,    61,    61,
      61,    61,    62,    63,    64,    65,    66,    67,    67,    68,
      69,    69,    69,    69,    69,    69,    70,    71,    71,    72,
      73,    74,    74,    75,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    77,    78,    78,    79,    80,
      80,    80,    81,    81,    82,    83,    83,    83,    83,    84,
      85,    85,    86,    87,    88,    89,    90,    91,    91,    91,
      92,    92,    93,    94,    94,    94,    94,    95,    96,    96,
      97,    98,    98
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     5,     5,     5,     5,     5,     5,     3,
       3,     3,     3,     1,     3,     3,     3,     3,     3,     3,
       3,     1,     3,    13,    11,    11,     9,     3,     3,     5,
       4,     3,     3,     3,     3,     3,     5,     5,     5,     5,
       5,     5,     3,     3,     3,     3,     3,     3,     1,     3,
       5,     5,     5,     5,     5,     5,     3,     3,     3,     3,
       3,     3,     1,     3,     5,     5,     5,     5,     5,     5,
       3,     3,     3,     3,     1,     3,     3,     3,     3,     3,
       2,     1,     3,     1,     3,    13,    11,    11,     9,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     1,
       3,     1,     3,     7,     5,     5,     3,     3,     3,     3,
       3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
       1,     0,     0,     0,     2,     0,     0,     0,    14,    15,
      16,    17,     0,    18,     0,     9,     0,    10,    12,    11,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     6,     5,     8,     7,     3,     4,
       0,    22,     0,    20,    27,     0,     0,     0,     0,    28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      32,     0,     0,     0,    30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,     0,
       0,     0,     0,    33,     0,     0,     0,    26,    42,    43,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,    34,
      35,     0,    45,    25,    36,    39,    37,    40,    38,    41,
       0,     0,     0,    48,    23,     0,     0,     0,     0,     0,
       0,     0,    46,     0,     0,     0,     0,    49,     0,     0,
       0,    47,    56,    57,    58,     0,    59,     0,     0,     0,
       0,     0,     0,     0,     0,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,     0,     0,    60,
       0,    50,    53,    51,    54,    52,    55,     0,     0,     0,
      63,     0,     0,     0,    61,    75,    76,    77,     0,    81,
      78,    70,    72,    71,     0,    73,     0,     0,    80,     0,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,    64,    67,    65,    68,    66,    69,     0,    84,
       0,    82,    89,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    91,    92,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,    94,     0,
      88,     0,     0,     0,    86,    95,     0,    87,     0,     0,
      85,     0,    99,    96,     0,    98,     0,   101,     0,     0,
       0,    97,     0,     0,   102,     0,   100,   107,     0,     0,
       0,   106,     0,     0,     0,     0,   108,   109,   110,   104,
       0,   105,     0,     0,   103,   111,   112
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,     7,     8,     9,    23,    31,    32,    40,
      41,    56,    62,    63,    73,    96,    78,    79,    80,    81,
      97,   122,   132,   133,   138,   139,   140,   141,   156,   164,
     165,   175,   176,   177,   178,   200,   209,   210,   218,   219,
     235,   236,   246,   253,   260,   267,   273,   276,   277,   279,
     280,   290,   291,   301
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -185
static const yytype_int16 yypact[] =
{
      11,    74,    22,     7,    29,    38,    54,   100,   103,   109,
    -185,    45,    65,   110,  -185,    89,    80,    92,  -185,  -185,
    -185,  -185,   123,  -185,   130,   131,   132,   133,   134,   135,
     118,   136,   137,   121,   124,   121,   127,   124,   127,   138,
     140,   144,  -185,   123,  -185,  -185,  -185,  -185,  -185,  -185,
     139,  -185,   128,  -185,  -185,   145,   148,   141,    90,  -185,
     149,   151,   153,   154,    42,   146,   142,   143,     8,  -185,
    -185,   156,   157,   159,  -185,   160,   161,   163,   164,   166,
     168,   169,   143,   152,    31,   165,   167,   170,  -185,    87,
      72,    91,   172,  -185,   173,   174,   177,  -185,  -185,  -185,
    -185,   178,   179,   180,   181,   182,   183,    31,    66,   184,
     122,   158,   162,   158,   171,   162,   171,   185,  -185,  -185,
    -185,   155,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,
     122,    64,   186,   189,  -185,   191,   192,   193,   187,   196,
     197,   198,  -185,   155,   194,    67,   195,  -185,    88,    71,
      93,  -185,  -185,  -185,  -185,   199,  -185,   202,   203,   204,
     205,   206,   207,    47,   208,   209,   188,   190,   188,   200,
     190,   200,   210,   211,   213,   212,   216,   217,   220,  -185,
     199,  -185,  -185,  -185,  -185,  -185,  -185,   215,    68,    -4,
    -185,    73,    55,    95,  -185,  -185,  -185,  -185,    82,  -185,
    -185,   222,   223,   224,   225,   226,   227,   201,  -185,   228,
     230,   214,   218,   214,   221,   218,   221,   231,   232,   234,
    -185,   229,  -185,  -185,  -185,  -185,  -185,  -185,   233,  -185,
      94,  -185,  -185,   235,   236,   238,   240,    50,   239,   175,
     176,  -185,  -185,  -185,   241,   242,   244,   176,   237,   219,
     248,  -185,   249,   252,   219,   245,   150,   255,  -185,   256,
     258,   150,   253,   243,   259,  -185,   260,  -185,   243,     0,
    -185,    83,  -185,  -185,   246,  -185,   251,   262,   263,   264,
     265,  -185,   261,   266,  -185,    81,  -185,  -185,   267,   268,
     270,   271,   115,   269,   247,   250,  -185,  -185,  -185,   273,
     274,  -185,   250,    41,  -185,  -185,  -185
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -185,  -185,  -185,     3,     6,    37,  -185,   254,  -185,  -185,
    -185,  -185,  -185,   107,   257,   272,  -185,   -90,   -87,   -84,
     -92,  -185,   102,  -185,  -185,  -105,  -102,   -93,  -185,   101,
    -185,  -185,  -184,  -181,  -142,  -185,    48,  -185,  -185,  -185,
    -185,    43,    33,    30,    24,    18,  -185,     5,  -185,  -185,
    -185,  -185,    -6,   -12
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     103,   105,   101,   198,   106,   102,   104,   271,   203,   205,
     201,    11,   206,   199,    74,   118,     1,   272,   123,    26,
      28,    24,    10,    29,   127,   125,   129,   124,   128,   126,
     225,   223,   227,    12,   226,    75,    76,    77,   134,    47,
      45,    49,    13,    48,   159,   161,   157,    68,   162,   202,
     204,   305,    25,    27,    18,   158,   160,    94,   306,    69,
      14,    95,    19,   241,   184,   182,   186,   242,   185,   222,
      44,   224,    46,   181,    20,   183,   153,   196,   172,   173,
     119,   174,    21,   120,   154,   197,   172,   207,   274,   174,
     208,   275,     3,     4,     5,   135,   136,   137,     3,    75,
       5,    77,   135,    15,   137,   173,    16,   174,     4,     5,
       3,     4,    17,    60,    61,    76,    77,    22,    75,    76,
     136,   137,   288,   289,   135,   136,   172,   173,    30,   233,
     234,   296,   297,    33,    34,    35,    36,    37,    38,    39,
      43,     5,    50,     4,    42,     3,    51,    52,    54,    57,
      55,    58,    95,    64,    59,    65,    66,    67,    70,    82,
     131,    83,    84,    93,    85,    86,    61,    87,    72,    89,
      88,    90,    91,    71,    98,   107,    99,   108,   109,   100,
     110,   111,   112,   113,   114,   115,   116,    77,   130,   259,
      76,   121,   143,   147,   142,   144,   145,   146,    75,   148,
     149,   150,   155,   152,   163,   166,   167,   168,   169,   170,
     171,   234,   180,   245,   187,   188,   179,   189,   190,   191,
     192,   137,   136,   193,   195,   211,   212,   213,   214,   215,
     216,   135,   217,   221,   207,   228,   220,   230,   229,   237,
     238,   239,   232,   240,   247,   151,   248,   249,   174,   251,
     173,   254,   172,   255,   243,   256,   258,   252,   261,   281,
     262,   263,   268,   265,   269,   282,   274,   283,   285,   231,
     284,   292,   293,   294,   295,   287,   302,   278,   303,   298,
     250,   194,   244,   266,   257,   264,   270,   286,   299,   289,
     304,     0,     0,   300,     0,     0,     0,    53,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   117
};

static const yytype_int16 yycheck[] =
{
      90,    91,    89,     7,    91,    89,    90,     7,   192,   193,
     191,     4,   193,    17,     6,   107,     5,    17,   110,    16,
      17,    15,     0,    17,   114,   112,   116,   111,   115,   113,
     214,   212,   216,     4,   215,    27,    28,    29,   130,    36,
      34,    38,     4,    37,   149,   150,   148,     5,   150,   191,
     192,    10,    15,    16,     9,   148,   149,    26,    17,    17,
       6,    30,    17,    13,   169,   167,   171,    17,   170,   211,
      33,   213,    35,   166,     9,   168,     9,     9,    31,    32,
      14,    34,    17,    17,    17,    17,    31,     5,     5,    34,
       8,     8,    18,    19,    20,    31,    32,    33,    18,    27,
      20,    29,    31,     3,    33,    32,     3,    34,    19,    20,
      18,    19,     3,    23,    24,    28,    29,     7,    27,    28,
      32,    33,    41,    42,    31,    32,    31,    32,     5,    35,
      36,    16,    17,     3,     3,     3,     3,     3,     3,    21,
       3,    20,     4,    19,     8,    18,     6,     3,     9,     4,
      22,     3,    30,     4,    13,     4,     3,     3,    12,     3,
       5,     4,     3,    11,     4,     4,    24,     4,    25,     3,
       6,     3,     3,    66,     9,     3,     9,     4,     4,     9,
       3,     3,     3,     3,     3,     3,     3,    29,     3,    39,
      28,     7,     3,     6,     8,     4,     4,     4,    27,     3,
       3,     3,     7,     9,     5,     3,     3,     3,     3,     3,
       3,    36,     3,    37,     4,     4,     8,     4,     6,     3,
       3,    33,    32,     3,     9,     3,     3,     3,     3,     3,
       3,    31,    31,     3,     5,     4,     8,     3,     6,     4,
       4,     3,     9,     3,     3,   143,     4,     3,    34,    12,
      32,     3,    31,     4,    15,     3,    11,    38,     3,     8,
       4,     3,     3,    10,     4,     3,     5,     4,     3,   221,
       6,     4,     4,     3,     3,     9,     3,    31,     4,    10,
     247,   180,   239,    40,   254,   261,   268,   282,   294,    42,
     302,    -1,    -1,    43,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    46,    18,    19,    20,    47,    48,    49,    50,
       0,     4,     4,     4,     6,     3,     3,     3,     9,    17,
       9,    17,     7,    51,    49,    50,    48,    50,    48,    49,
       5,    52,    53,     3,     3,     3,     3,     3,     3,    21,
      54,    55,     8,     3,    50,    49,    50,    48,    49,    48,
       4,     6,     3,    52,     9,    22,    56,     4,     3,    13,
      23,    24,    57,    58,     4,     4,     3,     3,     5,    17,
      12,    58,    25,    59,     6,    27,    28,    29,    61,    62,
      63,    64,     3,     4,     3,     4,     4,     4,     6,     3,
       3,     3,    59,    11,    26,    30,    60,    65,     9,     9,
       9,    63,    64,    62,    64,    62,    63,     3,     4,     4,
       3,     3,     3,     3,     3,     3,     3,    60,    65,    14,
      17,     7,    66,    65,    64,    63,    64,    62,    63,    62,
       3,     5,    67,    68,    65,    31,    32,    33,    69,    70,
      71,    72,     8,     3,     4,     4,     4,     6,     3,     3,
       3,    67,     9,     9,    17,     7,    73,    71,    72,    70,
      72,    70,    71,     5,    74,    75,     3,     3,     3,     3,
       3,     3,    31,    32,    34,    76,    77,    78,    79,     8,
       3,    72,    71,    72,    70,    71,    70,     4,     4,     4,
       6,     3,     3,     3,    74,     9,     9,    17,     7,    17,
      80,    78,    79,    77,    79,    77,    78,     5,     8,    81,
      82,     3,     3,     3,     3,     3,     3,    31,    83,    84,
       8,     3,    79,    78,    79,    77,    78,    77,     4,     6,
       3,    81,     9,    35,    36,    85,    86,     4,     4,     3,
       3,    13,    17,    15,    86,    37,    87,     3,     4,     3,
      87,    12,    38,    88,     3,     4,     3,    88,    11,    39,
      89,     3,     4,     3,    89,    10,    40,    90,     3,     4,
      90,     7,    17,    91,     5,     8,    92,    93,    31,    94,
      95,     8,     3,     4,     6,     3,    92,     9,    41,    42,
      96,    97,     4,     4,     3,     3,    16,    17,    10,    97,
      43,    98,     3,     4,    98,    10,    17
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 52 "parser.y"
    { initTemplate(); fprintf(yyout, "<body>%s</body></html>", (yyvsp[(2) - (3)].string)); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 55 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (5)].string); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 56 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (5)].string); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 57 "parser.y"
    { (yyval.string) = (yyvsp[(3) - (5)].string); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 58 "parser.y"
    { (yyval.string) = (yyvsp[(5) - (5)].string); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 59 "parser.y"
    { (yyval.string) = (yyvsp[(3) - (5)].string); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 60 "parser.y"
    { (yyval.string) = (yyvsp[(5) - (5)].string); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 61 "parser.y"
    { (yyval.string) = (yyvsp[(3) - (3)].string); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 62 "parser.y"
    { (yyval.string) = (yyvsp[(3) - (3)].string); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 63 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (3)].string); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 64 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (3)].string); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 65 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 78 "parser.y"
    { (yyval.string) = (yyvsp[(3) - (3)].string); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 82 "parser.y"
    { (yyval.string) = (yyvsp[(2) - (3)].string); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 86 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 87 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 90 "parser.y"
    { char *buf; asprintf(&buf, "<div class=\"container\">%s</div>", (yyvsp[(2) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 93 "parser.y"
    { char *buf; asprintf(&buf, "%s%s%s", (yyvsp[(1) - (13)].string),(yyvsp[(11) - (13)].string),(yyvsp[(13) - (13)].string)); (yyval.string) = buf; ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 94 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(1) - (11)].string),(yyvsp[(11) - (11)].string)); (yyval.string) = buf; ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 95 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(1) - (11)].string),(yyvsp[(9) - (11)].string),(yyvsp[(11) - (11)].string)); (yyval.string) = buf; ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 96 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(1) - (9)].string),(yyvsp[(9) - (9)].string)); (yyval.string) = buf; ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 99 "parser.y"
    { char *buf; asprintf(&buf, "<h1>%s</h1>", (yyvsp[(3) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 115 "parser.y"
    { char* buf; asprintf(&buf, "<a href=\"%s\">%s</a>", (yyvsp[(3) - (3)].string), (yyvsp[(3) - (3)].string) ); (yyval.string) = buf; ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 116 "parser.y"
    { (yyval.string) = ""; ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 141 "parser.y"
    { (yyval.string) = (yyvsp[(3) - (3)].string);;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 145 "parser.y"
    { (yyval.string) = (yyvsp[(2) - (3)].string); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 149 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 150 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 154 "parser.y"
    { (yyval.string) = (yyvsp[(2) - (3)].string); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 158 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(1) - (5)].string), (yyvsp[(5) - (5)].string)); (yyval.string) = buf; ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 159 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(3) - (5)].string), (yyvsp[(5) - (5)].string)); (yyval.string) = buf; ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 160 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(3) - (5)].string), (yyvsp[(1) - (5)].string)); (yyval.string) = buf; ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 161 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(1) - (5)].string), (yyvsp[(3) - (5)].string)); (yyval.string) = buf; ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 162 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(5) - (5)].string), (yyvsp[(3) - (5)].string)); (yyval.string) = buf; ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 163 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(5) - (5)].string), (yyvsp[(1) - (5)].string)); (yyval.string) = buf; ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 167 "parser.y"
    { char *buf; asprintf(&buf, "<h2>%s</h2>", (yyvsp[(3) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 176 "parser.y"
    { (yyval.string) = (yyvsp[(3) - (3)].string); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 179 "parser.y"
    { (yyval.string) = (yyvsp[(2) - (3)].string); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 182 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 183 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 187 "parser.y"
    { char *buf; asprintf(&buf, "<div class=\"lista\">%s</div>", (yyvsp[(2) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 191 "parser.y"
    { char *buf; asprintf( &buf, "%s%s", (yyvsp[(1) - (5)].string),(yyvsp[(5) - (5)].string)); (yyval.string) = buf; ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 192 "parser.y"
    { char *buf; asprintf( &buf, "%s%s", (yyvsp[(3) - (5)].string),(yyvsp[(5) - (5)].string)); (yyval.string) = buf; ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 193 "parser.y"
    { char *buf; asprintf( &buf, "%s%s", (yyvsp[(3) - (5)].string),(yyvsp[(1) - (5)].string)); (yyval.string) = buf; ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 194 "parser.y"
    { char *buf; asprintf( &buf, "%s%s", (yyvsp[(1) - (5)].string),(yyvsp[(3) - (5)].string)); (yyval.string) = buf; ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 195 "parser.y"
    { char *buf; asprintf( &buf, "%s%s", (yyvsp[(5) - (5)].string),(yyvsp[(3) - (5)].string)); (yyval.string) = buf; ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 196 "parser.y"
    { char *buf; asprintf( &buf, "%s%s", (yyvsp[(5) - (5)].string),(yyvsp[(1) - (5)].string)); (yyval.string) = buf; ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 197 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (3)].string); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 198 "parser.y"
    { (yyval.string) = (yyvsp[(3) - (3)].string); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 199 "parser.y"
    { char *buf; asprintf( &buf, "%s%s", (yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 200 "parser.y"
    { char *buf; asprintf( &buf, "%s%s", (yyvsp[(3) - (3)].string),(yyvsp[(1) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 201 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 205 "parser.y"
    { char *buf; asprintf(&buf, "<h3>%s</h3>", (yyvsp[(3) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 214 "parser.y"
    { (yyval.string) = (yyvsp[(3) - (3)].string); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 218 "parser.y"
    { char *buf; asprintf(&buf, "<ul>%s</ul>", (yyvsp[(2) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 219 "parser.y"
    { (yyval.string) = ""; ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 220 "parser.y"
    { (yyval.string) = ""; ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 224 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 225 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 228 "parser.y"
    { (yyval.string) = (yyvsp[(2) - (3)].string);;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 232 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(1) - (13)].string),(yyvsp[(13) - (13)].string)); (yyval.string) = buf; ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 233 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (11)].string); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 234 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(1) - (11)].string), (yyvsp[(11) - (11)].string)); (yyval.string) = buf; ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 235 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (9)].string); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 238 "parser.y"
    { char *buf; asprintf(&buf, "<li>%s</li>", (yyvsp[(3) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 255 "parser.y"
    { (yyval.string) = (yyvsp[(3) - (3)].string); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 259 "parser.y"
    { char* buf; asprintf(&buf, "<table> <tr> <th>Nombre</th> <th>Estado</th> <th>Fecha de Inicio</th> <th>Fecha de Fin</th> </tr> %s </table>", (yyvsp[(2) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 260 "parser.y"
    { (yyval.string) = ""; ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 261 "parser.y"
    { (yyval.string) = ""; ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 265 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 266 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 270 "parser.y"
    { char *buf; asprintf(&buf, "<tr>%s</tr>", (yyvsp[(2) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 274 "parser.y"
    { char *buf; asprintf(&buf, "<td>%s</td> <td>%s</td> <td>%s</td> <td>%s</td>", (yyvsp[(1) - (7)].string),(yyvsp[(3) - (7)].string),(yyvsp[(5) - (7)].string),(yyvsp[(7) - (7)].string)); (yyval.string) = buf; ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 275 "parser.y"
    { char *buf; asprintf(&buf, "<td>%s</td> <td>%s</td> <td>%s</td> <td>-</td>", (yyvsp[(1) - (5)].string),(yyvsp[(3) - (5)].string),(yyvsp[(5) - (5)].string)); (yyval.string) = buf; ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 276 "parser.y"
    { char *buf; asprintf(&buf, "<td>%s</td> <td>-</td> <td>%s</td> <td>%s</td>", (yyvsp[(1) - (5)].string),(yyvsp[(3) - (5)].string),(yyvsp[(5) - (5)].string)); (yyval.string) = buf; ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 277 "parser.y"
    { char *buf; asprintf(&buf, "<td>%s</td> <td>-</td> <td>%s</td> <td>-</td>", (yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 280 "parser.y"
    { (yyval.string) = (yyvsp[(3) - (3)].string); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 284 "parser.y"
    { (yyval.string) = (yyvsp[(3) - (3)].string) ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 285 "parser.y"
    { char *buf; asprintf(&buf, "-"); (yyval.string) = buf; ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 288 "parser.y"
    { (yyval.string) = (yyvsp[(3) - (3)].string); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 292 "parser.y"
    { (yyval.string) = (yyvsp[(3) - (3)].string); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 293 "parser.y"
    { char *buf; asprintf(&buf, "-"); (yyval.string) = buf; ;}
    break;



/* Line 1455 of yacc.c  */
#line 2243 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 296 "parser.y"


int yyerror(char *error) {
  fprintf(yyout, "[Error Sintactico (%s) en linea %d => %s]\n", yytext, yylineno, error);
}

void initTemplate() {
  FILE *template;
  char buffer[READ_BUFFER_SIZE];
  size_t bytes_leidos;
  
  template = fopen(template_file_path, "r");

  if (template == NULL) {
    printf("No se encontró el archivo de template, se escribirá un template por defecto...\n");
    fprintf(yyout, "<!DOCTYPE html>\n<html><head><style> .container { border-color:grey; border-width:1px; border-style:inset; } .lista { padding-left: 20px; } table, th, td { border: 1px solid black; border-collapse: collapse; }</style></head>");
    return;
  }

  while ((bytes_leidos = fread(buffer, sizeof(char), READ_BUFFER_SIZE, template)) > 0) {
    if (fwrite(buffer, sizeof(char), bytes_leidos, yyout) != bytes_leidos) {
      printf("Error al escribir en el archivo de destino\n");
      fclose(template);
      return;
    }
  }

  fclose(template); 
  
}

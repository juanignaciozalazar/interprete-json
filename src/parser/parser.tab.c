
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
  int parseResult = 0;
  int yylex();
  int yyerror(char *s);
  void initTemplate();


/* Line 189 of yacc.c  */
#line 91 "parser.tab.c"

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
#line 40 "parser.y"

  double number;
  char boolean[5];
  int integer;
  char *string;



/* Line 214 of yacc.c  */
#line 180 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 192 "parser.tab.c"

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
#define YYLAST   493

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  145
/* YYNRULES -- Number of states.  */
#define YYNSTATES  340

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
     538,   542,   546,   550,   552,   554,   556,   558,   560,   562,
     564,   566,   568,   570,   572,   574,   576,   578,   580,   582,
     584,   586,   588,   590,   592,   594,   596,   598,   600,   602,
     604,   606,   608,   610,   612,   614
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
      -1,    18,     4,    99,    -1,    18,     4,    17,    -1,    19,
       4,    99,    -1,    19,     4,    17,    -1,    20,     4,    51,
      -1,     7,    52,     8,    -1,    53,     3,    52,    -1,    53,
      -1,     5,    54,     6,    -1,    55,     3,    56,     3,    57,
       3,    58,     3,    59,     3,    60,     3,    65,    -1,    55,
       3,    56,     3,    57,     3,    58,     3,    59,     3,    65,
      -1,    55,     3,    56,     3,    58,     3,    59,     3,    60,
       3,    65,    -1,    55,     3,    56,     3,    58,     3,    59,
       3,    65,    -1,    21,     4,    99,    -1,    22,     4,    13,
      -1,    23,     4,     5,    61,     6,    -1,    23,     4,     5,
       6,    -1,    23,     4,    17,    -1,    24,     4,   100,    -1,
      25,     4,    11,    -1,    26,     4,    14,    -1,    26,     4,
      17,    -1,    62,     3,    63,     3,    64,    -1,    63,     3,
      62,     3,    64,    -1,    64,     3,    62,     3,    63,    -1,
      62,     3,    64,     3,    63,    -1,    63,     3,    64,     3,
      62,    -1,    64,     3,    63,     3,    62,    -1,    27,     4,
      99,    -1,    28,     4,    99,    -1,    29,     4,    99,    -1,
      30,     4,    66,    -1,     7,    67,     8,    -1,    68,     3,
      67,    -1,    68,    -1,     5,    69,     6,    -1,    70,     3,
      71,     3,    72,    -1,    71,     3,    70,     3,    72,    -1,
      72,     3,    70,     3,    71,    -1,    70,     3,    72,     3,
      71,    -1,    71,     3,    72,     3,    70,    -1,    72,     3,
      71,     3,    70,    -1,    31,     4,    99,    -1,    32,     4,
      99,    -1,    32,     4,    17,    -1,    33,     4,    73,    -1,
       7,    74,     8,    -1,    75,     3,    74,    -1,    75,    -1,
       5,    76,     6,    -1,    77,     3,    78,     3,    79,    -1,
      78,     3,    77,     3,    79,    -1,    79,     3,    77,     3,
      78,    -1,    77,     3,    79,     3,    78,    -1,    78,     3,
      79,     3,    77,    -1,    79,     3,    78,     3,    77,    -1,
      77,     3,    78,    -1,    78,     3,    77,    -1,    77,     3,
      79,    -1,    79,     3,    77,    -1,    77,    -1,    31,     4,
      99,    -1,    32,     4,    99,    -1,    32,     4,    17,    -1,
      34,     4,    80,    -1,     7,    81,     8,    -1,     7,     8,
      -1,    17,    -1,    82,     3,    81,    -1,    82,    -1,     5,
      83,     6,    -1,    84,     3,    85,     3,    86,     3,    87,
       3,    88,     3,    89,     3,    90,    -1,    84,     3,    85,
       3,    86,     3,    87,     3,    88,     3,    89,    -1,    84,
       3,    86,     3,    87,     3,    88,     3,    89,     3,    90,
      -1,    84,     3,    86,     3,    87,     3,    88,     3,    89,
      -1,    31,     4,    99,    -1,    35,     4,    13,    -1,    35,
       4,    17,    -1,    36,     4,    15,    -1,    37,     4,   100,
      -1,    38,     4,    11,    -1,    39,     4,    10,    -1,    40,
       4,    91,    -1,     7,    92,     8,    -1,     7,     8,    -1,
      17,    -1,    93,     3,    92,    -1,    93,    -1,     5,    94,
       6,    -1,    95,     3,    96,     3,    97,     3,    98,    -1,
      95,     3,    96,     3,    97,    -1,    95,     3,    97,     3,
      98,    -1,    95,     3,    97,    -1,    31,     4,    99,    -1,
      41,     4,    16,    -1,    41,     4,    17,    -1,    42,     4,
      10,    -1,    43,     4,    10,    -1,    43,     4,    17,    -1,
       9,    -1,    10,    -1,    14,    -1,    15,    -1,    16,    -1,
      18,    -1,    19,    -1,    20,    -1,    21,    -1,    22,    -1,
      23,    -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,
      28,    -1,    29,    -1,    30,    -1,    31,    -1,    32,    -1,
      33,    -1,    34,    -1,    35,    -1,    36,    -1,    37,    -1,
      38,    -1,    39,    -1,    40,    -1,    41,    -1,    42,    -1,
      43,    -1,    13,    -1,    12,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    51,    51,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    68,    69,    73,    74,    77,    81,
      85,    86,    89,    92,    93,    94,    95,    98,   101,   104,
     105,   106,   109,   111,   114,   115,   119,   120,   121,   122,
     123,   124,   128,   132,   136,   140,   144,   148,   149,   153,
     157,   158,   159,   160,   161,   162,   166,   170,   171,   175,
     178,   181,   182,   186,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   204,   208,   209,   213,   217,
     218,   219,   223,   224,   227,   231,   232,   233,   234,   237,
     241,   242,   245,   247,   249,   251,   254,   258,   259,   260,
     264,   265,   269,   273,   274,   275,   276,   280,   284,   285,
     288,   292,   293,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   331,   332
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
  "fecha_inicio", "fecha_fin", "string", "numeric", 0
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
      97,    98,    98,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,   100,   100
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
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
       1,     0,     0,     0,     2,     0,     0,     0,   113,   114,
     115,   116,   117,    15,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
      14,    17,    16,     0,    18,     0,     9,     0,    10,    12,
      11,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    19,     0,     6,     5,     8,     7,     3,
       4,     0,    22,     0,    20,    27,     0,     0,     0,     0,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,   145,   144,    32,     0,     0,     0,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,     0,     0,     0,     0,    33,     0,     0,     0,
      26,    42,    43,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    24,    34,    35,     0,    45,    25,    36,    39,    37,
      40,    38,    41,     0,     0,     0,    48,    23,     0,     0,
       0,     0,     0,     0,     0,    46,     0,     0,     0,     0,
      49,     0,     0,     0,    47,    56,    58,    57,     0,    59,
       0,     0,     0,     0,     0,     0,     0,     0,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
       0,     0,    60,     0,    50,    53,    51,    54,    52,    55,
       0,     0,     0,    63,     0,     0,     0,    61,    75,    77,
      76,     0,    81,    78,    70,    72,    71,     0,    73,     0,
       0,    80,     0,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,    64,    67,    65,    68,    66,
      69,     0,    84,     0,    82,    89,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    91,    92,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
       0,    94,     0,    88,     0,     0,     0,    86,    95,     0,
      87,     0,     0,    85,     0,    99,    96,     0,    98,     0,
     101,     0,     0,     0,    97,     0,     0,   102,     0,   100,
     107,     0,     0,     0,   106,     0,     0,     0,     0,   108,
     109,   110,   104,     0,   105,     0,     0,   103,   111,   112
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,     7,     8,     9,    54,    62,    63,    71,
      72,    87,    93,    94,   106,   129,   111,   112,   113,   114,
     130,   155,   165,   166,   171,   172,   173,   174,   189,   197,
     198,   208,   209,   210,   211,   233,   242,   243,   251,   252,
     268,   269,   279,   286,   293,   300,   306,   309,   310,   312,
     313,   323,   324,   334,    50,   103
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -96
static const yytype_int16 yypact[] =
{
       7,   131,     6,    98,   135,   143,   192,    47,   198,   204,
     -96,     1,    56,   206,   -96,   184,   137,   141,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   238,   -96,   254,   258,   270,   278,   286,
     288,   242,   292,   294,   282,   290,   282,   293,   290,   293,
     303,   302,   307,   -96,   238,   -96,   -96,   -96,   -96,   -96,
     -96,   196,   -96,   291,   -96,   -96,   308,   311,   304,    39,
     -96,   312,   314,   316,   317,    44,   235,   297,   298,   248,
     -96,   -96,   -96,   -96,   319,   320,   322,   -96,   323,   324,
     325,   309,   327,   328,   329,   298,   315,    21,   196,   196,
     196,   -96,   224,   129,   228,   330,   -96,   331,   332,   334,
     -96,   -96,   -96,   -96,   335,   336,   337,   338,   339,   340,
      21,    50,   341,   321,   305,   318,   305,   326,   318,   326,
     342,   -96,   -96,   -96,   344,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   321,   121,   346,   347,   -96,   343,   348,
     351,   350,   354,   355,   356,   -96,   344,   196,    95,   353,
     -96,   253,   166,   256,   -96,   -96,   -96,   -96,   357,   -96,
     358,   360,   361,   362,   363,   364,    69,   365,   366,   345,
     349,   345,   313,   349,   313,   367,   368,   370,   369,   373,
     374,   376,   -96,   357,   -96,   -96,   -96,   -96,   -96,   -96,
     196,   153,    -4,   -96,   168,   110,   262,   -96,   -96,   -96,
     -96,   138,   -96,   -96,   377,   379,   380,   381,   382,   383,
     359,   -96,   384,   385,   371,   372,   371,   375,   372,   375,
     387,   388,   386,   -96,   390,   -96,   -96,   -96,   -96,   -96,
     -96,   196,   -96,   260,   -96,   -96,   389,   392,   394,   395,
      43,   393,   378,   333,   -96,   -96,   -96,   396,   397,   399,
     333,   235,   391,   400,   -96,   403,   406,   391,   401,   398,
     407,   -96,   409,   408,   398,   405,   402,   413,   -96,   414,
     -96,   402,    -3,   -96,   140,   -96,   -96,   404,   -96,   411,
     417,   418,   415,   420,   -96,   412,   196,   -96,   257,   -96,
     -96,   421,   422,   424,   425,   289,   423,   410,   416,   -96,
     -96,   -96,   427,   428,   -96,   416,    36,   -96,   -96,   -96
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -96,   -96,   -96,   -15,   -10,    -7,   -96,   419,   -96,   -96,
     -96,   -96,   -96,   271,   272,   284,   -96,   117,   120,   123,
     -95,   -96,   255,   -96,   -96,    76,    79,   102,   -96,   187,
     -96,   -96,    25,   -84,    46,   -96,   180,   -96,   -96,   -96,
     -96,   164,   158,   152,   146,   142,   -96,   126,   -96,   -96,
     -96,   -96,   118,   109,   -12,   165
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      52,    57,    59,   231,   304,    55,    10,    60,    56,    58,
      18,    19,     1,   232,   305,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,   151,   338,   127,   156,    99,
      15,   128,    78,   339,    80,    76,   274,    75,    79,    77,
     275,   100,    91,    92,   152,    18,    19,   153,   167,    85,
      20,    21,    22,    51,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
     205,   206,    11,   207,    18,    19,   131,   132,   133,    20,
      21,    22,   186,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    12,
     234,   205,   239,   240,   207,   307,   241,    13,   308,     3,
       4,     5,   168,   169,   170,     3,   108,     5,   110,     3,
       4,   256,    18,    19,   259,   185,   187,    20,    21,    22,
     229,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,   168,    14,   170,
     206,    16,   207,     4,     5,    18,    19,    17,   228,   230,
      20,    21,    22,    53,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
     136,   138,   134,    61,   139,   135,   137,   101,   102,   265,
     236,   238,   109,   110,   107,   108,   109,    64,   192,   194,
     190,    65,   195,    70,   160,   158,   162,   157,   161,   159,
     235,   237,   258,    66,   260,   108,   109,   110,   217,   215,
     219,    67,   218,   191,   193,   169,   170,   168,   169,    68,
     255,    69,   257,   205,   206,   266,   267,    74,   321,   322,
      73,   214,     5,   216,   320,   329,   330,    81,    82,     4,
      83,     3,    88,    86,    89,   121,    95,    90,    96,    97,
      98,    92,   115,   105,   116,   117,   126,   118,   119,   120,
     122,   123,   124,   140,   110,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   168,   163,   109,   177,   154,   164,
     176,   128,   178,   108,   175,   179,   180,   181,   182,   183,
     188,   199,   196,   200,   201,   202,   203,   204,   104,   213,
     278,   220,   221,   212,   222,   223,   224,   225,   170,   226,
     244,   169,   245,   246,   247,   248,   249,   125,   254,   263,
     250,   261,   253,   270,   262,   240,   271,   272,   273,   280,
     227,   281,   282,   287,   206,   207,   205,   288,   276,   289,
     294,   296,   291,   295,   267,   298,   301,   307,   302,   314,
     315,   317,   316,   318,   150,   325,   326,   327,   328,   285,
     335,   184,   336,   331,   264,   311,   277,   292,   283,   290,
     297,   319,   299,   303,   337,   332,   284,     0,     0,     0,
       0,     0,   322,     0,     0,     0,     0,     0,     0,   333,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84
};

static const yytype_int16 yycheck[] =
{
      12,    16,    17,     7,     7,    15,     0,    17,    15,    16,
       9,    10,     5,    17,    17,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,   140,    10,    26,   143,     5,
       3,    30,    67,    17,    69,    65,    13,    64,    68,    66,
      17,    17,    23,    24,    14,     9,    10,    17,   163,    81,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      31,    32,     4,    34,     9,    10,   118,   119,   120,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,     4,
     224,    31,   226,     5,    34,     5,     8,     4,     8,    18,
      19,    20,    31,    32,    33,    18,    27,    20,    29,    18,
      19,   245,     9,    10,   248,   177,   178,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    31,     6,    33,
      32,     3,    34,    19,    20,     9,    10,     3,   220,   221,
      14,    15,    16,     7,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
     123,   124,   122,     5,   124,   122,   123,    12,    13,   261,
     225,   226,    28,    29,     6,    27,    28,     3,   182,   183,
     181,     3,   183,    21,   147,   145,   149,   144,   148,   146,
     224,   225,   247,     3,   249,    27,    28,    29,   202,   200,
     204,     3,   203,   181,   182,    32,    33,    31,    32,     3,
     244,     3,   246,    31,    32,    35,    36,     3,    41,    42,
       8,   199,    20,   201,   316,    16,    17,     4,     6,    19,
       3,    18,     4,    22,     3,     6,     4,    13,     4,     3,
       3,    24,     3,    25,     4,     3,    11,     4,     4,     4,
       3,     3,     3,     3,    29,     4,     4,     3,     3,     3,
       3,     3,     3,     3,    31,     3,    28,     4,     7,     5,
       3,    30,     4,    27,     8,     4,     6,     3,     3,     3,
       7,     3,     5,     3,     3,     3,     3,     3,    97,     3,
      37,     4,     4,     8,     4,     6,     3,     3,    33,     3,
       3,    32,     3,     3,     3,     3,     3,   115,     3,     3,
      31,     4,     8,     4,     6,     5,     4,     3,     3,     3,
     213,     4,     3,     3,    32,    34,    31,     4,    15,     3,
       3,     3,    11,     4,    36,    10,     3,     5,     4,     8,
       3,     6,     4,     3,   140,     4,     4,     3,     3,    38,
       3,   176,     4,    10,   254,    31,   272,    39,   280,   287,
     294,   315,    40,   301,   335,   327,   281,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    46,    18,    19,    20,    47,    48,    49,    50,
       0,     4,     4,     4,     6,     3,     3,     3,     9,    10,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      99,    17,    99,     7,    51,    49,    50,    48,    50,    48,
      49,     5,    52,    53,     3,     3,     3,     3,     3,     3,
      21,    54,    55,     8,     3,    50,    49,    50,    48,    49,
      48,     4,     6,     3,    52,    99,    22,    56,     4,     3,
      13,    23,    24,    57,    58,     4,     4,     3,     3,     5,
      17,    12,    13,   100,    58,    25,    59,     6,    27,    28,
      29,    61,    62,    63,    64,     3,     4,     3,     4,     4,
       4,     6,     3,     3,     3,    59,    11,    26,    30,    60,
      65,    99,    99,    99,    63,    64,    62,    64,    62,    63,
       3,     4,     4,     3,     3,     3,     3,     3,     3,     3,
      60,    65,    14,    17,     7,    66,    65,    64,    63,    64,
      62,    63,    62,     3,     5,    67,    68,    65,    31,    32,
      33,    69,    70,    71,    72,     8,     3,     4,     4,     4,
       6,     3,     3,     3,    67,    99,    17,    99,     7,    73,
      71,    72,    70,    72,    70,    71,     5,    74,    75,     3,
       3,     3,     3,     3,     3,    31,    32,    34,    76,    77,
      78,    79,     8,     3,    72,    71,    72,    70,    71,    70,
       4,     4,     4,     6,     3,     3,     3,    74,    99,    17,
      99,     7,    17,    80,    78,    79,    77,    79,    77,    78,
       5,     8,    81,    82,     3,     3,     3,     3,     3,     3,
      31,    83,    84,     8,     3,    79,    78,    79,    77,    78,
      77,     4,     6,     3,    81,    99,    35,    36,    85,    86,
       4,     4,     3,     3,    13,    17,    15,    86,    37,    87,
       3,     4,     3,    87,   100,    38,    88,     3,     4,     3,
      88,    11,    39,    89,     3,     4,     3,    89,    10,    40,
      90,     3,     4,    90,     7,    17,    91,     5,     8,    92,
      93,    31,    94,    95,     8,     3,     4,     6,     3,    92,
      99,    41,    42,    96,    97,     4,     4,     3,     3,    16,
      17,    10,    97,    43,    98,     3,     4,    98,    10,    17
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
#line 51 "parser.y"
    { initTemplate(); fprintf(yyout, "<body>%s</body></html>", (yyvsp[(2) - (3)].string)); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 54 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (5)].string); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 55 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (5)].string); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 56 "parser.y"
    { (yyval.string) = (yyvsp[(3) - (5)].string); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 57 "parser.y"
    { (yyval.string) = (yyvsp[(5) - (5)].string); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 58 "parser.y"
    { (yyval.string) = (yyvsp[(3) - (5)].string); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 59 "parser.y"
    { (yyval.string) = (yyvsp[(5) - (5)].string); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 60 "parser.y"
    { (yyval.string) = (yyvsp[(3) - (3)].string); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 61 "parser.y"
    { (yyval.string) = (yyvsp[(3) - (3)].string); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 62 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (3)].string); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 63 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (3)].string); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 64 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 77 "parser.y"
    { (yyval.string) = (yyvsp[(3) - (3)].string); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 81 "parser.y"
    { (yyval.string) = (yyvsp[(2) - (3)].string); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 85 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 86 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 89 "parser.y"
    { char *buf; asprintf(&buf, "<div class=\"container\">%s</div>", (yyvsp[(2) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 92 "parser.y"
    { char *buf; asprintf(&buf, "%s%s%s", (yyvsp[(1) - (13)].string),(yyvsp[(11) - (13)].string),(yyvsp[(13) - (13)].string)); (yyval.string) = buf; ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 93 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(1) - (11)].string),(yyvsp[(11) - (11)].string)); (yyval.string) = buf; ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 94 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(1) - (11)].string),(yyvsp[(9) - (11)].string),(yyvsp[(11) - (11)].string)); (yyval.string) = buf; ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 95 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(1) - (9)].string),(yyvsp[(9) - (9)].string)); (yyval.string) = buf; ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 98 "parser.y"
    { char *buf; asprintf(&buf, "<h1>%s</h1>", (yyvsp[(3) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 114 "parser.y"
    { char* buf; asprintf(&buf, "<h4>Link: <a href=\"%s\">%s</a></h4>", (yyvsp[(3) - (3)].string), (yyvsp[(3) - (3)].string) ); (yyval.string) = buf; ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 115 "parser.y"
    { (yyval.string) = ""; ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 140 "parser.y"
    { (yyval.string) = (yyvsp[(3) - (3)].string);;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 144 "parser.y"
    { (yyval.string) = (yyvsp[(2) - (3)].string); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 148 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 149 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 153 "parser.y"
    { (yyval.string) = (yyvsp[(2) - (3)].string); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 157 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(1) - (5)].string), (yyvsp[(5) - (5)].string)); (yyval.string) = buf; ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 158 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(3) - (5)].string), (yyvsp[(5) - (5)].string)); (yyval.string) = buf; ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 159 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(3) - (5)].string), (yyvsp[(1) - (5)].string)); (yyval.string) = buf; ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 160 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(1) - (5)].string), (yyvsp[(3) - (5)].string)); (yyval.string) = buf; ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 161 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(5) - (5)].string), (yyvsp[(3) - (5)].string)); (yyval.string) = buf; ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 162 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(5) - (5)].string), (yyvsp[(1) - (5)].string)); (yyval.string) = buf; ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 166 "parser.y"
    { char *buf; asprintf(&buf, "<h2>%s</h2>", (yyvsp[(3) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 175 "parser.y"
    { (yyval.string) = (yyvsp[(3) - (3)].string); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 178 "parser.y"
    { (yyval.string) = (yyvsp[(2) - (3)].string); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 181 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 182 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 186 "parser.y"
    { char *buf; asprintf(&buf, "<div class=\"lista\">%s</div>", (yyvsp[(2) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 190 "parser.y"
    { char *buf; asprintf( &buf, "%s%s", (yyvsp[(1) - (5)].string),(yyvsp[(5) - (5)].string)); (yyval.string) = buf; ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 191 "parser.y"
    { char *buf; asprintf( &buf, "%s%s", (yyvsp[(3) - (5)].string),(yyvsp[(5) - (5)].string)); (yyval.string) = buf; ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 192 "parser.y"
    { char *buf; asprintf( &buf, "%s%s", (yyvsp[(3) - (5)].string),(yyvsp[(1) - (5)].string)); (yyval.string) = buf; ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 193 "parser.y"
    { char *buf; asprintf( &buf, "%s%s", (yyvsp[(1) - (5)].string),(yyvsp[(3) - (5)].string)); (yyval.string) = buf; ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 194 "parser.y"
    { char *buf; asprintf( &buf, "%s%s", (yyvsp[(5) - (5)].string),(yyvsp[(3) - (5)].string)); (yyval.string) = buf; ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 195 "parser.y"
    { char *buf; asprintf( &buf, "%s%s", (yyvsp[(5) - (5)].string),(yyvsp[(1) - (5)].string)); (yyval.string) = buf; ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 196 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (3)].string); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 197 "parser.y"
    { (yyval.string) = (yyvsp[(3) - (3)].string); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 198 "parser.y"
    { char *buf; asprintf( &buf, "%s%s", (yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 199 "parser.y"
    { char *buf; asprintf( &buf, "%s%s", (yyvsp[(3) - (3)].string),(yyvsp[(1) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 200 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 204 "parser.y"
    { char *buf; asprintf(&buf, "<h3>%s</h3>", (yyvsp[(3) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 213 "parser.y"
    { (yyval.string) = (yyvsp[(3) - (3)].string); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 217 "parser.y"
    { char *buf; asprintf(&buf, "<ul>%s</ul>", (yyvsp[(2) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 218 "parser.y"
    { (yyval.string) = ""; ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 219 "parser.y"
    { (yyval.string) = ""; ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 223 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 224 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 227 "parser.y"
    { (yyval.string) = (yyvsp[(2) - (3)].string);;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 231 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(1) - (13)].string),(yyvsp[(13) - (13)].string)); (yyval.string) = buf; ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 232 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (11)].string); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 233 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(1) - (11)].string), (yyvsp[(11) - (11)].string)); (yyval.string) = buf; ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 234 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (9)].string); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 237 "parser.y"
    { char *buf; asprintf(&buf, "<li>%s</li>", (yyvsp[(3) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 254 "parser.y"
    { (yyval.string) = (yyvsp[(3) - (3)].string); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 258 "parser.y"
    { char* buf; asprintf(&buf, "<table> <tr> <th>Nombre</th> <th>Estado</th> <th>Fecha de Inicio</th> <th>Fecha de Fin</th> </tr> %s </table>", (yyvsp[(2) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 259 "parser.y"
    { (yyval.string) = ""; ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 260 "parser.y"
    { (yyval.string) = ""; ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 264 "parser.y"
    { char *buf; asprintf(&buf, "%s%s", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 265 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 269 "parser.y"
    { char *buf; asprintf(&buf, "<tr>%s</tr>", (yyvsp[(2) - (3)].string)); (yyval.string) = buf; ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 273 "parser.y"
    { char *buf; asprintf(&buf, "<td>%s</td> <td>%s</td> <td>%s</td> <td>%s</td>", (yyvsp[(1) - (7)].string),(yyvsp[(3) - (7)].string),(yyvsp[(5) - (7)].string),(yyvsp[(7) - (7)].string)); (yyval.string) = buf; ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 274 "parser.y"
    { char *buf; asprintf(&buf, "<td>%s</td> <td>%s</td> <td>%s</td> <td>-</td>", (yyvsp[(1) - (5)].string),(yyvsp[(3) - (5)].string),(yyvsp[(5) - (5)].string)); (yyval.string) = buf; ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 275 "parser.y"
    { char *buf; asprintf(&buf, "<td>%s</td> <td>-</td> <td>%s</td> <td>%s</td>", (yyvsp[(1) - (5)].string),(yyvsp[(3) - (5)].string),(yyvsp[(5) - (5)].string)); (yyval.string) = buf; ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 276 "parser.y"
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

  case 113:

/* Line 1455 of yacc.c  */
#line 297 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 298 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 299 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 300 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 301 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 302 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 303 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 304 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 305 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 306 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 307 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 308 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 309 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 310 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 311 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 312 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 313 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 314 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 315 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 316 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 317 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 318 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 319 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 320 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 321 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 322 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 323 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 324 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 325 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 326 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 327 "parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 331 "parser.y"
    { (yyval.number) = (yyvsp[(1) - (1)].integer); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 332 "parser.y"
    { (yyval.number) = (yyvsp[(1) - (1)].number); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2527 "parser.tab.c"
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
#line 334 "parser.y"


int yyerror(char *error) {
  fprintf(yyout, "[Error Sintactico (%s) en linea %d => %s]\n", yytext, yylineno, error);
  parseResult = -1;
}

void initTemplate() {
  fprintf(yyout, "\
    <!DOCTYPE html>\
\
<html lang=\"es\"> \
<head> \
    <meta charset=\"UTF-8\"> \
    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\"> \
    <title>Parseando con HTML</title> \
    <style> \
        body { \
            background-color: #303841; \
            color: white; \
            font-family: Arial, sans-serif; \
            margin: 0; \
            padding: 0; \
        } \
\
        .container { \
            margin: 20px auto; \
            padding: 20px; \
            max-width: 800px; \
            background-color: #3a4750; \
            border-radius: 10px; \
            box-shadow: 0 0 10px rgba(0, 0, 0, 0.5); \
        } \
\
        h1, h3 { \
            color: #9ED5C5; \
            text-align: center; \
        } \
\
        h2 { \
            color: #9ED5C5; \
            text-align: center; \
            margin-top: 30px;  \
            border-bottom: 2px solid #41B06E; \
            display: inline-block; \
            padding-bottom: 5px; \
        } \
\
        a { \
            color: #40A578; \
            text-decoration: none; \
        } \
\
        a:hover { \
            text-decoration: underline; \
        } \
\
        table { \
            width: 100%%; \
            margin: 10px 0; \
            border-collapse: collapse; \
            table-layout: fixed; \
        } \
\
        th, td { \
            padding: 8px; \
            text-align: center; \
            border: none; \
        } \
\
        th { \
            background-color: #577B8D; \
            position: sticky; \
            top: 0; \
            z-index: 2; \
        } \
\
        tbody td { \
            background-color: #CDE8E5; \
            color: black; \
        } \
\
        tbody { \
            display: block; \
            height: 150px; \
            overflow-y: auto; \
            width: 100%%; \
        } \
\
        thead, tbody tr { \
            display: table; \
            width: 100%%; \
            table-layout: fixed; \
        } \
\
        ul { \
            list-style-type: none; \
            padding: 0; \
        } \
 \
        li { \
            margin: 10px 0; \
            padding: 10px; \
            background-color: #40A578; \
            border-radius: 5px; \
        } \
 \
        .lista { \
            padding-left: 20px; \
        } \
    </style> \
</head> \
");
}

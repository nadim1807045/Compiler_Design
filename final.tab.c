
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
#line 1 "final.y"

	#include <malloc.h>
	#include <stdlib.h>
	#include <stdio.h>
	#include <math.h>
    int check[26],arr[30],sym[26];
    int c[30]={0};
    int x[30]={0};
    int s[30]={0};
    int flag=0;int p = 0;int m=1;
    static int sc = 0;
    char fun[20];
    #define convt 180
    #define py  3.1416



/* Line 189 of yacc.c  */
#line 91 "final.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
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
     NUM = 258,
     VAR = 259,
     IF = 260,
     ELSEIF = 261,
     ELSE = 262,
     MAIN = 263,
     ENDMAIN = 264,
     sm = 265,
     VARIABLE = 266,
     cm = 267,
     CASE = 268,
     DEFAULT = 269,
     TO = 270,
     CONSIDER = 271,
     SWITCH = 272,
     colon = 273,
     FOR = 274,
     TILL = 275,
     IN = 276,
     WHILE = 277,
     LT = 278,
     GT = 279,
     REPEAT = 280,
     LE = 281,
     GE = 282,
     EE = 283,
     MOD = 284,
     FUNC = 285,
     fu = 286,
     PRINT = 287,
     ON = 288,
     POW = 289,
     PRIME = 290,
     FACTORIAL = 291,
     SORT = 292,
     SIN = 293,
     COS = 294,
     TAN = 295,
     SQR = 296,
     SQRT = 297,
     IFX = 298,
     CUBE = 299,
     LOG = 300
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 178 "final.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   552

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNRULES -- Number of states.  */
#define YYNSTATES  166

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      53,    54,    46,    44,     2,    45,     2,    47,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,    51,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    48,
      49
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,     8,    11,    14,    17,    20,    23,
      26,    29,    32,    36,    38,    42,    43,    56,    64,    66,
      69,    73,    77,    79,    82,    86,    90,    91,    93,    99,
     109,   124,   134,   143,   152,   162,   170,   173,   177,   179,
     183,   185,   187,   191,   195,   199,   203,   207,   211,   215,
     219,   223,   227,   231,   234,   237,   240,   243,   246,   251,
     254,   257
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      56,     0,    -1,     8,    57,     9,    -1,    -1,    57,    61,
      -1,    57,    58,    -1,    57,    60,    -1,    57,    63,    -1,
      57,    64,    -1,    57,    67,    -1,    57,    65,    -1,    57,
      66,    -1,     4,    59,    10,    -1,    11,    -1,    59,    12,
      11,    -1,    -1,    17,    69,    15,    16,    50,    60,    14,
      18,    32,    69,    10,    51,    -1,    13,    69,    18,    32,
      69,    10,    60,    -1,    10,    -1,    69,    10,    -1,    11,
      52,    61,    -1,    32,    69,    10,    -1,    10,    -1,    69,
      10,    -1,    11,    52,    62,    -1,    32,    69,    10,    -1,
      -1,    62,    -1,     5,    69,    50,    63,    51,    -1,     5,
      69,    50,    63,    51,     7,    50,    63,    51,    -1,     5,
      69,    50,    63,    51,     6,    69,    50,    63,    51,     7,
      50,    63,    51,    -1,    19,    11,    21,    69,    20,    69,
      50,    63,    51,    -1,    22,    69,    23,    69,    50,    69,
      10,    51,    -1,    22,    69,    24,    69,    50,    69,    10,
      51,    -1,    25,    50,    69,    10,    51,    22,    69,    23,
      69,    -1,    30,    11,    31,    50,    69,    10,    51,    -1,
      11,    31,    -1,    37,    68,    10,    -1,     3,    -1,    68,
      12,     3,    -1,     3,    -1,    11,    -1,    69,    44,    69,
      -1,    69,    45,    69,    -1,    69,    46,    69,    -1,    69,
      47,    69,    -1,    69,    29,    69,    -1,    69,    26,    69,
      -1,    69,    27,    69,    -1,    69,    28,    69,    -1,    69,
      23,    69,    -1,    69,    24,    69,    -1,    53,    69,    54,
      -1,    38,    69,    -1,    39,    69,    -1,    40,    69,    -1,
      41,    69,    -1,    42,    69,    -1,    34,    69,    33,    69,
      -1,    35,    69,    -1,    36,    69,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    30,    30,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    44,    48,    61,    74,    75,    99,   103,   104,
     105,   108,   110,   111,   112,   116,   121,   122,   123,   134,
     147,   166,   176,   189,   200,   217,   220,   229,   256,   257,
     262,   263,   277,   278,   279,   280,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     323,   332
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "VAR", "IF", "ELSEIF", "ELSE",
  "MAIN", "ENDMAIN", "sm", "VARIABLE", "cm", "CASE", "DEFAULT", "TO",
  "CONSIDER", "SWITCH", "colon", "FOR", "TILL", "IN", "WHILE", "LT", "GT",
  "REPEAT", "LE", "GE", "EE", "MOD", "FUNC", "fu", "PRINT", "ON", "POW",
  "PRIME", "FACTORIAL", "SORT", "SIN", "COS", "TAN", "SQR", "SQRT", "IFX",
  "'+'", "'-'", "'*'", "'/'", "CUBE", "LOG", "'{'", "'}'", "'='", "'('",
  "')'", "$accept", "start", "cstatement", "declaration", "ID1", "sw",
  "substatement", "sub", "Conditions", "loops", "fuction", "functioncall",
  "sort", "digits", "exp", 0
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
     295,   296,   297,   298,    43,    45,    42,    47,   299,   300,
     123,   125,    61,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    58,    59,    59,    60,    60,    60,    61,    61,
      61,    61,    62,    62,    62,    62,    63,    63,    63,    63,
      63,    64,    64,    64,    64,    65,    66,    67,    68,    68,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     2,     2,     2,     2,     2,     2,
       2,     2,     3,     1,     3,     0,    12,     7,     1,     2,
       3,     3,     1,     2,     3,     3,     0,     1,     5,     9,
      14,     9,     8,     8,     9,     7,     2,     3,     1,     3,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     2,     4,     2,
       2,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     0,    15,     1,    40,     0,    61,     2,    18,
      41,    61,    61,     0,    61,     0,     0,    61,    61,    61,
      61,     0,    61,    61,    61,    61,    61,    61,     5,     6,
       4,    27,     7,     8,    10,    11,     9,     0,    13,     0,
      41,     0,    36,    61,     0,     0,     0,     0,    61,     0,
       0,     0,    59,    60,    38,     0,    53,    54,    55,    56,
      57,     0,    19,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    12,     0,    61,    41,    20,    24,     0,
       0,    61,    61,    61,     0,     0,    21,    61,    37,     0,
      52,    50,    51,    47,    48,    49,    46,    42,    43,    44,
      45,    14,    22,    41,    61,     0,     0,    61,     0,     0,
      50,    51,     0,    61,    58,    39,    61,     0,    28,    23,
       0,    15,    61,    61,    61,     0,     0,    25,    61,     0,
      15,     0,     0,     0,     0,    61,     0,     0,    61,    17,
       0,    61,     0,     0,     0,    35,    61,     0,     0,     0,
      32,    33,    61,     0,    29,    61,    31,    34,     0,     0,
       0,     0,    61,    16,     0,    30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    28,    39,    29,    30,    31,    32,    33,
      34,    35,    36,    55,   106
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -80
static const yytype_int16 yypact[] =
{
      -1,   -80,    18,   125,   -80,   -80,    28,   145,   -80,   -80,
     -18,   145,   145,    46,   145,    20,    60,   145,   145,   145,
     145,    72,   145,   145,   145,   145,   145,   145,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     2,   -80,    -7,
     -80,   398,   -80,   185,     9,   362,    56,   473,   145,    51,
      62,   465,   498,   498,   -80,    40,   -80,   -80,   -80,   -80,
     -80,   387,   -80,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   -80,    76,   165,    31,   -80,   -80,    63,
      78,   145,   145,   145,   218,    49,   -80,   145,   -80,    93,
     -80,   223,   223,    69,    69,    69,   -80,    12,    12,   -80,
     -80,   -80,   -80,    48,   145,    52,   256,   145,    55,   426,
     164,   249,    61,   145,   498,   -80,   219,   263,    37,   -80,
     288,   -11,   145,   145,   145,    80,   295,   -80,   145,    67,
     -11,    97,   433,   320,   327,   145,    71,   440,   165,   -80,
     100,   165,    73,    75,   505,   -80,   165,    82,    91,    86,
     -80,   -80,   145,    88,   -80,   145,   -80,   223,   120,   352,
      81,    89,   165,   -80,    90,   -80
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -80,   -80,   -80,   -80,   -80,   -79,   102,   -42,   -65,   -80,
     -80,   -80,   -80,   -80,    -3
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -27
static const yytype_int16 yytable[] =
{
      37,    78,    11,    73,    41,    74,    12,     1,    44,    45,
     105,    47,    62,    42,    50,    51,    52,    53,     4,    56,
      57,    58,    59,    60,    61,    63,    64,    79,    65,    66,
      67,    68,    63,    64,    43,    65,    66,    67,    68,    38,
      37,    68,   131,   128,   129,    84,    69,    70,    71,    72,
      88,   139,    89,    69,    70,    71,    72,    46,    71,    72,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
      48,    49,    86,   147,    78,    54,   149,    81,   109,   110,
     111,   153,    85,    43,   114,    63,    64,   101,    65,    66,
      67,    68,    63,    64,   108,   107,   115,   164,    68,   113,
     116,   117,   135,   118,   120,   121,    69,    70,    71,    72,
     126,   140,   125,    69,    70,    71,    72,   138,   148,   132,
     133,   134,   145,   155,   150,   137,   151,   160,     5,     6,
       7,   162,   144,   154,     8,     9,    10,   156,    11,   158,
     163,   165,    12,     0,    13,    77,     0,    14,     5,   157,
      15,     0,   159,     0,     0,    16,    40,    17,     0,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     5,     0,
       7,     0,     0,     0,     0,   102,   103,     0,    27,    18,
      19,    20,     0,    22,    23,    24,    25,    26,     5,     0,
       0,     0,     0,    68,     0,     9,    76,   104,    27,    18,
      19,    20,     0,    22,    23,    24,    25,    26,    69,    70,
      71,    72,     0,     0,   123,     0,   -26,    17,    27,    18,
      19,    20,     5,    22,    23,    24,    25,    26,   112,   102,
     103,     0,     0,     0,     0,     0,     0,     0,    27,     0,
       0,    63,    64,     0,    65,    66,    67,    68,     0,     0,
       0,   104,    68,    18,    19,    20,     0,    22,    23,    24,
      25,    26,    69,    70,    71,    72,   119,    69,    70,    71,
      72,     0,    27,   127,     0,     0,     0,     0,    68,    63,
      64,     0,    65,    66,    67,    68,    63,    64,     0,    65,
      66,    67,    68,    69,    70,    71,    72,     0,   130,   124,
      69,    70,    71,    72,     0,   136,     0,    69,    70,    71,
      72,    63,    64,     0,    65,    66,    67,    68,    63,    64,
       0,    65,    66,    67,    68,     0,     0,     0,     0,     0,
     142,     0,    69,    70,    71,    72,     0,   143,     0,    69,
      70,    71,    72,    63,    64,     0,    65,    66,    67,    68,
      63,    64,     0,    65,    66,    67,    68,     0,     0,     0,
       0,     0,   161,     0,    69,    70,    71,    72,     0,     0,
       0,    69,    70,    71,    72,    63,    64,    80,    65,    66,
      67,    68,     0,     0,     0,    63,    64,     0,    65,    66,
      67,    68,     0,     0,     0,     0,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,    69,    70,    71,    72,
      63,    64,     0,    65,    66,    67,    68,     0,     0,     0,
       0,    63,    64,     0,    65,    66,    67,    68,     0,     0,
       0,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,    90,    69,    70,    71,    72,   122,     0,    75,    63,
      64,     0,    65,    66,    67,    68,    63,    64,     0,    65,
      66,    67,    68,    63,    64,     0,    65,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,    69,    70,    71,
      72,     0,     0,   141,    69,    70,    71,    72,    63,    64,
     146,    65,    66,    67,    68,     0,    82,    83,    87,    65,
      66,    67,    68,     0,     0,     0,     0,     0,     0,    69,
      70,    71,    72,     0,     0,     0,     0,    69,    70,    71,
      72,    63,    64,     0,    65,    66,    67,    68,   152,    64,
       0,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,     0,    69,    70,    71,    72,     0,     0,     0,    69,
      70,    71,    72
};

static const yytype_int16 yycheck[] =
{
       3,    43,    13,    10,     7,    12,    17,     8,    11,    12,
      75,    14,    10,    31,    17,    18,    19,    20,     0,    22,
      23,    24,    25,    26,    27,    23,    24,    18,    26,    27,
      28,    29,    23,    24,    52,    26,    27,    28,    29,    11,
      43,    29,   121,     6,     7,    48,    44,    45,    46,    47,
      10,   130,    12,    44,    45,    46,    47,    11,    46,    47,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      50,    11,    10,   138,   116,     3,   141,    21,    81,    82,
      83,   146,    31,    52,    87,    23,    24,    11,    26,    27,
      28,    29,    23,    24,    16,    32,     3,   162,    29,    50,
      52,   104,    22,    51,   107,    50,    44,    45,    46,    47,
     113,    14,    51,    44,    45,    46,    47,    50,    18,   122,
     123,   124,    51,    32,    51,   128,    51,     7,     3,     4,
       5,    50,   135,    51,     9,    10,    11,    51,    13,    51,
      51,    51,    17,    -1,    19,    43,    -1,    22,     3,   152,
      25,    -1,   155,    -1,    -1,    30,    11,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     3,    -1,
       5,    -1,    -1,    -1,    -1,    10,    11,    -1,    53,    34,
      35,    36,    -1,    38,    39,    40,    41,    42,     3,    -1,
      -1,    -1,    -1,    29,    -1,    10,    11,    32,    53,    34,
      35,    36,    -1,    38,    39,    40,    41,    42,    44,    45,
      46,    47,    -1,    -1,    50,    -1,    51,    32,    53,    34,
      35,    36,     3,    38,    39,    40,    41,    42,    10,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    23,    24,    -1,    26,    27,    28,    29,    -1,    -1,
      -1,    32,    29,    34,    35,    36,    -1,    38,    39,    40,
      41,    42,    44,    45,    46,    47,    10,    44,    45,    46,
      47,    -1,    53,    10,    -1,    -1,    -1,    -1,    29,    23,
      24,    -1,    26,    27,    28,    29,    23,    24,    -1,    26,
      27,    28,    29,    44,    45,    46,    47,    -1,    10,    50,
      44,    45,    46,    47,    -1,    10,    -1,    44,    45,    46,
      47,    23,    24,    -1,    26,    27,    28,    29,    23,    24,
      -1,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      10,    -1,    44,    45,    46,    47,    -1,    10,    -1,    44,
      45,    46,    47,    23,    24,    -1,    26,    27,    28,    29,
      23,    24,    -1,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    10,    -1,    44,    45,    46,    47,    -1,    -1,
      -1,    44,    45,    46,    47,    23,    24,    15,    26,    27,
      28,    29,    -1,    -1,    -1,    23,    24,    -1,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    44,    45,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    47,
      23,    24,    -1,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    23,    24,    -1,    26,    27,    28,    29,    -1,    -1,
      -1,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    44,    45,    46,    47,    20,    -1,    50,    23,
      24,    -1,    26,    27,    28,    29,    23,    24,    -1,    26,
      27,    28,    29,    23,    24,    -1,    26,    27,    28,    29,
      44,    45,    46,    47,    -1,    -1,    -1,    44,    45,    46,
      47,    -1,    -1,    50,    44,    45,    46,    47,    23,    24,
      50,    26,    27,    28,    29,    -1,    23,    24,    33,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    46,    47,    -1,    -1,    -1,    -1,    44,    45,    46,
      47,    23,    24,    -1,    26,    27,    28,    29,    23,    24,
      -1,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46,    47,    -1,    -1,    -1,    44,
      45,    46,    47
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    56,    57,     0,     3,     4,     5,     9,    10,
      11,    13,    17,    19,    22,    25,    30,    32,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    53,    58,    60,
      61,    62,    63,    64,    65,    66,    67,    69,    11,    59,
      11,    69,    31,    52,    69,    69,    11,    69,    50,    11,
      69,    69,    69,    69,     3,    68,    69,    69,    69,    69,
      69,    69,    10,    23,    24,    26,    27,    28,    29,    44,
      45,    46,    47,    10,    12,    50,    11,    61,    62,    18,
      15,    21,    23,    24,    69,    31,    10,    33,    10,    12,
      54,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    11,    10,    11,    32,    63,    69,    32,    16,    69,
      69,    69,    10,    50,    69,     3,    52,    69,    51,    10,
      69,    50,    20,    50,    50,    51,    69,    10,     6,     7,
      10,    60,    69,    69,    69,    22,    10,    69,    50,    60,
      14,    50,    10,    10,    69,    51,    50,    63,    18,    63,
      51,    51,    23,    63,    51,    32,    51,    69,    51,    69,
       7,    10,    50,    51,    63,    51
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
#line 30 "final.y"
    {   printf("compiled successfully!!");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 36 "final.y"
    {   printf("Value of the correct condition is : %d\n",(yyvsp[(2) - (2)]));;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 48 "final.y"
    {	if(check[(yyvsp[(1) - (1)])] == 1)
                            {
                                printf("%c is already declared\n", (yyvsp[(1) - (1)])+97);
                            }
                            else
                            {
                                //printf("single variable declared\n");
                                check[(yyvsp[(1) - (1)])] = 1;
                            }
				;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 61 "final.y"
    {	if(check[(yyvsp[(3) - (3)])] == 1)
								{
									printf("%c is already declared\n", (yyvsp[(3) - (3)])+97);
								}
								else
								{
									//printf("multiple variable declared\n");
									check[(yyvsp[(3) - (3)])] = 1;
								}
							;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 75 "final.y"
    {
                                                                        int i=0;
                                                                        flag=0;
                                                                        for(i=0;i<9;i++)
                                                                        {
                                                                            if((yyvsp[(2) - (12)])==c[i])
                                                                            {
                                                                                flag=1;
                                                                              //  $$ = x[i];
                                                                                printf("inside case NO: %d =  %d\n",(yyvsp[(2) - (12)]),x[i]);


                                                                            }
                                                                        }
                                                                        if(flag==0)
                                                                        {
                                                                           // $$ = $9;
                                                                              printf("inside default  %d\n",(yyvsp[(10) - (12)]));

                                                                        }

                                                                    ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 99 "final.y"
    {c[(yyvsp[(2) - (7)])]=(yyvsp[(2) - (7)]); x[(yyvsp[(2) - (7)])]=(yyvsp[(5) - (7)]);;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 104 "final.y"
    {  printf("value of exp:%d\n",(yyvsp[(1) - (2)]));;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 105 "final.y"
    {  sym[(yyvsp[(1) - (3)])]=(yyvsp[(3) - (3)]);
                                       // printf("Value of the variable: %d\t\n",$3);
                                        ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 108 "final.y"
    {printf("its printf %d\n",(yyvsp[(2) - (3)]));;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 111 "final.y"
    {  (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 112 "final.y"
    {
                                sym[(yyvsp[(1) - (3)])]=(yyvsp[(3) - (3)]);
                                (yyval)=(yyvsp[(3) - (3)]);
                            ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 116 "final.y"
    {(yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 122 "final.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 123 "final.y"
    {    if((yyvsp[(2) - (5)]))
                                                        {
                                                            (yyval)=(yyvsp[(4) - (5)]);
                                                           // printf("value of exp in if: %d\n",$4);
                                                        }
                                                        else
                                                        {
                                                       // printf("Value is zero");
                                                        }
                                                   ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 134 "final.y"
    { if((yyvsp[(2) - (9)]))
                                                                {
                                                                    (yyval)=(yyvsp[(4) - (9)]);
                                                                    printf("Value in if:%d\n",(yyvsp[(4) - (9)]));
                                                                }
                                                                else
                                                                {
                                                                    (yyval)=(yyvsp[(8) - (9)]);
                                                                   // printf("value in else: %d\n",$8);
                                                                }
                                                        ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 147 "final.y"
    {if((yyvsp[(2) - (14)]))
                                                                                            {
                                                                                                (yyval)=(yyvsp[(4) - (14)]);
                                                                                                //printf("Value in if:%d\n",$4);
                                                                                            }
                                                                                            else if((yyvsp[(7) - (14)]))
                                                                                            {
                                                                                                (yyval)=(yyvsp[(9) - (14)]);
                                                                                               // printf("value in else: %d\n",$9);
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                (yyval)=(yyvsp[(13) - (14)]);
                                                                                                //printf("value in else: %d\n",$13);
                                                                                            }
                                                                                            ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 166 "final.y"
    {


                                                for (sym[(yyvsp[(2) - (9)])]=(yyvsp[(4) - (9)]) ; sym[(yyvsp[(2) - (9)])]<=(yyvsp[(6) - (9)]);sym[(yyvsp[(2) - (9)])] += 1){
                                                printf(" %d\n",sym[(yyvsp[(2) - (9)])]);
                                                }



                                                ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 176 "final.y"
    {

		                            printf("WHILE LOOP IS EXECUTED\n");
										int i;
										for(i=(yyvsp[(2) - (8)]);i<=(yyvsp[(4) - (8)]);i++)
										{
											printf("%d ",i);
										}
										printf("\nWhile execution is true\n");
									//	printf("value of the expression: %.d\n",$7);


                                                ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 189 "final.y"
    {

		                            printf("WHILE LOOP IS EXECUTED\n");
										int i;
										for(i=(yyvsp[(2) - (8)]);i>=(yyvsp[(4) - (8)]);i--)
										{
											printf("%d ",i);
										}
										printf("\nWhile execution is true\n");

                                                ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 200 "final.y"
    {

		                                printf("REPEAT WHILE LOOP IS EXECUTED\n");
										int i;
										for(i=(yyvsp[(7) - (9)]);i<=(yyvsp[(9) - (9)]);i++)
										{
											printf("%d ",i);
										}
										printf("\n repeat While execution is true\n");



                                                ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 217 "final.y"
    {fun[(yyvsp[(2) - (7)])]=(yyvsp[(5) - (7)]); printf("fuction declared successfully\n");;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 220 "final.y"
    {   if(fun[(yyvsp[(1) - (2)])])
                                {
                                    printf("function called successfully\n");
                                    printf("function value is %d\n",fun[(yyvsp[(1) - (2)])]);
                                }
                            ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 229 "final.y"
    {   int i,j,swap;


                            for(i=0;i<29-1;i++)
                            {
                                for(j=0;j<29-i;j++)
                                {
                                    if (s[j] > s[j+1])
                                    {
                                        swap   = s[j];
                                        s[j]   = s[j+1];
                                        s[j+1] = swap;
                                    }
                                }
                            }
                            printf("sorted values are ");
                            for(i=0;i<30;i++)
                            {
                                if(s[i] != 0)
                                {
                                    printf("%d  ",s[i]);
                                }

                            }
                            printf("\n");
                    ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 256 "final.y"
    {   s[(yyvsp[(1) - (1)])]=(yyvsp[(1) - (1)]);;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 257 "final.y"
    { s[(yyvsp[(3) - (3)])]=(yyvsp[(3) - (3)]);;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 262 "final.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 263 "final.y"
    {

                if(check[(yyvsp[(1) - (1)])] == 1)
                {
                        (yyval) = sym[(yyvsp[(1) - (1)])];
                }
                else
                {
                printf("%c is not declared\n", (yyvsp[(1) - (1)]) + 97);
                }

                ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 277 "final.y"
    {(yyval)=(yyvsp[(1) - (3)])+(yyvsp[(3) - (3)]);;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 278 "final.y"
    {(yyval)=(yyvsp[(1) - (3)])-(yyvsp[(3) - (3)]);;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 279 "final.y"
    {(yyval)=(yyvsp[(1) - (3)])*(yyvsp[(3) - (3)]);;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 280 "final.y"
    {if((yyvsp[(3) - (3)]))
                    {(yyval)=(yyvsp[(1) - (3)])/(yyvsp[(3) - (3)]);}
                    else
                    {(yyval)=0;
                    printf("Not divided by zero\n");}
                    ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 287 "final.y"
    {(yyval)=(yyvsp[(1) - (3)])%(yyvsp[(3) - (3)]);;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 288 "final.y"
    {(yyval)=(yyvsp[(1) - (3)])<=(yyvsp[(3) - (3)]);;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 289 "final.y"
    {(yyval)=(yyvsp[(1) - (3)])>=(yyvsp[(3) - (3)]);;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 290 "final.y"
    {(yyval)=(yyvsp[(1) - (3)])==(yyvsp[(3) - (3)]);;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 291 "final.y"
    {(yyval)=(yyvsp[(1) - (3)])<(yyvsp[(3) - (3)]);;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 292 "final.y"
    {(yyval)=(yyvsp[(1) - (3)])>(yyvsp[(3) - (3)]);;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 293 "final.y"
    {(yyval)=(yyvsp[(2) - (3)]);;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 294 "final.y"
    {(yyval) = sin(((yyvsp[(2) - (2)])*py)/convt);;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 295 "final.y"
    {(yyval) = cos(((yyvsp[(2) - (2)])*py)/convt);;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 296 "final.y"
    {(yyval) = tan(((yyvsp[(2) - (2)])*py)/convt);;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 297 "final.y"
    {(yyval) = (yyvsp[(2) - (2)])*(yyvsp[(2) - (2)]);;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 298 "final.y"
    {(yyval) = sqrt((yyvsp[(2) - (2)]));;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 299 "final.y"
    {(yyval) = pow((yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]));;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 300 "final.y"
    {   int i,j;
                        int p = 0;

                        for(i=2;i<=(yyvsp[(2) - (2)])-1;i++)
                        {
                            j =  (yyvsp[(2) - (2)]) % i;

                            if (j == 0)
                            {
                                printf("%d is not prime\n",(yyvsp[(2) - (2)]));
                                p=1;
                                (yyval)=0;
                                break;
                            }
                       }
                        if(p == 0)
                        {
                            printf("%d is prime\n",(yyvsp[(2) - (2)]));
                            (yyval)=1;
                        }


                     ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 323 "final.y"
    {int i; int m = 1;
                        for(i=1;i<=(yyvsp[(2) - (2)]);i++)
                        {
                            m = m*i ;

                        }
                         printf("factorial is %d\n",m);
                         (yyval)=m;
        ;}
    break;



/* Line 1455 of yacc.c  */
#line 2100 "final.tab.c"
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
#line 337 "final.y"





int yywrap()
{
return 1;
}
int yyerror(char *s)
{
	printf("%s\n",s);
	return(0);
}


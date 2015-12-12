
/* A Bison parser, made by GNU Bison 2.4.  */

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
#define YYBISON_VERSION "2.4"

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
#line 1 "PL.y"

/********************************************************************
 * AUTHORS: Vijay Ganesh, David L. Dill
 *
 * BEGIN DATE: November, 2005
 *
 * LICENSE: Please view LICENSE file in the home dir of this Program
 ********************************************************************/
// -*- c++ -*-

#include "../AST/AST.h"
using namespace std; 

  // Suppress the bogus warning suppression in bison (it generates
  // compile error)
#undef __GNUC_MINOR__

  extern int yylex(void);
  extern char* yytext;
  extern int yylineno;
  int yyerror(const char *s) {
    cout << "syntax error: line " << yylineno << "\n" << s << endl;    
    BEEV::FatalError("");
    return 1;			/* Dill: don't know what it should return */
  };

#define YYLTYPE_IS_TRIVIAL 1
#define YYMAXDEPTH 10485760
#define YYERROR_VERBOSE 1
#define YY_EXIT_FAILURE -1


/* Line 189 of yacc.c  */
#line 106 "y.tab.c"

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
     AND_TOK = 258,
     OR_TOK = 259,
     NOT_TOK = 260,
     XOR_TOK = 261,
     NAND_TOK = 262,
     NOR_TOK = 263,
     IMPLIES_TOK = 264,
     IFF_TOK = 265,
     IF_TOK = 266,
     THEN_TOK = 267,
     ELSE_TOK = 268,
     ELSIF_TOK = 269,
     END_TOK = 270,
     ENDIF_TOK = 271,
     NEQ_TOK = 272,
     ASSIGN_TOK = 273,
     BV_TOK = 274,
     BVLEFTSHIFT_TOK = 275,
     BVRIGHTSHIFT_TOK = 276,
     BVPLUS_TOK = 277,
     BVSUB_TOK = 278,
     BVUMINUS_TOK = 279,
     BVMULT_TOK = 280,
     BVDIV_TOK = 281,
     BVMOD_TOK = 282,
     SBVDIV_TOK = 283,
     SBVREM_TOK = 284,
     BVNEG_TOK = 285,
     BVAND_TOK = 286,
     BVOR_TOK = 287,
     BVXOR_TOK = 288,
     BVNAND_TOK = 289,
     BVNOR_TOK = 290,
     BVXNOR_TOK = 291,
     BVCONCAT_TOK = 292,
     BVLT_TOK = 293,
     BVGT_TOK = 294,
     BVLE_TOK = 295,
     BVGE_TOK = 296,
     BVSLT_TOK = 297,
     BVSGT_TOK = 298,
     BVSLE_TOK = 299,
     BVSGE_TOK = 300,
     BOOL_TO_BV_TOK = 301,
     BVSX_TOK = 302,
     BOOLEXTRACT_TOK = 303,
     ASSERT_TOK = 304,
     QUERY_TOK = 305,
     BOOLEAN_TOK = 306,
     ARRAY_TOK = 307,
     OF_TOK = 308,
     WITH_TOK = 309,
     TRUELIT_TOK = 310,
     FALSELIT_TOK = 311,
     IN_TOK = 312,
     LET_TOK = 313,
     PUSH_TOK = 314,
     POP_TOK = 315,
     BVCONST_TOK = 316,
     TERMID_TOK = 317,
     FORMID_TOK = 318,
     COUNTEREXAMPLE_TOK = 319,
     NUMERAL_TOK = 320
   };
#endif
/* Tokens.  */
#define AND_TOK 258
#define OR_TOK 259
#define NOT_TOK 260
#define XOR_TOK 261
#define NAND_TOK 262
#define NOR_TOK 263
#define IMPLIES_TOK 264
#define IFF_TOK 265
#define IF_TOK 266
#define THEN_TOK 267
#define ELSE_TOK 268
#define ELSIF_TOK 269
#define END_TOK 270
#define ENDIF_TOK 271
#define NEQ_TOK 272
#define ASSIGN_TOK 273
#define BV_TOK 274
#define BVLEFTSHIFT_TOK 275
#define BVRIGHTSHIFT_TOK 276
#define BVPLUS_TOK 277
#define BVSUB_TOK 278
#define BVUMINUS_TOK 279
#define BVMULT_TOK 280
#define BVDIV_TOK 281
#define BVMOD_TOK 282
#define SBVDIV_TOK 283
#define SBVREM_TOK 284
#define BVNEG_TOK 285
#define BVAND_TOK 286
#define BVOR_TOK 287
#define BVXOR_TOK 288
#define BVNAND_TOK 289
#define BVNOR_TOK 290
#define BVXNOR_TOK 291
#define BVCONCAT_TOK 292
#define BVLT_TOK 293
#define BVGT_TOK 294
#define BVLE_TOK 295
#define BVGE_TOK 296
#define BVSLT_TOK 297
#define BVSGT_TOK 298
#define BVSLE_TOK 299
#define BVSGE_TOK 300
#define BOOL_TO_BV_TOK 301
#define BVSX_TOK 302
#define BOOLEXTRACT_TOK 303
#define ASSERT_TOK 304
#define QUERY_TOK 305
#define BOOLEAN_TOK 306
#define ARRAY_TOK 307
#define OF_TOK 308
#define WITH_TOK 309
#define TRUELIT_TOK 310
#define FALSELIT_TOK 311
#define IN_TOK 312
#define LET_TOK 313
#define PUSH_TOK 314
#define POP_TOK 315
#define BVCONST_TOK 316
#define TERMID_TOK 317
#define FORMID_TOK 318
#define COUNTEREXAMPLE_TOK 319
#define NUMERAL_TOK 320




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 33 "PL.y"


  unsigned int uintval;			/* for numerals in types. */
  struct {
    //stores the indexwidth and valuewidth
    //indexwidth is 0 iff type is bitvector. positive iff type is
    //array, and stores the width of the indexing bitvector
    unsigned int indexwidth;
    //width of the bitvector type
    unsigned int valuewidth;
  } indexvaluewidth;

  //ASTNode,ASTVec
  BEEV::ASTNode *node;
  BEEV::ASTVec *vec;

  //Hash_Map to hold Array Updates during parse A map from array index
  //to array values. To support the WITH construct
  BEEV::ASTNodeMap * Index_To_UpdateValue;



/* Line 214 of yacc.c  */
#line 295 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 307 "y.tab.c"

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
#define YYFINAL  54
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1224

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNRULES -- Number of states.  */
#define YYNSTATES  312

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   320

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      65,    74,     2,     2,    73,     2,    64,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    72,    71,
       2,    61,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    62,     2,    75,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    66,    67,    68,    69,
      70
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    11,    13,    15,    18,    21,
      24,    26,    30,    32,    35,    39,    43,    46,    50,    54,
      60,    66,    68,    72,    74,    76,    78,    80,    85,    87,
      92,    98,   102,   108,   112,   114,   121,   125,   129,   132,
     136,   140,   144,   148,   152,   156,   160,   167,   174,   181,
     188,   195,   202,   209,   216,   218,   220,   222,   227,   233,
     237,   243,   245,   249,   251,   255,   257,   262,   267,   272,
     279,   282,   286,   290,   297,   304,   311,   318,   325,   329,
     333,   337,   344,   353,   358,   367,   376,   385,   394,   403,
     405,   407,   412,   416,   422,   430,   432,   436,   440,   446,
     450
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      77,     0,    -1,    79,    -1,    79,    78,    -1,    69,    71,
      -1,    80,    -1,    83,    -1,    84,    83,    -1,    80,    83,
      -1,    84,    81,    -1,    81,    -1,    80,    84,    81,    -1,
      82,    -1,    81,    82,    -1,    49,    94,    71,    -1,    50,
      94,    71,    -1,    85,    71,    -1,    84,    85,    71,    -1,
      87,    72,    88,    -1,    87,    72,    88,    61,    98,    -1,
      87,    72,    88,    61,    94,    -1,    68,    -1,    68,    73,
      86,    -1,    86,    -1,    89,    -1,    90,    -1,    91,    -1,
      19,    65,    70,    74,    -1,    51,    -1,    52,    89,    53,
      89,    -1,    11,    94,    12,    98,    93,    -1,    13,    98,
      16,    -1,    14,    98,    12,    98,    93,    -1,    65,    94,
      74,    -1,    68,    -1,    48,    65,    98,    73,    70,    74,
      -1,    98,    61,    98,    -1,    98,    17,    98,    -1,     5,
      94,    -1,    94,     4,    94,    -1,    94,     8,    94,    -1,
      94,     3,    94,    -1,    94,     7,    94,    -1,    94,     9,
      94,    -1,    94,    10,    94,    -1,    94,     6,    94,    -1,
      38,    65,    98,    73,    98,    74,    -1,    39,    65,    98,
      73,    98,    74,    -1,    40,    65,    98,    73,    98,    74,
      -1,    41,    65,    98,    73,    98,    74,    -1,    42,    65,
      98,    73,    98,    74,    -1,    43,    65,    98,    73,    98,
      74,    -1,    44,    65,    98,    73,    98,    74,    -1,    45,
      65,    98,    73,    98,    74,    -1,    95,    -1,    55,    -1,
      56,    -1,    58,   101,    57,    94,    -1,    11,    94,    12,
      94,    96,    -1,    13,    94,    16,    -1,    14,    94,    12,
      94,    96,    -1,    98,    -1,    97,    73,    98,    -1,    67,
      -1,    65,    98,    74,    -1,    66,    -1,    46,    65,    94,
      74,    -1,    98,    62,    98,    75,    -1,    98,    65,    98,
      74,    -1,    98,    62,    70,    72,    70,    75,    -1,    30,
      98,    -1,    98,    31,    98,    -1,    98,    32,    98,    -1,
      33,    65,    98,    73,    98,    74,    -1,    34,    65,    98,
      73,    98,    74,    -1,    35,    65,    98,    73,    98,    74,
      -1,    36,    65,    98,    73,    98,    74,    -1,    47,    65,
      98,    73,    70,    74,    -1,    98,    37,    98,    -1,    98,
      20,    70,    -1,    98,    21,    70,    -1,    22,    65,    70,
      73,    97,    74,    -1,    23,    65,    70,    73,    98,    73,
      98,    74,    -1,    24,    65,    98,    74,    -1,    25,    65,
      70,    73,    98,    73,    98,    74,    -1,    26,    65,    70,
      73,    98,    73,    98,    74,    -1,    27,    65,    70,    73,
      98,    73,    98,    74,    -1,    28,    65,    70,    73,    98,
      73,    98,    74,    -1,    29,    65,    70,    73,    98,    73,
      98,    74,    -1,    92,    -1,    99,    -1,    58,   101,    57,
      98,    -1,    98,    54,   100,    -1,    62,    98,    75,    18,
      98,    -1,   100,    54,    62,    98,    75,    18,    98,    -1,
     102,    -1,   101,    73,   102,    -1,    68,    61,    98,    -1,
      68,    72,    88,    61,    98,    -1,    68,    61,    94,    -1,
      68,    72,    88,    61,    94,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   166,   166,   167,   170,   177,   178,   183,   188,   201,
     205,   209,   229,   236,   245,   248,   253,   256,   261,   275,
     293,   313,   319,   327,   335,   336,   337,   340,   352,   358,
     366,   386,   387,   408,   409,   410,   427,   435,   443,   448,
     454,   460,   466,   472,   478,   484,   490,   498,   506,   514,
     522,   530,   538,   546,   554,   555,   561,   568,   577,   586,
     587,   597,   604,   614,   615,   616,   617,   627,   638,   649,
     665,   673,   685,   697,   709,   722,   735,   748,   766,   776,
     786,   807,   815,   824,   832,   841,   850,   859,   868,   876,
     877,   878,   887,   916,   921,   928,   929,   932,   953,   971,
     985
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\"AND\"", "\"OR\"", "\"NOT\"",
  "\"XOR\"", "\"NAND\"", "\"NOR\"", "\"=>\"", "\"<=>\"", "\"IF\"",
  "\"THEN\"", "\"ELSE\"", "\"ELSIF\"", "\"END\"", "\"ENDIF\"", "\"/=\"",
  "\":=\"", "\"BV\"", "\"<<\"", "\">>\"", "\"BVPLUS\"", "\"BVSUB\"",
  "\"BVUMINUS\"", "\"BVMULT\"", "\"BVDIV\"", "\"BVMOD\"", "\"SBVDIV\"",
  "\"SBVREM\"", "\"~\"", "\"&\"", "\"|\"", "\"BVXOR\"", "\"BVNAND\"",
  "\"BVNOR\"", "\"BVXNOR\"", "\"@\"", "\"BVLT\"", "\"BVGT\"", "\"BVLE\"",
  "\"BVGE\"", "\"BVSLT\"", "\"BVSGT\"", "\"BVSLE\"", "\"BVSGE\"",
  "\"BOOLBV\"", "\"BVSX\"", "\"BOOLEXTRACT\"", "\"ASSERT\"", "\"QUERY\"",
  "\"BOOLEAN\"", "\"ARRAY\"", "\"OF\"", "\"WITH\"", "\"TRUE\"",
  "\"FALSE\"", "\"IN\"", "\"LET\"", "\"PUSH\"", "\"POP\"", "'='", "'['",
  "'{'", "'.'", "'('", "BVCONST_TOK", "TERMID_TOK", "FORMID_TOK",
  "COUNTEREXAMPLE_TOK", "NUMERAL_TOK", "';'", "':'", "','", "')'", "']'",
  "$accept", "cmd", "counterexample", "other_cmd", "other_cmd1", "Asserts",
  "Assert", "Query", "VarDecls", "VarDecl", "reverseFORM_IDs", "FORM_IDs",
  "Type", "BvType", "BoolType", "ArrayType", "IfExpr", "ElseRestExpr",
  "Formula", "IfForm", "ElseRestForm", "Exprs", "Expr", "ArrayUpdateExpr",
  "Updates", "LetDecls", "LetDecl", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,    61,    91,   123,    46,    40,   316,   317,   318,   319,
     320,    59,    58,    44,    41,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    77,    78,    79,    79,    79,    79,    80,
      80,    80,    81,    81,    82,    83,    84,    84,    85,    85,
      85,    86,    86,    87,    88,    88,    88,    89,    90,    91,
      92,    93,    93,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    95,    96,
      96,    97,    97,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    99,   100,   100,   101,   101,   102,   102,   102,
     102
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     2,     2,     2,
       1,     3,     1,     2,     3,     3,     2,     3,     3,     5,
       5,     1,     3,     1,     1,     1,     1,     4,     1,     4,
       5,     3,     5,     3,     1,     6,     3,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     6,     6,     6,     6,
       6,     6,     6,     6,     1,     1,     1,     4,     5,     3,
       5,     1,     3,     1,     3,     1,     4,     4,     4,     6,
       2,     3,     3,     6,     6,     6,     6,     6,     3,     3,
       3,     6,     8,     4,     8,     8,     8,     8,     8,     1,
       1,     4,     3,     5,     7,     1,     3,     3,     5,     3,
       5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    21,     0,     2,     5,    10,    12,     6,
       0,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,    56,     0,     0,    65,    63,    34,    89,     0,    54,
       0,    90,     0,     0,     1,     0,     3,     8,     0,    13,
       9,     7,     0,    16,     0,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    70,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    15,    22,     4,
      11,    17,     0,    28,     0,    18,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,    64,    41,    39,    45,    42,    40,    43,    44,    37,
      79,    80,    71,    72,    78,     0,    92,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    66,     0,
       0,    99,    97,     0,    57,    91,    96,     0,     0,    67,
      68,     0,     0,    20,    19,     0,     0,    58,     0,     0,
      30,     0,    61,     0,     0,     0,     0,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,    29,
       0,     0,     0,     0,     0,    81,     0,     0,     0,     0,
       0,     0,    73,    74,    75,    76,    46,    47,    48,    49,
      50,    51,    52,    53,    77,    35,   100,    98,     0,    69,
      59,     0,    31,     0,    62,     0,     0,     0,     0,     0,
       0,    93,     0,     0,    82,    84,    85,    86,    87,    88,
      60,    32
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,    56,     5,     6,     7,     8,     9,    10,    11,
      12,    13,   125,   126,   127,   128,    47,   230,    48,    49,
     227,   231,    50,    51,   176,    95,    96
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -118
static const yytype_int16 yypact[] =
{
     -44,   352,   352,   -41,    62,     0,    -1,    33,  -118,  -118,
     -44,    17,  -118,    20,   352,   352,    30,    41,    43,    44,
      45,    46,    47,    50,   400,    51,    53,    54,    57,    61,
      64,    65,    81,    82,    83,    85,    86,    90,   106,   109,
    -118,  -118,   108,   352,  -118,  -118,  -118,  -118,    36,  -118,
    1099,  -118,    49,   110,  -118,   111,  -118,  -118,   -33,  -118,
      33,  -118,   113,  -118,    14,  -118,  1184,   107,   123,   400,
     127,   137,   138,   140,   141,   352,   108,   400,    10,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     400,   352,   400,   400,     2,     3,  -118,    11,   168,   352,
     352,   352,   352,   352,   352,   352,  -118,   400,   146,   147,
     400,   400,   400,   117,   400,   294,   400,  -118,  -118,  -118,
      33,  -118,   115,  -118,   179,   145,  -118,  -118,  -118,   352,
     148,   152,   183,   153,   154,   155,   158,   159,  1194,     4,
     417,   732,   756,   758,   771,   795,   819,   821,   834,   858,
     882,   884,   897,    19,   921,   945,   352,    14,   352,   108,
    -118,  -118,    79,     1,   128,   211,  -118,   136,   136,  1112,
    -118,  -118,    10,    63,    16,   400,  -118,  1112,   162,    59,
     419,   169,   187,   352,  1172,  1073,   400,   400,  -118,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   400,   400,   400,  -118,   171,
     174,  1214,  1099,   186,  1214,  1099,  -118,   181,   180,  -118,
    -118,   175,   179,  1214,  1099,   352,   352,  -118,   400,   400,
    -118,   -63,  1112,   947,   960,   984,  1008,  1010,  1023,  1086,
    1112,   432,   467,   480,   482,   506,   530,   532,   545,   580,
     593,   595,   619,   177,   178,   352,   236,   184,  -118,  -118,
     287,  1204,  1047,   121,   400,  -118,   400,   400,   400,   400,
     400,   400,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,
    -118,  -118,  -118,  -118,  -118,  -118,  1214,  1099,   400,  -118,
    -118,   352,  -118,   400,  1112,   643,   645,   658,   693,   706,
     708,     6,  1172,  1086,  -118,  -118,  -118,  -118,  -118,  -118,
    -118,  -118
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -118,  -118,  -118,  -118,  -118,    -8,    -6,    28,   252,    -7,
     207,  -118,   104,  -117,  -118,  -118,  -118,   -39,    -2,  -118,
     -40,  -118,    80,  -118,  -118,   189,   129
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      52,    59,    60,    62,    99,     1,     2,   182,   102,   103,
     264,   265,    65,    66,    99,   100,     1,   101,   102,   103,
     104,   105,    99,   100,     3,   101,   102,   103,   104,   105,
     108,   109,    53,   122,    57,     3,   108,   109,    61,    99,
     100,    97,   101,   102,   103,   104,   105,   110,   111,     2,
     120,    62,    99,   100,    59,   101,   102,   103,   104,   105,
     158,   195,    54,   156,   113,   123,   124,     3,   115,    55,
     113,   116,   115,   138,   157,   116,   159,   159,   115,   108,
     109,   116,     1,   108,   109,   160,   102,   103,    63,   153,
     110,   111,    64,   208,   110,    67,   112,   162,   163,   164,
     165,   166,   167,   168,    78,   259,    68,   106,    69,    70,
      71,    72,    73,   113,    59,    74,    79,   113,    80,    81,
     117,   115,    82,    98,   116,   115,    83,   184,   116,    84,
      85,    99,   100,   293,   219,   102,   103,   104,   105,    99,
     100,   108,   109,   102,   103,   104,    86,    87,    88,   132,
      89,    90,   110,   111,   211,    91,   214,   140,   112,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,    92,   154,   155,    93,   113,    94,   130,     3,   175,
     181,   223,   119,   115,   121,   107,   116,   169,   108,   109,
     172,   173,   174,   131,   177,   179,   180,   133,   122,   110,
     111,   108,   109,   108,   109,   112,   183,   134,   135,   185,
     136,   137,   110,   111,   110,   111,   170,   171,   112,   103,
     112,   186,   113,   260,   261,   187,   189,   190,   191,   114,
     115,   192,   193,   116,   218,   113,   212,   113,   215,   221,
     222,   253,   161,   115,   254,   115,   116,   255,   116,   258,
     257,   284,   285,   286,   288,   217,   256,   188,    58,   289,
     118,   213,   310,   224,   311,   139,   232,   233,     0,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   216,   302,
      99,   100,     0,   101,   102,   103,   104,   105,     0,     0,
       0,     0,     0,   290,     0,    75,     0,     0,   262,   263,
       0,     0,     0,     0,     0,     0,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,     0,    25,    26,    27,
      28,     0,     0,     0,     0,   287,     0,     0,     0,     0,
      37,    38,     0,     0,   294,     0,   295,   296,   297,   298,
     299,   300,    76,     0,     0,     0,     0,    14,     0,    77,
      44,    45,     0,    15,   178,     0,     0,     0,   301,     0,
       0,     0,     0,   303,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,     0,    25,    26,    27,    28,     0,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,     0,     0,     0,     0,     0,     0,    40,    41,     0,
      42,    75,     0,     0,     0,     0,     0,    43,    44,    45,
      46,     0,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,     0,    25,    26,    27,    28,   108,   109,   108,
     109,     0,     0,     0,     0,     0,    37,    38,   110,   111,
     110,   111,   108,   109,   112,     0,   112,     0,    76,     0,
       0,     0,     0,   110,   111,    77,    44,    45,     0,   112,
       0,   113,     0,   113,     0,     0,     0,     0,     0,   115,
       0,   115,   116,     0,   116,     0,   113,   108,   109,     0,
       0,   161,     0,   220,   115,     0,     0,   116,   110,   111,
     108,   109,   108,   109,   112,     0,   272,     0,     0,     0,
       0,   110,   111,   110,   111,     0,     0,   112,     0,   112,
       0,   113,     0,     0,     0,     0,   108,   109,     0,   115,
       0,     0,   116,     0,   113,     0,   113,   110,   111,     0,
       0,   273,   115,   112,   115,   116,     0,   116,     0,     0,
     108,   109,   108,   109,   274,     0,   275,     0,     0,     0,
     113,   110,   111,   110,   111,   108,   109,   112,   115,   112,
       0,   116,     0,     0,     0,     0,   110,   111,     0,     0,
     276,     0,   112,     0,   113,     0,   113,     0,     0,     0,
       0,     0,   115,     0,   115,   116,     0,   116,     0,   113,
     108,   109,     0,     0,   277,     0,   278,   115,     0,     0,
     116,   110,   111,   108,   109,   108,   109,   112,     0,   279,
       0,     0,     0,     0,   110,   111,   110,   111,     0,     0,
     112,     0,   112,     0,   113,     0,     0,     0,     0,   108,
     109,     0,   115,     0,     0,   116,     0,   113,     0,   113,
     110,   111,     0,     0,   280,   115,   112,   115,   116,     0,
     116,     0,     0,   108,   109,   108,   109,   281,     0,   282,
       0,     0,     0,   113,   110,   111,   110,   111,   108,   109,
     112,   115,   112,     0,   116,     0,     0,     0,     0,   110,
     111,     0,     0,   283,     0,   112,     0,   113,     0,   113,
       0,     0,     0,     0,     0,   115,     0,   115,   116,     0,
     116,     0,   113,   108,   109,     0,     0,   304,     0,   305,
     115,     0,     0,   116,   110,   111,   108,   109,   108,   109,
     112,     0,   306,     0,     0,     0,     0,   110,   111,   110,
     111,     0,     0,   112,     0,   112,     0,   113,     0,     0,
       0,     0,   108,   109,     0,   115,     0,     0,   116,     0,
     113,     0,   113,   110,   111,     0,     0,   307,   115,   112,
     115,   116,     0,   116,     0,     0,   108,   109,   108,   109,
     308,     0,   309,     0,     0,     0,   113,   110,   111,   110,
     111,   108,   109,   112,   115,   112,     0,   116,     0,     0,
       0,     0,   110,   111,     0,   196,     0,     0,   112,     0,
     113,     0,   113,     0,     0,   108,   109,     0,   115,     0,
     115,   116,     0,   116,     0,   113,   110,   111,     0,   197,
       0,   198,   112,   115,     0,     0,   116,     0,     0,   108,
     109,   108,   109,     0,   199,     0,     0,     0,     0,   113,
     110,   111,   110,   111,   108,   109,   112,   115,   112,     0,
     116,     0,     0,     0,     0,   110,   111,     0,   200,     0,
       0,   112,     0,   113,     0,   113,     0,     0,   108,   109,
       0,   115,     0,   115,   116,     0,   116,     0,   113,   110,
     111,     0,   201,     0,   202,   112,   115,     0,     0,   116,
       0,     0,   108,   109,   108,   109,     0,   203,     0,     0,
       0,     0,   113,   110,   111,   110,   111,   108,   109,   112,
     115,   112,     0,   116,     0,     0,     0,     0,   110,   111,
       0,   204,     0,     0,   112,     0,   113,     0,   113,     0,
       0,   108,   109,     0,   115,     0,   115,   116,     0,   116,
       0,   113,   110,   111,     0,   205,     0,   206,   112,   115,
       0,     0,   116,     0,     0,   108,   109,   108,   109,     0,
     207,     0,     0,     0,     0,   113,   110,   111,   110,   111,
     108,   109,   112,   115,   112,     0,   116,     0,     0,     0,
       0,   110,   111,     0,   209,     0,     0,   112,     0,   113,
       0,   113,     0,     0,   108,   109,     0,   115,     0,   115,
     116,     0,   116,     0,   113,   110,   111,     0,   210,     0,
     266,   112,   115,     0,     0,   116,     0,     0,   108,   109,
     108,   109,     0,   267,     0,     0,     0,     0,   113,   110,
     111,   110,   111,   108,   109,   112,   115,   112,     0,   116,
       0,     0,     0,     0,   110,   111,     0,   268,     0,     0,
     112,     0,   113,   292,   113,     0,     0,   108,   109,     0,
     115,     0,   115,   116,     0,   116,     0,   113,   110,   111,
       0,   269,     0,   270,   112,   115,   228,   229,   116,     0,
     107,     0,     0,   108,   109,     0,   271,     0,     0,   228,
     229,   113,     0,     0,   110,   111,   108,   109,     0,   115,
     112,     0,   116,     0,     0,     0,   107,   110,   111,   108,
     109,     0,     0,   112,     0,     0,     0,   113,     0,     0,
     110,   111,   108,   109,   114,   115,   112,     0,   116,     0,
     113,     0,     0,   110,   111,     0,     0,     0,   115,   112,
       0,   116,     0,   113,     0,     0,     0,     0,     0,     0,
     114,   115,     0,     0,   116,     0,   113,     0,     0,     0,
       0,     0,     0,     0,   115,    99,   100,   116,   101,   102,
     103,   104,   105,     0,     0,   225,   226,    99,   100,     0,
     101,   102,   103,   104,   105,     0,   129,    99,   100,     0,
     101,   102,   103,   104,   105,     0,   194,    99,   100,     0,
     101,   102,   103,   104,   105,     0,   291,    99,   100,     0,
     101,   102,   103,   104,   105
};

static const yytype_int16 yycheck[] =
{
       2,     7,    10,    10,     3,    49,    50,   124,     7,     8,
      73,    74,    14,    15,     3,     4,    49,     6,     7,     8,
       9,    10,     3,     4,    68,     6,     7,     8,     9,    10,
      20,    21,    73,    19,     6,    68,    20,    21,    10,     3,
       4,    43,     6,     7,     8,     9,    10,    31,    32,    50,
      58,    58,     3,     4,    60,     6,     7,     8,     9,    10,
      57,    57,     0,    61,    54,    51,    52,    68,    62,    69,
      54,    65,    62,    75,    72,    65,    73,    73,    62,    20,
      21,    65,    49,    20,    21,    74,     7,     8,    71,    91,
      31,    32,    72,    74,    31,    65,    37,    99,   100,   101,
     102,   103,   104,   105,    24,   222,    65,    71,    65,    65,
      65,    65,    65,    54,   120,    65,    65,    54,    65,    65,
      71,    62,    65,    43,    65,    62,    65,   129,    65,    65,
      65,     3,     4,    12,    75,     7,     8,     9,    10,     3,
       4,    20,    21,     7,     8,     9,    65,    65,    65,    69,
      65,    65,    31,    32,   156,    65,   158,    77,    37,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    65,    92,    93,    65,    54,    68,    70,    68,    62,
      65,   183,    71,    62,    71,    17,    65,   107,    20,    21,
     110,   111,   112,    70,   114,   115,   116,    70,    19,    31,
      32,    20,    21,    20,    21,    37,    61,    70,    70,   129,
      70,    70,    31,    32,    31,    32,    70,    70,    37,     8,
      37,    73,    54,   225,   226,    73,    73,    73,    73,    61,
      62,    73,    73,    65,    72,    54,   156,    54,   158,    70,
      53,    70,    74,    62,    70,    62,    65,    61,    65,    74,
      70,    74,    74,   255,    18,   175,    75,    74,     6,    75,
      53,   157,   302,   183,   303,    76,   186,   187,    -1,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   159,   291,
       3,     4,    -1,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    16,    -1,    11,    -1,    -1,   228,   229,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,
      46,    47,    -1,    -1,   264,    -1,   266,   267,   268,   269,
     270,   271,    58,    -1,    -1,    -1,    -1,     5,    -1,    65,
      66,    67,    -1,    11,    70,    -1,    -1,    -1,   288,    -1,
      -1,    -1,    -1,   293,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,
      58,    11,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,
      68,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    33,    34,    35,    36,    20,    21,    20,
      21,    -1,    -1,    -1,    -1,    -1,    46,    47,    31,    32,
      31,    32,    20,    21,    37,    -1,    37,    -1,    58,    -1,
      -1,    -1,    -1,    31,    32,    65,    66,    67,    -1,    37,
      -1,    54,    -1,    54,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    62,    65,    -1,    65,    -1,    54,    20,    21,    -1,
      -1,    74,    -1,    74,    62,    -1,    -1,    65,    31,    32,
      20,    21,    20,    21,    37,    -1,    74,    -1,    -1,    -1,
      -1,    31,    32,    31,    32,    -1,    -1,    37,    -1,    37,
      -1,    54,    -1,    -1,    -1,    -1,    20,    21,    -1,    62,
      -1,    -1,    65,    -1,    54,    -1,    54,    31,    32,    -1,
      -1,    74,    62,    37,    62,    65,    -1,    65,    -1,    -1,
      20,    21,    20,    21,    74,    -1,    74,    -1,    -1,    -1,
      54,    31,    32,    31,    32,    20,    21,    37,    62,    37,
      -1,    65,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,
      74,    -1,    37,    -1,    54,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    62,    65,    -1,    65,    -1,    54,
      20,    21,    -1,    -1,    74,    -1,    74,    62,    -1,    -1,
      65,    31,    32,    20,    21,    20,    21,    37,    -1,    74,
      -1,    -1,    -1,    -1,    31,    32,    31,    32,    -1,    -1,
      37,    -1,    37,    -1,    54,    -1,    -1,    -1,    -1,    20,
      21,    -1,    62,    -1,    -1,    65,    -1,    54,    -1,    54,
      31,    32,    -1,    -1,    74,    62,    37,    62,    65,    -1,
      65,    -1,    -1,    20,    21,    20,    21,    74,    -1,    74,
      -1,    -1,    -1,    54,    31,    32,    31,    32,    20,    21,
      37,    62,    37,    -1,    65,    -1,    -1,    -1,    -1,    31,
      32,    -1,    -1,    74,    -1,    37,    -1,    54,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    62,    65,    -1,
      65,    -1,    54,    20,    21,    -1,    -1,    74,    -1,    74,
      62,    -1,    -1,    65,    31,    32,    20,    21,    20,    21,
      37,    -1,    74,    -1,    -1,    -1,    -1,    31,    32,    31,
      32,    -1,    -1,    37,    -1,    37,    -1,    54,    -1,    -1,
      -1,    -1,    20,    21,    -1,    62,    -1,    -1,    65,    -1,
      54,    -1,    54,    31,    32,    -1,    -1,    74,    62,    37,
      62,    65,    -1,    65,    -1,    -1,    20,    21,    20,    21,
      74,    -1,    74,    -1,    -1,    -1,    54,    31,    32,    31,
      32,    20,    21,    37,    62,    37,    -1,    65,    -1,    -1,
      -1,    -1,    31,    32,    -1,    73,    -1,    -1,    37,    -1,
      54,    -1,    54,    -1,    -1,    20,    21,    -1,    62,    -1,
      62,    65,    -1,    65,    -1,    54,    31,    32,    -1,    73,
      -1,    73,    37,    62,    -1,    -1,    65,    -1,    -1,    20,
      21,    20,    21,    -1,    73,    -1,    -1,    -1,    -1,    54,
      31,    32,    31,    32,    20,    21,    37,    62,    37,    -1,
      65,    -1,    -1,    -1,    -1,    31,    32,    -1,    73,    -1,
      -1,    37,    -1,    54,    -1,    54,    -1,    -1,    20,    21,
      -1,    62,    -1,    62,    65,    -1,    65,    -1,    54,    31,
      32,    -1,    73,    -1,    73,    37,    62,    -1,    -1,    65,
      -1,    -1,    20,    21,    20,    21,    -1,    73,    -1,    -1,
      -1,    -1,    54,    31,    32,    31,    32,    20,    21,    37,
      62,    37,    -1,    65,    -1,    -1,    -1,    -1,    31,    32,
      -1,    73,    -1,    -1,    37,    -1,    54,    -1,    54,    -1,
      -1,    20,    21,    -1,    62,    -1,    62,    65,    -1,    65,
      -1,    54,    31,    32,    -1,    73,    -1,    73,    37,    62,
      -1,    -1,    65,    -1,    -1,    20,    21,    20,    21,    -1,
      73,    -1,    -1,    -1,    -1,    54,    31,    32,    31,    32,
      20,    21,    37,    62,    37,    -1,    65,    -1,    -1,    -1,
      -1,    31,    32,    -1,    73,    -1,    -1,    37,    -1,    54,
      -1,    54,    -1,    -1,    20,    21,    -1,    62,    -1,    62,
      65,    -1,    65,    -1,    54,    31,    32,    -1,    73,    -1,
      73,    37,    62,    -1,    -1,    65,    -1,    -1,    20,    21,
      20,    21,    -1,    73,    -1,    -1,    -1,    -1,    54,    31,
      32,    31,    32,    20,    21,    37,    62,    37,    -1,    65,
      -1,    -1,    -1,    -1,    31,    32,    -1,    73,    -1,    -1,
      37,    -1,    54,    16,    54,    -1,    -1,    20,    21,    -1,
      62,    -1,    62,    65,    -1,    65,    -1,    54,    31,    32,
      -1,    73,    -1,    73,    37,    62,    13,    14,    65,    -1,
      17,    -1,    -1,    20,    21,    -1,    73,    -1,    -1,    13,
      14,    54,    -1,    -1,    31,    32,    20,    21,    -1,    62,
      37,    -1,    65,    -1,    -1,    -1,    17,    31,    32,    20,
      21,    -1,    -1,    37,    -1,    -1,    -1,    54,    -1,    -1,
      31,    32,    20,    21,    61,    62,    37,    -1,    65,    -1,
      54,    -1,    -1,    31,    32,    -1,    -1,    -1,    62,    37,
      -1,    65,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    -1,    65,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,     3,     4,    65,     6,     7,
       8,     9,    10,    -1,    -1,    13,    14,     3,     4,    -1,
       6,     7,     8,     9,    10,    -1,    12,     3,     4,    -1,
       6,     7,     8,     9,    10,    -1,    12,     3,     4,    -1,
       6,     7,     8,     9,    10,    -1,    12,     3,     4,    -1,
       6,     7,     8,     9,    10
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    49,    50,    68,    77,    79,    80,    81,    82,    83,
      84,    85,    86,    87,     5,    11,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    33,    34,    35,    36,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      55,    56,    58,    65,    66,    67,    68,    92,    94,    95,
      98,    99,    94,    73,     0,    69,    78,    83,    84,    82,
      81,    83,    85,    71,    72,    94,    94,    65,    65,    65,
      65,    65,    65,    65,    65,    11,    58,    65,    98,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    68,   101,   102,    94,    98,     3,
       4,     6,     7,     8,     9,    10,    71,    17,    20,    21,
      31,    32,    37,    54,    61,    62,    65,    71,    86,    71,
      81,    71,    19,    51,    52,    88,    89,    90,    91,    12,
      70,    70,    98,    70,    70,    70,    70,    70,    94,   101,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    94,    98,    98,    61,    72,    57,    73,
      74,    74,    94,    94,    94,    94,    94,    94,    94,    98,
      70,    70,    98,    98,    98,    62,   100,    98,    70,    98,
      98,    65,    89,    61,    94,    98,    73,    73,    74,    73,
      73,    73,    73,    73,    12,    57,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    74,    73,
      73,    94,    98,    88,    94,    98,   102,    98,    72,    75,
      74,    70,    53,    94,    98,    13,    14,    96,    13,    14,
      93,    97,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    70,    70,    61,    75,    70,    74,    89,
      94,    94,    98,    98,    73,    74,    73,    73,    73,    73,
      73,    73,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    94,    98,    18,    75,
      16,    12,    16,    12,    98,    98,    98,    98,    98,    98,
      98,    98,    94,    98,    74,    74,    74,    74,    74,    74,
      96,    93
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
        case 4:

/* Line 1455 of yacc.c  */
#line 171 "PL.y"
    {
			 BEEV::print_counterexample = true;			 
			 BEEV::globalBeevMgr_for_parser->PrintCounterExample(true);
		       }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 179 "PL.y"
    { 
			 BEEV::globalBeevMgr_for_parser->TopLevelSAT(BEEV::globalBeevMgr_for_parser->CreateNode(BEEV::TRUE),*(yyvsp[(1) - (1)].node)); 
			 delete (yyvsp[(1) - (1)].node);
		       }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 184 "PL.y"
    { 
			 BEEV::globalBeevMgr_for_parser->TopLevelSAT(BEEV::globalBeevMgr_for_parser->CreateNode(BEEV::TRUE),*(yyvsp[(2) - (2)].node)); 
			 delete (yyvsp[(2) - (2)].node);
		       }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 189 "PL.y"
    {
			 BEEV::ASTVec aaa = BEEV::globalBeevMgr_for_parser->GetAsserts();
			 if(aaa.size() == 0)
			   yyerror("Fatal Error: parsing:  GetAsserts() call: no assertions: ");
			 if(aaa.size() == 1)
			   BEEV::globalBeevMgr_for_parser->TopLevelSAT(aaa[0],*(yyvsp[(2) - (2)].node));
			 else  		   
			   BEEV::globalBeevMgr_for_parser->TopLevelSAT(BEEV::globalBeevMgr_for_parser->CreateNode(BEEV::AND,aaa),*(yyvsp[(2) - (2)].node));
			 delete (yyvsp[(2) - (2)].node);
		       }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 202 "PL.y"
    {
			delete (yyvsp[(2) - (2)].vec);
                      }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 206 "PL.y"
    {
			delete (yyvsp[(1) - (1)].vec);
		      }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 210 "PL.y"
    {
                        delete (yyvsp[(3) - (3)].vec);
                      }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 230 "PL.y"
    {
			 (yyval.vec) = new BEEV::ASTVec;
			 (yyval.vec)->push_back(*(yyvsp[(1) - (1)].node));
			 BEEV::globalBeevMgr_for_parser->AddAssert(*(yyvsp[(1) - (1)].node));
			 delete (yyvsp[(1) - (1)].node);
                       }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 237 "PL.y"
    {
			 (yyvsp[(1) - (2)].vec)->push_back(*(yyvsp[(2) - (2)].node));
			 BEEV::globalBeevMgr_for_parser->AddAssert(*(yyvsp[(2) - (2)].node));
			 (yyval.vec) = (yyvsp[(1) - (2)].vec);
			 delete (yyvsp[(2) - (2)].node);
		       }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 245 "PL.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 248 "PL.y"
    { BEEV::globalBeevMgr_for_parser->AddQuery(*(yyvsp[(2) - (3)].node)); (yyval.node) = (yyvsp[(2) - (3)].node);}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 254 "PL.y"
    {
                       }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 257 "PL.y"
    {
		       }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 262 "PL.y"
    {
			 for(BEEV::ASTVec::iterator i=(yyvsp[(1) - (3)].vec)->begin(),iend=(yyvsp[(1) - (3)].vec)->end();i!=iend;i++) {
			   BEEV::_parser_symbol_table.insert(*i);
			   i->SetIndexWidth((yyvsp[(3) - (3)].indexvaluewidth).indexwidth);
			   i->SetValueWidth((yyvsp[(3) - (3)].indexvaluewidth).valuewidth);

			   //FIXME: HACK_ATTACK. this vector was hacked into the code to
			   //support a special request by Dawson' group. They want the
			   //counterexample to be printed in the order of variables declared.
			   BEEV::globalBeevMgr_for_parser->_special_print_set.push_back(*i);
			 }
			 delete (yyvsp[(1) - (3)].vec);
		       }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 276 "PL.y"
    {
			 //do type checking. if doesn't pass then abort
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*(yyvsp[(5) - (5)].node));
			 if((yyvsp[(3) - (5)].indexvaluewidth).indexwidth != (yyvsp[(5) - (5)].node)->GetIndexWidth())
			   yyerror("Fatal Error: parsing: LET Expr: Type check fail: ");
			 if((yyvsp[(3) - (5)].indexvaluewidth).valuewidth != (yyvsp[(5) - (5)].node)->GetValueWidth())
			   yyerror("Fatal Error: parsing: LET Expr: Type check fail: ");
			 
			 for(BEEV::ASTVec::iterator i=(yyvsp[(1) - (5)].vec)->begin(),iend=(yyvsp[(1) - (5)].vec)->end();i!=iend;i++) {			   
			   //set the valuewidth of the identifier
			   i->SetValueWidth((yyvsp[(5) - (5)].node)->GetValueWidth());
			   i->SetIndexWidth((yyvsp[(5) - (5)].node)->GetIndexWidth());
			   
			   BEEV::globalBeevMgr_for_parser->LetExprMgr(*i,*(yyvsp[(5) - (5)].node));
			   delete (yyvsp[(5) - (5)].node);
			 }
		       }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 294 "PL.y"
    {
			 //do type checking. if doesn't pass then abort
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*(yyvsp[(5) - (5)].node));
			 if((yyvsp[(3) - (5)].indexvaluewidth).indexwidth != (yyvsp[(5) - (5)].node)->GetIndexWidth())
			   yyerror("Fatal Error: parsing: LET Expr: Type check fail: ");
			 if((yyvsp[(3) - (5)].indexvaluewidth).valuewidth != (yyvsp[(5) - (5)].node)->GetValueWidth())
			   yyerror("Fatal Error: parsing: LET Expr: Type check fail: ");
			 
			 for(BEEV::ASTVec::iterator i=(yyvsp[(1) - (5)].vec)->begin(),iend=(yyvsp[(1) - (5)].vec)->end();i!=iend;i++) {			   
			   //set the valuewidth of the identifier
			   i->SetValueWidth((yyvsp[(5) - (5)].node)->GetValueWidth());
			   i->SetIndexWidth((yyvsp[(5) - (5)].node)->GetIndexWidth());
			   
			   BEEV::globalBeevMgr_for_parser->LetExprMgr(*i,*(yyvsp[(5) - (5)].node));
			   delete (yyvsp[(5) - (5)].node);
			 }
		       }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 314 "PL.y"
    {
			 (yyval.vec) = new BEEV::ASTVec;		        
			 (yyval.vec)->push_back(*(yyvsp[(1) - (1)].node));
			 delete (yyvsp[(1) - (1)].node);
                       }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 320 "PL.y"
    {
			 (yyvsp[(3) - (3)].vec)->push_back(*(yyvsp[(1) - (3)].node));
			 (yyval.vec) = (yyvsp[(3) - (3)].vec);
			 delete (yyvsp[(1) - (3)].node);
                       }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 328 "PL.y"
    {
			(yyval.vec) = new BEEV::ASTVec((yyvsp[(1) - (1)].vec)->rbegin(),(yyvsp[(1) - (1)].vec)->rend());
			delete (yyvsp[(1) - (1)].vec);
                      }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 335 "PL.y"
    { (yyval.indexvaluewidth) = (yyvsp[(1) - (1)].indexvaluewidth); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 336 "PL.y"
    { (yyval.indexvaluewidth) = (yyvsp[(1) - (1)].indexvaluewidth); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 337 "PL.y"
    { (yyval.indexvaluewidth) = (yyvsp[(1) - (1)].indexvaluewidth); }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 341 "PL.y"
    {
                         /*((indexwidth is 0) && (valuewidth>0)) iff type is BV*/
			 (yyval.indexvaluewidth).indexwidth = 0;
			 unsigned int length = (yyvsp[(3) - (4)].uintval);
			 if(length > 0) {
			   (yyval.indexvaluewidth).valuewidth = length;
			 }
			 else
			  BEEV::FatalError("Fatal Error: parsing: BITVECTORS must be of positive length: \n");
		       }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 353 "PL.y"
    {
			 (yyval.indexvaluewidth).indexwidth = 0;
			 (yyval.indexvaluewidth).valuewidth = 0;
		       }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 359 "PL.y"
    {
			 (yyval.indexvaluewidth).indexwidth = (yyvsp[(2) - (4)].indexvaluewidth).valuewidth;
			 (yyval.indexvaluewidth).valuewidth = (yyvsp[(4) - (4)].indexvaluewidth).valuewidth;
		       }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 367 "PL.y"
    {
			 unsigned int width = (yyvsp[(4) - (5)].node)->GetValueWidth();
			 if (width != (yyvsp[(5) - (5)].node)->GetValueWidth())
			   yyerror("Width mismatch in IF-THEN-ELSE");			 
			 if((yyvsp[(4) - (5)].node)->GetIndexWidth() != (yyvsp[(5) - (5)].node)->GetIndexWidth())
			   yyerror("Width mismatch in IF-THEN-ELSE");

			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*(yyvsp[(2) - (5)].node));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*(yyvsp[(4) - (5)].node));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*(yyvsp[(5) - (5)].node));
			 (yyval.node) = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateTerm(BEEV::ITE, width, *(yyvsp[(2) - (5)].node), *(yyvsp[(4) - (5)].node), *(yyvsp[(5) - (5)].node)));
			 (yyval.node)->SetIndexWidth((yyvsp[(5) - (5)].node)->GetIndexWidth());
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*(yyval.node));
			 delete (yyvsp[(2) - (5)].node);
			 delete (yyvsp[(4) - (5)].node);
			 delete (yyvsp[(5) - (5)].node);
		      }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 386 "PL.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 388 "PL.y"
    {
			 unsigned int width = (yyvsp[(2) - (5)].node)->GetValueWidth();
			 if (width != (yyvsp[(4) - (5)].node)->GetValueWidth() || width != (yyvsp[(5) - (5)].node)->GetValueWidth())
			   yyerror("Width mismatch in IF-THEN-ELSE");
			 if ((yyvsp[(2) - (5)].node)->GetIndexWidth() != (yyvsp[(4) - (5)].node)->GetValueWidth() || (yyvsp[(2) - (5)].node)->GetIndexWidth() != (yyvsp[(5) - (5)].node)->GetValueWidth())
			   yyerror("Width mismatch in IF-THEN-ELSE");

			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*(yyvsp[(2) - (5)].node));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*(yyvsp[(4) - (5)].node));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*(yyvsp[(5) - (5)].node));			
			 (yyval.node) = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateTerm(BEEV::ITE, width, *(yyvsp[(2) - (5)].node), *(yyvsp[(4) - (5)].node), *(yyvsp[(5) - (5)].node)));
			 (yyval.node)->SetIndexWidth((yyvsp[(5) - (5)].node)->GetIndexWidth());
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*(yyval.node));
			 delete (yyvsp[(2) - (5)].node);
			 delete (yyvsp[(4) - (5)].node);
			 delete (yyvsp[(5) - (5)].node);
		       }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 408 "PL.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 409 "PL.y"
    {  (yyval.node) = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->ResolveID(*(yyvsp[(1) - (1)].node))); delete (yyvsp[(1) - (1)].node);}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 411 "PL.y"
    {
			 unsigned int width = (yyvsp[(3) - (6)].node)->GetValueWidth();
			 if(0 > (unsigned)(yyvsp[(5) - (6)].uintval) || width <= (unsigned)(yyvsp[(5) - (6)].uintval))
			   yyerror("Fatal Error: BOOLEXTRACT: trying to boolextract a bit which beyond range");
			 
			 BEEV::ASTNode hi  =  BEEV::globalBeevMgr_for_parser->CreateBVConst(32, (yyvsp[(5) - (6)].uintval));
			 BEEV::ASTNode low =  BEEV::globalBeevMgr_for_parser->CreateBVConst(32, (yyvsp[(5) - (6)].uintval));
			 BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateTerm(BEEV::BVEXTRACT,1,*(yyvsp[(3) - (6)].node),hi,low));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 BEEV::ASTNode zero = BEEV::globalBeevMgr_for_parser->CreateBVConst(1,0);			 
			 BEEV::ASTNode * out = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateNode(BEEV::EQ,*n,zero));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*out);

			 (yyval.node) = out;
			 delete (yyvsp[(3) - (6)].node);
                       }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 428 "PL.y"
    {
			 BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateNode(BEEV::EQ, *(yyvsp[(1) - (3)].node), *(yyvsp[(3) - (3)].node)));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;
			 delete (yyvsp[(1) - (3)].node);
			 delete (yyvsp[(3) - (3)].node);
		       }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 436 "PL.y"
    {
			 BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateNode(BEEV::NEQ, *(yyvsp[(1) - (3)].node), *(yyvsp[(3) - (3)].node)));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;
			 delete (yyvsp[(1) - (3)].node);
			 delete (yyvsp[(3) - (3)].node);
		       }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 444 "PL.y"
    {
			 (yyval.node) = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateNode(BEEV::NOT, *(yyvsp[(2) - (2)].node)));
			 delete (yyvsp[(2) - (2)].node);
		       }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 449 "PL.y"
    {
			 (yyval.node) = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateNode(BEEV::OR, *(yyvsp[(1) - (3)].node), *(yyvsp[(3) - (3)].node)));
			 delete (yyvsp[(1) - (3)].node);
			 delete (yyvsp[(3) - (3)].node);
		       }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 455 "PL.y"
    {
			 (yyval.node) = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateNode(BEEV::NOR, *(yyvsp[(1) - (3)].node), *(yyvsp[(3) - (3)].node)));
			 delete (yyvsp[(1) - (3)].node);
			 delete (yyvsp[(3) - (3)].node);
		       }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 461 "PL.y"
    {
			 (yyval.node) = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateNode(BEEV::AND, *(yyvsp[(1) - (3)].node), *(yyvsp[(3) - (3)].node)));
			 delete (yyvsp[(1) - (3)].node);
			 delete (yyvsp[(3) - (3)].node);
		       }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 467 "PL.y"
    {
			 (yyval.node) = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateNode(BEEV::NAND, *(yyvsp[(1) - (3)].node), *(yyvsp[(3) - (3)].node)));
			 delete (yyvsp[(1) - (3)].node);
			 delete (yyvsp[(3) - (3)].node);
		       }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 473 "PL.y"
    {
			 (yyval.node) = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateNode(BEEV::IMPLIES, *(yyvsp[(1) - (3)].node), *(yyvsp[(3) - (3)].node)));
			 delete (yyvsp[(1) - (3)].node);
			 delete (yyvsp[(3) - (3)].node);
		       }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 479 "PL.y"
    {
			 (yyval.node) = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateNode(BEEV::IFF, *(yyvsp[(1) - (3)].node), *(yyvsp[(3) - (3)].node)));
			 delete (yyvsp[(1) - (3)].node);
			 delete (yyvsp[(3) - (3)].node);
		       }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 485 "PL.y"
    {
			 (yyval.node) = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateNode(BEEV::XOR, *(yyvsp[(1) - (3)].node), *(yyvsp[(3) - (3)].node)));
			 delete (yyvsp[(1) - (3)].node);
			 delete (yyvsp[(3) - (3)].node);
		       }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 491 "PL.y"
    {
			 BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateNode(BEEV::BVLT, *(yyvsp[(3) - (6)].node), *(yyvsp[(5) - (6)].node)));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;
			 delete (yyvsp[(3) - (6)].node);
			 delete (yyvsp[(5) - (6)].node);
		       }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 499 "PL.y"
    {
			 BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateNode(BEEV::BVGT, *(yyvsp[(3) - (6)].node), *(yyvsp[(5) - (6)].node)));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;
			 delete (yyvsp[(3) - (6)].node);
			 delete (yyvsp[(5) - (6)].node);
		       }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 507 "PL.y"
    {
			 BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateNode(BEEV::BVLE, *(yyvsp[(3) - (6)].node), *(yyvsp[(5) - (6)].node)));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;
			 delete (yyvsp[(3) - (6)].node);
			 delete (yyvsp[(5) - (6)].node);
		       }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 515 "PL.y"
    {
			 BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateNode(BEEV::BVGE, *(yyvsp[(3) - (6)].node), *(yyvsp[(5) - (6)].node)));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;
			 delete (yyvsp[(3) - (6)].node);
			 delete (yyvsp[(5) - (6)].node);
		       }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 523 "PL.y"
    {
			 BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateNode(BEEV::BVSLT, *(yyvsp[(3) - (6)].node), *(yyvsp[(5) - (6)].node)));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;
			 delete (yyvsp[(3) - (6)].node);
			 delete (yyvsp[(5) - (6)].node);
		       }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 531 "PL.y"
    {
			 BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateNode(BEEV::BVSGT, *(yyvsp[(3) - (6)].node), *(yyvsp[(5) - (6)].node)));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;
			 delete (yyvsp[(3) - (6)].node);
			 delete (yyvsp[(5) - (6)].node);
		       }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 539 "PL.y"
    {
			 BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateNode(BEEV::BVSLE, *(yyvsp[(3) - (6)].node), *(yyvsp[(5) - (6)].node)));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;
			 delete (yyvsp[(3) - (6)].node);
			 delete (yyvsp[(5) - (6)].node);
		       }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 547 "PL.y"
    {
			 BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateNode(BEEV::BVSGE, *(yyvsp[(3) - (6)].node), *(yyvsp[(5) - (6)].node)));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;
			 delete (yyvsp[(3) - (6)].node);
			 delete (yyvsp[(5) - (6)].node);
		       }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 556 "PL.y"
    {
			 (yyval.node) = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateNode(BEEV::TRUE)); 
			 (yyval.node)->SetIndexWidth(0); 
			 (yyval.node)->SetValueWidth(0);
                       }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 562 "PL.y"
    { 
			 (yyval.node) = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateNode(BEEV::FALSE)); 
			 (yyval.node)->SetIndexWidth(0); 
			 (yyval.node)->SetValueWidth(0);
		       }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 569 "PL.y"
    {
			 (yyval.node) = (yyvsp[(4) - (4)].node);
			 //Cleanup the LetIDToExprMap
			 BEEV::globalBeevMgr_for_parser->CleanupLetIDMap();
		       }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 578 "PL.y"
    {
			 (yyval.node) = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateNode(BEEV::ITE, *(yyvsp[(2) - (5)].node), *(yyvsp[(4) - (5)].node), *(yyvsp[(5) - (5)].node)));
			 delete (yyvsp[(2) - (5)].node);
			 delete (yyvsp[(4) - (5)].node);
			 delete (yyvsp[(5) - (5)].node);
		      }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 586 "PL.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 588 "PL.y"
    {
			 (yyval.node) = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateNode(BEEV::ITE, *(yyvsp[(2) - (5)].node), *(yyvsp[(4) - (5)].node), *(yyvsp[(5) - (5)].node)));
			 delete (yyvsp[(2) - (5)].node);
			 delete (yyvsp[(4) - (5)].node);
			 delete (yyvsp[(5) - (5)].node);
		       }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 598 "PL.y"
    {
			 (yyval.vec) = new BEEV::ASTVec;
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*(yyvsp[(1) - (1)].node));
			 (yyval.vec)->push_back(*(yyvsp[(1) - (1)].node));
			 delete (yyvsp[(1) - (1)].node);
		       }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 605 "PL.y"
    {
			 (yyvsp[(1) - (3)].vec)->push_back(*(yyvsp[(3) - (3)].node));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*(yyvsp[(3) - (3)].node));
			 (yyval.vec) = (yyvsp[(1) - (3)].vec); 
			 delete (yyvsp[(3) - (3)].node);
		       }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 614 "PL.y"
    { (yyval.node) = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->ResolveID(*(yyvsp[(1) - (1)].node))); delete (yyvsp[(1) - (1)].node);}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 615 "PL.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 616 "PL.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 618 "PL.y"
    {
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*(yyvsp[(3) - (4)].node));
			 BEEV::ASTNode one = BEEV::globalBeevMgr_for_parser->CreateBVConst(1,1);
			 BEEV::ASTNode zero = BEEV::globalBeevMgr_for_parser->CreateBVConst(1,0);

			 //return ITE(*$3, length(1), 0bin1, 0bin0)
			 (yyval.node) = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateTerm(BEEV::ITE,1,*(yyvsp[(3) - (4)].node),one,zero));
			 delete (yyvsp[(3) - (4)].node);
                       }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 628 "PL.y"
    {			 
			 // valuewidth is same as array, indexwidth is 0.
			 unsigned int width = (yyvsp[(1) - (4)].node)->GetValueWidth();
			 BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateTerm(BEEV::READ, width, *(yyvsp[(1) - (4)].node), *(yyvsp[(3) - (4)].node)));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;

			 delete (yyvsp[(1) - (4)].node);
			 delete (yyvsp[(3) - (4)].node);
		       }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 639 "PL.y"
    {
			 // valuewidth is same as array, indexwidth is 0.
			 unsigned int width = (yyvsp[(1) - (4)].node)->GetValueWidth();
			 BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateTerm(BEEV::READ, width, *(yyvsp[(1) - (4)].node), *(yyvsp[(3) - (4)].node)));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;

			 delete (yyvsp[(1) - (4)].node);
			 delete (yyvsp[(3) - (4)].node);
		       }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 650 "PL.y"
    {
			 int width = (yyvsp[(3) - (6)].uintval) - (yyvsp[(5) - (6)].uintval) + 1;
			 if (width < 0)
			   yyerror("Negative width in extract");
			 
			 if((unsigned)(yyvsp[(3) - (6)].uintval) >= (yyvsp[(1) - (6)].node)->GetValueWidth() || (unsigned)(yyvsp[(5) - (6)].uintval) < 0)
			   yyerror("Parsing: Wrong width in BVEXTRACT\n");			 

			 BEEV::ASTNode hi  =  BEEV::globalBeevMgr_for_parser->CreateBVConst(32, (yyvsp[(3) - (6)].uintval));
			 BEEV::ASTNode low =  BEEV::globalBeevMgr_for_parser->CreateBVConst(32, (yyvsp[(5) - (6)].uintval));
			 BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateTerm(BEEV::BVEXTRACT, width, *(yyvsp[(1) - (6)].node),hi,low));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;
			 delete (yyvsp[(1) - (6)].node);
		       }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 666 "PL.y"
    {
			 unsigned int width = (yyvsp[(2) - (2)].node)->GetValueWidth();
			 BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateTerm(BEEV::BVNEG, width, *(yyvsp[(2) - (2)].node)));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;
			 delete (yyvsp[(2) - (2)].node);
		       }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 674 "PL.y"
    {
			 unsigned int width = (yyvsp[(1) - (3)].node)->GetValueWidth();
			 if (width != (yyvsp[(3) - (3)].node)->GetValueWidth()) {
			   yyerror("Width mismatch in AND");
			 }
			 BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateTerm(BEEV::BVAND, width, *(yyvsp[(1) - (3)].node), *(yyvsp[(3) - (3)].node)));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;
			 delete (yyvsp[(1) - (3)].node);
			 delete (yyvsp[(3) - (3)].node);
		       }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 686 "PL.y"
    {
			 unsigned int width = (yyvsp[(1) - (3)].node)->GetValueWidth();
			 if (width != (yyvsp[(3) - (3)].node)->GetValueWidth()) {
			   yyerror("Width mismatch in OR");
			 }
			 BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateTerm(BEEV::BVOR, width, *(yyvsp[(1) - (3)].node), *(yyvsp[(3) - (3)].node))); 
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;
			 delete (yyvsp[(1) - (3)].node);
			 delete (yyvsp[(3) - (3)].node);
		       }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 698 "PL.y"
    {
			 unsigned int width = (yyvsp[(3) - (6)].node)->GetValueWidth();
			 if (width != (yyvsp[(5) - (6)].node)->GetValueWidth()) {
			   yyerror("Width mismatch in XOR");
			 }
			 BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateTerm(BEEV::BVXOR, width, *(yyvsp[(3) - (6)].node), *(yyvsp[(5) - (6)].node)));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;
			 delete (yyvsp[(3) - (6)].node);
			 delete (yyvsp[(5) - (6)].node);
		       }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 710 "PL.y"
    {
			 unsigned int width = (yyvsp[(3) - (6)].node)->GetValueWidth();
			 if (width != (yyvsp[(5) - (6)].node)->GetValueWidth()) {
			   yyerror("Width mismatch in NAND");
			 }
			 BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateTerm(BEEV::BVNAND, width, *(yyvsp[(3) - (6)].node), *(yyvsp[(5) - (6)].node)));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;

			 delete (yyvsp[(3) - (6)].node);
			 delete (yyvsp[(5) - (6)].node);
		       }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 723 "PL.y"
    {
			 unsigned int width = (yyvsp[(3) - (6)].node)->GetValueWidth();
			 if (width != (yyvsp[(5) - (6)].node)->GetValueWidth()) {
			   yyerror("Width mismatch in NOR");
			 }
			 BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateTerm(BEEV::BVNOR, width, *(yyvsp[(3) - (6)].node), *(yyvsp[(5) - (6)].node)));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;

			 delete (yyvsp[(3) - (6)].node);
			 delete (yyvsp[(5) - (6)].node);
		       }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 736 "PL.y"
    {
			 unsigned int width = (yyvsp[(3) - (6)].node)->GetValueWidth();
			 if (width != (yyvsp[(5) - (6)].node)->GetValueWidth()) {
			   yyerror("Width mismatch in NOR");
			 }
			 BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateTerm(BEEV::BVXNOR, width, *(yyvsp[(3) - (6)].node), *(yyvsp[(5) - (6)].node)));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;

			 delete (yyvsp[(3) - (6)].node);
			 delete (yyvsp[(5) - (6)].node);
		       }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 749 "PL.y"
    {
			 //width of the expr which is being sign
			 //extended. $5 is the resulting length of the
			 //signextended expr
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*(yyvsp[(3) - (6)].node));
			 if((yyvsp[(3) - (6)].node)->GetValueWidth() == (yyvsp[(5) - (6)].uintval)) {
			   (yyval.node) = (yyvsp[(3) - (6)].node);
			 }
			 else {
			   BEEV::ASTNode width = BEEV::globalBeevMgr_for_parser->CreateBVConst(32,(yyvsp[(5) - (6)].uintval));
			   BEEV::ASTNode *n =  
			     new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateTerm(BEEV::BVSX, (yyvsp[(5) - (6)].uintval),*(yyvsp[(3) - (6)].node),width));
			   BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			   (yyval.node) = n;
			   delete (yyvsp[(3) - (6)].node);
			 }
		       }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 767 "PL.y"
    {
			 unsigned int width = (yyvsp[(1) - (3)].node)->GetValueWidth() + (yyvsp[(3) - (3)].node)->GetValueWidth();
			 BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateTerm(BEEV::BVCONCAT, width, *(yyvsp[(1) - (3)].node), *(yyvsp[(3) - (3)].node)));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;
			 
			 delete (yyvsp[(1) - (3)].node);
			 delete (yyvsp[(3) - (3)].node);
		       }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 777 "PL.y"
    {
			 BEEV::ASTNode zero_bits = BEEV::globalBeevMgr_for_parser->CreateZeroConst((yyvsp[(3) - (3)].uintval));
			 BEEV::ASTNode * n = 
			   new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateTerm(BEEV::BVCONCAT,
											(yyvsp[(1) - (3)].node)->GetValueWidth() + (yyvsp[(3) - (3)].uintval), *(yyvsp[(1) - (3)].node), zero_bits));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;
			 delete (yyvsp[(1) - (3)].node);
                       }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 787 "PL.y"
    {
			 BEEV::ASTNode len = BEEV::globalBeevMgr_for_parser->CreateZeroConst((yyvsp[(3) - (3)].uintval));
			 unsigned int w = (yyvsp[(1) - (3)].node)->GetValueWidth();

			 //the amount by which you are rightshifting
			 //is less-than/equal-to the length of input
			 //bitvector
			 if((unsigned)(yyvsp[(3) - (3)].uintval) < w) {
			   BEEV::ASTNode hi = BEEV::globalBeevMgr_for_parser->CreateBVConst(32,w-1);
			   BEEV::ASTNode low = BEEV::globalBeevMgr_for_parser->CreateBVConst(32,(yyvsp[(3) - (3)].uintval));
			   BEEV::ASTNode extract = BEEV::globalBeevMgr_for_parser->CreateTerm(BEEV::BVEXTRACT,w-(yyvsp[(3) - (3)].uintval),*(yyvsp[(1) - (3)].node),hi,low);
			   BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateTerm(BEEV::BVCONCAT, w,len, extract));
			   BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			   (yyval.node) = n;
			 } 
			 else
			   (yyval.node) = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateZeroConst(w));			 

			 delete (yyvsp[(1) - (3)].node);
                       }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 808 "PL.y"
    {
			 BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateTerm(BEEV::BVPLUS, (yyvsp[(3) - (6)].uintval), *(yyvsp[(5) - (6)].vec)));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;

			 delete (yyvsp[(5) - (6)].vec);
                       }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 816 "PL.y"
    {
			 BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateTerm(BEEV::BVSUB, (yyvsp[(3) - (8)].uintval), *(yyvsp[(5) - (8)].node), *(yyvsp[(7) - (8)].node)));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;

			 delete (yyvsp[(5) - (8)].node);
			 delete (yyvsp[(7) - (8)].node);
                       }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 825 "PL.y"
    {
			 unsigned width = (yyvsp[(3) - (4)].node)->GetValueWidth();
			 BEEV::ASTNode * n =  new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateTerm(BEEV::BVUMINUS,width,*(yyvsp[(3) - (4)].node)));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;
			 delete (yyvsp[(3) - (4)].node);
                       }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 833 "PL.y"
    {
			 BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateTerm(BEEV::BVMULT, (yyvsp[(3) - (8)].uintval), *(yyvsp[(5) - (8)].node), *(yyvsp[(7) - (8)].node)));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;

			 delete (yyvsp[(5) - (8)].node);
			 delete (yyvsp[(7) - (8)].node);
		       }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 842 "PL.y"
    {
			 BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateTerm(BEEV::BVDIV, (yyvsp[(3) - (8)].uintval), *(yyvsp[(5) - (8)].node), *(yyvsp[(7) - (8)].node)));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;

			 delete (yyvsp[(5) - (8)].node);
			 delete (yyvsp[(7) - (8)].node);
		       }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 851 "PL.y"
    {
			 BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateTerm(BEEV::BVMOD, (yyvsp[(3) - (8)].uintval), *(yyvsp[(5) - (8)].node), *(yyvsp[(7) - (8)].node)));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;

			 delete (yyvsp[(5) - (8)].node);
			 delete (yyvsp[(7) - (8)].node);
		       }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 860 "PL.y"
    {
			 BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateTerm(BEEV::SBVDIV, (yyvsp[(3) - (8)].uintval), *(yyvsp[(5) - (8)].node), *(yyvsp[(7) - (8)].node)));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;

			 delete (yyvsp[(5) - (8)].node);
			 delete (yyvsp[(7) - (8)].node);
		       }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 869 "PL.y"
    {
			 BEEV::ASTNode * n = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateTerm(BEEV::SBVREM, (yyvsp[(3) - (8)].uintval), *(yyvsp[(5) - (8)].node), *(yyvsp[(7) - (8)].node)));
			 BEEV::globalBeevMgr_for_parser->BVTypeCheck(*n);
			 (yyval.node) = n;
			 delete (yyvsp[(5) - (8)].node);
			 delete (yyvsp[(7) - (8)].node);
		       }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 876 "PL.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 879 "PL.y"
    {
			 (yyval.node) = (yyvsp[(4) - (4)].node);
			 //Cleanup the LetIDToExprMap
			 //BEEV::globalBeevMgr_for_parser->CleanupLetIDMap();
		       }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 888 "PL.y"
    {
		    BEEV::ASTNode * result;
		    unsigned int width = (yyvsp[(1) - (3)].node)->GetValueWidth();

		    BEEV::ASTNodeMap::iterator it = (yyvsp[(3) - (3)].Index_To_UpdateValue)->begin();
		    BEEV::ASTNodeMap::iterator itend = (yyvsp[(3) - (3)].Index_To_UpdateValue)->end();
		    result = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateTerm(BEEV::WRITE,
							      width,
							      *(yyvsp[(1) - (3)].node),
							      (*it).first,
							      (*it).second));
		    result->SetIndexWidth((yyvsp[(1) - (3)].node)->GetIndexWidth());
		    BEEV::globalBeevMgr_for_parser->BVTypeCheck(*result);
		    for(it++;it!=itend;it++) {
		      result = new BEEV::ASTNode(BEEV::globalBeevMgr_for_parser->CreateTerm(BEEV::WRITE,
								width,
								*result,
								(*it).first,
								(*it).second));
		      result->SetIndexWidth((yyvsp[(1) - (3)].node)->GetIndexWidth());
		      BEEV::globalBeevMgr_for_parser->BVTypeCheck(*result);
		    }
		    BEEV::globalBeevMgr_for_parser->BVTypeCheck(*result);
		    (yyval.node) = result;
		    delete (yyvsp[(3) - (3)].Index_To_UpdateValue);
                  }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 917 "PL.y"
    {
		    (yyval.Index_To_UpdateValue) = new BEEV::ASTNodeMap();
		    (*(yyval.Index_To_UpdateValue))[*(yyvsp[(2) - (5)].node)] = *(yyvsp[(5) - (5)].node);		    
                  }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 922 "PL.y"
    {		    
		    (*(yyvsp[(1) - (7)].Index_To_UpdateValue))[*(yyvsp[(4) - (7)].node)] = *(yyvsp[(7) - (7)].node);
                  }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 933 "PL.y"
    {
			  //Expr must typecheck
			  BEEV::globalBeevMgr_for_parser->BVTypeCheck(*(yyvsp[(3) - (3)].node));

			  //set the valuewidth of the identifier
			  (yyvsp[(1) - (3)].node)->SetValueWidth((yyvsp[(3) - (3)].node)->GetValueWidth());
			  (yyvsp[(1) - (3)].node)->SetIndexWidth((yyvsp[(3) - (3)].node)->GetIndexWidth());

			  //populate the hashtable from LET-var -->
			  //LET-exprs and then process them:
			  //
			  //1. ensure that LET variables do not clash
			  //1. with declared variables.
			  //
			  //2. Ensure that LET variables are not
			  //2. defined more than once
			  BEEV::globalBeevMgr_for_parser->LetExprMgr(*(yyvsp[(1) - (3)].node),*(yyvsp[(3) - (3)].node));
			  delete (yyvsp[(1) - (3)].node);
			  delete (yyvsp[(3) - (3)].node);
			}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 954 "PL.y"
    {
			  //do type checking. if doesn't pass then abort
			  BEEV::globalBeevMgr_for_parser->BVTypeCheck(*(yyvsp[(5) - (5)].node));
			  
			  if((yyvsp[(3) - (5)].indexvaluewidth).indexwidth != (yyvsp[(5) - (5)].node)->GetIndexWidth())
			    yyerror("Fatal Error: parsing: LET Expr: Type check fail: ");
			  if((yyvsp[(3) - (5)].indexvaluewidth).valuewidth != (yyvsp[(5) - (5)].node)->GetValueWidth())
			    yyerror("Fatal Error: parsing: LET Expr: Type check fail: ");

			  //set the valuewidth of the identifier
			  (yyvsp[(1) - (5)].node)->SetValueWidth((yyvsp[(5) - (5)].node)->GetValueWidth());
			  (yyvsp[(1) - (5)].node)->SetIndexWidth((yyvsp[(5) - (5)].node)->GetIndexWidth());

			  BEEV::globalBeevMgr_for_parser->LetExprMgr(*(yyvsp[(1) - (5)].node),*(yyvsp[(5) - (5)].node));
			  delete (yyvsp[(1) - (5)].node);
			  delete (yyvsp[(5) - (5)].node);
			}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 972 "PL.y"
    {
			  //Expr must typecheck
			  BEEV::globalBeevMgr_for_parser->BVTypeCheck(*(yyvsp[(3) - (3)].node));

			  //set the valuewidth of the identifier
			  (yyvsp[(1) - (3)].node)->SetValueWidth((yyvsp[(3) - (3)].node)->GetValueWidth());
			  (yyvsp[(1) - (3)].node)->SetIndexWidth((yyvsp[(3) - (3)].node)->GetIndexWidth());

			  //Do LET-expr management
			  BEEV::globalBeevMgr_for_parser->LetExprMgr(*(yyvsp[(1) - (3)].node),*(yyvsp[(3) - (3)].node));
			  delete (yyvsp[(1) - (3)].node);
			  delete (yyvsp[(3) - (3)].node);
			}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 986 "PL.y"
    {
			  //do type checking. if doesn't pass then abort
			  BEEV::globalBeevMgr_for_parser->BVTypeCheck(*(yyvsp[(5) - (5)].node));

			  if((yyvsp[(3) - (5)].indexvaluewidth).indexwidth != (yyvsp[(5) - (5)].node)->GetIndexWidth())
			    yyerror("Fatal Error: parsing: LET Expr: Type check fail: ");
			  if((yyvsp[(3) - (5)].indexvaluewidth).valuewidth != (yyvsp[(5) - (5)].node)->GetValueWidth())
			    yyerror("Fatal Error: parsing: LET Expr: Type check fail: ");

			  //set the valuewidth of the identifier
			  (yyvsp[(1) - (5)].node)->SetValueWidth((yyvsp[(5) - (5)].node)->GetValueWidth());
			  (yyvsp[(1) - (5)].node)->SetIndexWidth((yyvsp[(5) - (5)].node)->GetIndexWidth());

			  //Do LET-expr management
			  BEEV::globalBeevMgr_for_parser->LetExprMgr(*(yyvsp[(1) - (5)].node),*(yyvsp[(5) - (5)].node));
			  delete (yyvsp[(1) - (5)].node);
			  delete (yyvsp[(5) - (5)].node);
			}
    break;



/* Line 1455 of yacc.c  */
#line 3171 "y.tab.c"
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
#line 1006 "PL.y"



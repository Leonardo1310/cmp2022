/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "calc.y"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "header.h"

int yyerror(const char *s);
int yylex (void);

//#define YYERROR_VERBOSE 1
extern int yylineno;


#line 86 "calc.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "calc.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOK_OLHAOGOL = 3,               /* TOK_OLHAOGOL  */
  YYSYMBOL_TOK_EAGORA = 4,                 /* TOK_EAGORA  */
  YYSYMBOL_TOK_PODEISSOARNALDO = 5,        /* TOK_PODEISSOARNALDO  */
  YYSYMBOL_TOK_QUEMEQUESOBE = 6,           /* TOK_QUEMEQUESOBE  */
  YYSYMBOL_TOK_AICOMPLICA = 7,             /* TOK_AICOMPLICA  */
  YYSYMBOL_TOK_ELESOSABEFAZERISSO = 8,     /* TOK_ELESOSABEFAZERISSO  */
  YYSYMBOL_TO_FLOAT = 9,                   /* TO_FLOAT  */
  YYSYMBOL_TO_INT = 10,                    /* TO_INT  */
  YYSYMBOL_TOK_IDENT = 11,                 /* TOK_IDENT  */
  YYSYMBOL_TOK_INTEGER = 12,               /* TOK_INTEGER  */
  YYSYMBOL_TOK_FLOAT = 13,                 /* TOK_FLOAT  */
  YYSYMBOL_TOK_LITERAL = 14,               /* TOK_LITERAL  */
  YYSYMBOL_15_ = 15,                       /* '='  */
  YYSYMBOL_16_ = 16,                       /* '('  */
  YYSYMBOL_17_ = 17,                       /* ')'  */
  YYSYMBOL_18_ = 18,                       /* '{'  */
  YYSYMBOL_19_ = 19,                       /* '}'  */
  YYSYMBOL_20_ = 20,                       /* '>'  */
  YYSYMBOL_21_ = 21,                       /* '<'  */
  YYSYMBOL_22_ = 22,                       /* '!'  */
  YYSYMBOL_23_ = 23,                       /* '+'  */
  YYSYMBOL_24_ = 24,                       /* '-'  */
  YYSYMBOL_25_ = 25,                       /* '*'  */
  YYSYMBOL_26_ = 26,                       /* '/'  */
  YYSYMBOL_27_ = 27,                       /* '%'  */
  YYSYMBOL_28_ = 28,                       /* '^'  */
  YYSYMBOL_YYACCEPT = 29,                  /* $accept  */
  YYSYMBOL_program = 30,                   /* program  */
  YYSYMBOL_stmts = 31,                     /* stmts  */
  YYSYMBOL_stmt = 32,                      /* stmt  */
  YYSYMBOL_atribuicao = 33,                /* atribuicao  */
  YYSYMBOL_quemequesobe = 34,              /* quemequesobe  */
  YYSYMBOL_elesosabefazerisso = 35,        /* elesosabefazerisso  */
  YYSYMBOL_logical = 36,                   /* logical  */
  YYSYMBOL_lterm = 37,                     /* lterm  */
  YYSYMBOL_lfactor = 38,                   /* lfactor  */
  YYSYMBOL_aritmetica = 39,                /* aritmetica  */
  YYSYMBOL_term = 40,                      /* term  */
  YYSYMBOL_term2 = 41,                     /* term2  */
  YYSYMBOL_factor = 42                     /* factor  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   107

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  29
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  37
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  79

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   269


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    22,     2,     2,     2,    27,     2,     2,
      16,    17,    25,    23,     2,    24,     2,    26,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      21,    15,    20,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    28,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    18,     2,    19,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    35,    35,    49,    57,    64,    66,    70,    71,    74,
      86,    98,   111,   132,   146,   152,   155,   161,   164,   166,
     172,   179,   186,   193,   200,   208,   230,   252,   255,   277,
     299,   321,   324,   346,   349,   351,   357,   362
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TOK_OLHAOGOL",
  "TOK_EAGORA", "TOK_PODEISSOARNALDO", "TOK_QUEMEQUESOBE",
  "TOK_AICOMPLICA", "TOK_ELESOSABEFAZERISSO", "TO_FLOAT", "TO_INT",
  "TOK_IDENT", "TOK_INTEGER", "TOK_FLOAT", "TOK_LITERAL", "'='", "'('",
  "')'", "'{'", "'}'", "'>'", "'<'", "'!'", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'^'", "$accept", "program", "stmts", "stmt", "atribuicao",
  "quemequesobe", "elesosabefazerisso", "logical", "lterm", "lfactor",
  "aritmetica", "term", "term2", "factor", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-57)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      64,    82,   -12,   -10,    -7,    11,    64,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,    82,    45,    51,   -14,   -57,    88,
      88,    82,   -57,   -57,    56,    82,    82,    82,    82,    82,
      82,    88,     8,    27,   -57,    25,    17,    45,   -57,    51,
      51,   -14,   -14,   -14,   -57,    22,    35,    88,    20,    88,
      26,    70,    76,    29,    33,   -57,    27,    64,   -57,    82,
      82,    45,    82,    45,    82,    64,    -1,    45,    45,    45,
      45,     9,    67,   -57,    24,    64,   -57,    18,   -57
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     2,     4,     5,     7,
       8,    35,    36,    37,     0,     6,    27,    31,    33,     0,
       0,     0,     1,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    15,    17,     0,     0,     9,    34,    25,
      26,    28,    29,    30,    32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,    14,     0,    16,     0,
       0,    19,     0,    20,     0,     0,     0,    21,    22,    23,
      24,     0,    10,    13,     0,     0,    11,     0,    12
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -57,   -57,   -56,    -6,   -57,   -11,   -57,    12,    37,    41,
       2,    10,    78,    66
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     5,     6,     7,     8,     9,    10,    32,    33,    34,
      35,    16,    17,    18
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      23,    66,     1,    15,    19,     2,    20,     3,    21,    71,
       4,    22,     1,    47,    30,     2,    24,     3,    72,    77,
       4,     1,    47,    37,     2,    48,     3,    47,    73,     4,
       2,    49,    36,    46,    54,    39,    40,    78,    57,    55,
      50,    59,    75,    45,    64,    51,    52,    53,    25,    26,
      50,    65,    38,    61,    63,    51,    52,    53,    25,    26,
      23,    67,    68,    76,    69,    23,    70,     1,    25,    26,
       2,    23,     3,    38,    74,     4,    27,    28,    29,    25,
      26,    11,    12,    13,    56,    60,    14,    11,    12,    13,
      58,    62,    14,    11,    12,    13,    44,     0,    14,    11,
      12,    13,     0,     0,    31,    41,    42,    43
};

static const yytype_int8 yycheck[] =
{
       6,    57,     3,     1,    16,     6,    16,     8,    15,    65,
      11,     0,     3,     5,    28,     6,    14,     8,    19,    75,
      11,     3,     5,    21,     6,    17,     8,     5,    19,    11,
       6,     4,    20,    31,    17,    25,    26,    19,    18,    17,
      15,    15,    18,    31,    15,    20,    21,    22,    23,    24,
      15,    18,    17,    51,    52,    20,    21,    22,    23,    24,
      66,    59,    60,    74,    62,    71,    64,     3,    23,    24,
       6,    77,     8,    17,     7,    11,    25,    26,    27,    23,
      24,    11,    12,    13,    47,    15,    16,    11,    12,    13,
      49,    15,    16,    11,    12,    13,    30,    -1,    16,    11,
      12,    13,    -1,    -1,    16,    27,    28,    29
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     6,     8,    11,    30,    31,    32,    33,    34,
      35,    11,    12,    13,    16,    39,    40,    41,    42,    16,
      16,    15,     0,    32,    39,    23,    24,    25,    26,    27,
      28,    16,    36,    37,    38,    39,    36,    39,    17,    40,
      40,    41,    41,    41,    42,    36,    39,     5,    17,     4,
      15,    20,    21,    22,    17,    17,    37,    18,    38,    15,
      15,    39,    15,    39,    15,    18,    31,    39,    39,    39,
      39,    31,    19,    19,     7,    18,    34,    31,    19
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    29,    30,    31,    31,    32,    32,    32,    32,    33,
      34,    34,    34,    35,    36,    36,    37,    37,    38,    38,
      38,    38,    38,    38,    38,    39,    39,    39,    40,    40,
      40,    40,    41,    41,    42,    42,    42,    42
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     1,     1,     3,
       7,     9,    11,     7,     3,     1,     3,     1,     3,     3,
       3,     4,     4,     4,     4,     3,     3,     1,     3,     3,
       3,     1,     3,     1,     3,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: stmts  */
#line 36 "calc.y"
        {
		noh *program = create_noh(PROGRAM, 1, yylineno);
		program->children[0] = (yyvsp[0].no);

		print(program);
		debug();

		visitor_leaf_first(&program, check_declared_vars);
		visitor_leaf_first(&program, check_division_by_zero);
		visitor_leaf_first(&program, convert_type);
	}
#line 1440 "calc.tab.c"
    break;

  case 3: /* stmts: stmts stmt  */
#line 50 "calc.y"
        {
		noh *n = (yyvsp[-1].no);
		n = (noh*)realloc(n, sizeof(noh) + sizeof(noh*) * n->childcount);
		n->children[n->childcount] = (yyvsp[0].no);
		n->childcount++;
		(yyval.no) = n;
	}
#line 1452 "calc.tab.c"
    break;

  case 4: /* stmts: stmt  */
#line 58 "calc.y"
        {
  		(yyval.no) = create_noh(STMT, 1, yylineno);
		(yyval.no)->children[0] = (yyvsp[0].no);
	}
#line 1461 "calc.tab.c"
    break;

  case 5: /* stmt: atribuicao  */
#line 65 "calc.y"
        { (yyval.no) = (yyvsp[0].no); }
#line 1467 "calc.tab.c"
    break;

  case 6: /* stmt: TOK_OLHAOGOL aritmetica  */
#line 66 "calc.y"
                                  {
		(yyval.no) = create_noh(OLHAOGOL, 1, yylineno);
		(yyval.no)->children[0] = (yyvsp[0].no);
	}
#line 1476 "calc.tab.c"
    break;

  case 7: /* stmt: quemequesobe  */
#line 70 "calc.y"
                                { (yyval.no) = (yyvsp[0].no)  ; }
#line 1482 "calc.tab.c"
    break;

  case 8: /* stmt: elesosabefazerisso  */
#line 71 "calc.y"
                                { (yyval.no) = (yyvsp[0].no)  ; }
#line 1488 "calc.tab.c"
    break;

  case 9: /* atribuicao: TOK_IDENT '=' aritmetica  */
#line 75 "calc.y"
        {
		(yyval.no) = create_noh(ASSIGN, 2, yylineno);
		noh *aux = create_noh(IDENT, 0, yylineno);
		aux->name = (yyvsp[-2].args).ident;
		(yyval.no)->children[0] = aux;
		(yyval.no)->children[1] = (yyvsp[0].no);   
		if (!simbolo_existe((yyvsp[-2].args).ident))
			simbolo_novo((yyvsp[-2].args).ident, TOK_IDENT);
	}
#line 1502 "calc.tab.c"
    break;

  case 10: /* quemequesobe: TOK_QUEMEQUESOBE '(' logical ')' '{' stmts '}'  */
#line 87 "calc.y"
        {
		(yyval.no) = create_noh(QUEMEQUESOBE, 2, yylineno);
		(yyval.no)->children[0] = (yyvsp[-4].no);
		noh *aux = (yyvsp[-1].no);
		if(aux -> childcount == 1)
		{
			(yyval.no)->children[1] = aux -> children[0];
			free(aux);
		}
		else{ (yyval.no) -> children[1] = aux; }
	}
#line 1518 "calc.tab.c"
    break;

  case 11: /* quemequesobe: TOK_QUEMEQUESOBE '(' logical ')' '{' stmts '}' TOK_AICOMPLICA quemequesobe  */
#line 99 "calc.y"
        {
		(yyval.no) = create_noh(QUEMEQUESOBE, 3, yylineno);
		(yyval.no)->children[0] = (yyvsp[-6].no);
		(yyval.no)->children[2] = (yyvsp[0].no);
		noh *aux = (yyvsp[-3].no);
		if(aux -> childcount == 1)
		{
			(yyval.no)->children[1] = aux -> children[0];
			free(aux);
		}
		else{ (yyval.no) -> children[1] = aux; }
	}
#line 1535 "calc.tab.c"
    break;

  case 12: /* quemequesobe: TOK_QUEMEQUESOBE '(' logical ')' '{' stmts '}' TOK_AICOMPLICA '{' stmts '}'  */
#line 112 "calc.y"
        {
				(yyval.no) = create_noh(QUEMEQUESOBE, 3, yylineno);
				(yyval.no)->children[0] = (yyvsp[-8].no);
				noh *aux = (yyvsp[-5].no);
				if(aux -> childcount == 1)
				{
					(yyval.no)->children[1] = aux -> children[0];
					free(aux);
				}
				else{ (yyval.no) -> children[1] = aux; }
				
				aux = (yyvsp[-1].no);
				if(aux -> childcount == 1){
					(yyval.no)->children[2] = aux -> children[0];
					free(aux);
				}
				else{ (yyval.no) -> children[2] = aux; }
	}
#line 1558 "calc.tab.c"
    break;

  case 13: /* elesosabefazerisso: TOK_ELESOSABEFAZERISSO '(' logical ')' '{' stmts '}'  */
#line 133 "calc.y"
        {
		(yyval.no) = create_noh(ELESOSABEFAZERISSO, 2, yylineno)  ;
		(yyval.no)->children[0] = (yyvsp[-4].no)   ;
		noh *aux = (yyvsp[-1].no)	;
		if(aux -> childcount == 1)
		{
			(yyval.no)->children[1] = aux -> children[0];
			free(aux);
		}
		else{ (yyval.no) -> children[1] = aux; }
	}
#line 1574 "calc.tab.c"
    break;

  case 14: /* logical: logical TOK_PODEISSOARNALDO lterm  */
#line 147 "calc.y"
        {
		(yyval.no) = create_noh(PODEISSOARNALDO, 2, yylineno);
		(yyval.no)->children[0] = (yyvsp[-2].no);
		(yyval.no)->children[1] = (yyvsp[0].no);
	}
#line 1584 "calc.tab.c"
    break;

  case 15: /* logical: lterm  */
#line 152 "calc.y"
                { (yyval.no) = (yyvsp[0].no); }
#line 1590 "calc.tab.c"
    break;

  case 16: /* lterm: lterm TOK_EAGORA lfactor  */
#line 156 "calc.y"
        {
		(yyval.no) = create_noh(EAGORA, 2, yylineno);
		(yyval.no)->children[0] = (yyvsp[-2].no);
		(yyval.no)->children[1] = (yyvsp[0].no);
	}
#line 1600 "calc.tab.c"
    break;

  case 17: /* lterm: lfactor  */
#line 161 "calc.y"
                  { (yyval.no) = (yyvsp[0].no); }
#line 1606 "calc.tab.c"
    break;

  case 18: /* lfactor: '(' logical ')'  */
#line 165 "calc.y"
        { (yyval.no) = (yyvsp[-1].no); }
#line 1612 "calc.tab.c"
    break;

  case 19: /* lfactor: aritmetica '>' aritmetica  */
#line 167 "calc.y"
        {
		(yyval.no) = create_noh(GT, 2, yylineno);
		(yyval.no)->children[0] = (yyvsp[-2].no);
		(yyval.no)->children[1] = (yyvsp[0].no);
	}
#line 1622 "calc.tab.c"
    break;

  case 20: /* lfactor: aritmetica '<' aritmetica  */
#line 173 "calc.y"
        {
		(yyval.no) = create_noh(LT, 2, yylineno);
		(yyval.no)->children[0]= (yyvsp[-2].no);
		(yyval.no)->children[1] = (yyvsp[0].no);
							
	}
#line 1633 "calc.tab.c"
    break;

  case 21: /* lfactor: aritmetica '=' '=' aritmetica  */
#line 180 "calc.y"
        {
		(yyval.no) = create_noh(EQ, 2, yylineno);
		(yyval.no)->children[0] = (yyvsp[-3].no);
		(yyval.no)->children[1] = (yyvsp[0].no);
							
	}
#line 1644 "calc.tab.c"
    break;

  case 22: /* lfactor: aritmetica '>' '=' aritmetica  */
#line 187 "calc.y"
        {
		(yyval.no) = create_noh(GE, 2, yylineno);
		(yyval.no)->children[0] = (yyvsp[-3].no);
		(yyval.no)->children[1] = (yyvsp[0].no);
							
	}
#line 1655 "calc.tab.c"
    break;

  case 23: /* lfactor: aritmetica '<' '=' aritmetica  */
#line 194 "calc.y"
        {
		(yyval.no) = create_noh(LE, 2, yylineno);
		(yyval.no)->children[0] = (yyvsp[-3].no);
		(yyval.no)->children[1] = (yyvsp[0].no);
							
	}
#line 1666 "calc.tab.c"
    break;

  case 24: /* lfactor: aritmetica '!' '=' aritmetica  */
#line 201 "calc.y"
        {
		(yyval.no) = create_noh(NE, 2, yylineno);
		(yyval.no)->children[0] = (yyvsp[-3].no);
		(yyval.no)->children[1] = (yyvsp[0].no);
	}
#line 1676 "calc.tab.c"
    break;

  case 25: /* aritmetica: aritmetica '+' term  */
#line 209 "calc.y"
        {
		(yyval.no) = create_noh(SUM, 2, yylineno);
		(yyval.no)->children[0] = (yyvsp[-2].no);
		(yyval.no)->children[1] = (yyvsp[0].no);
		if((yyval.no)->children[0]->type == INTEGER && (yyval.no)->children[1]->type == FLOAT)
 		{
	    		noh *aux = (yyval.no);
			noh *aux2 = aux->children[0];
			noh *aux3 = create_noh(TOFLOAT, 1, yylineno);
			aux3->children[0] = aux2;
			aux->children[0] = aux3;
			
  		}
  		else if((yyval.no)->children[0]->type == FLOAT && (yyval.no)->children[1]->type == INTEGER){
  			noh *aux = (yyval.no);
			noh *aux2 = aux->children[0];
			noh *aux3 = create_noh(TOINT, 1, yylineno);
			aux3->children[0] = aux2;
			aux->children[0] = aux3;
  		}
	}
#line 1702 "calc.tab.c"
    break;

  case 26: /* aritmetica: aritmetica '-' term  */
#line 231 "calc.y"
        {
		(yyval.no) = create_noh(MINUS, 2, yylineno);
		(yyval.no)->children[0] = (yyvsp[-2].no);
		(yyval.no)->children[1] = (yyvsp[0].no);
		if((yyval.no)->children[0]->type == INTEGER && (yyval.no)->children[1]->type == FLOAT)
 		{
	    		noh *aux = (yyval.no);
			noh *aux2 = aux->children[0];
			noh *aux3 = create_noh(TOFLOAT, 1, yylineno);
			aux3->children[0] = aux2;
			aux->children[0] = aux3;
			
  		}
  		else if((yyval.no)->children[0]->type == FLOAT && (yyval.no)->children[1]->type == INTEGER){
  			noh *aux = (yyval.no);
			noh *aux2 = aux->children[0];
			noh *aux3 = create_noh(TOINT, 1, yylineno);
			aux3->children[0] = aux2;
			aux->children[0] = aux3;
  		}
	}
#line 1728 "calc.tab.c"
    break;

  case 27: /* aritmetica: term  */
#line 252 "calc.y"
               { (yyval.no) = (yyvsp[0].no); }
#line 1734 "calc.tab.c"
    break;

  case 28: /* term: term '*' term2  */
#line 256 "calc.y"
        {
  		(yyval.no) = create_noh(MULTI, 2, yylineno);
		(yyval.no)->children[0] = (yyvsp[-2].no);
		(yyval.no)->children[1] = (yyvsp[0].no);
		if((yyval.no)->children[0]->type == INTEGER && (yyval.no)->children[1]->type == FLOAT)
 		{
	    		noh *aux = (yyval.no);
			noh *aux2 = aux->children[0];
			noh *aux3 = create_noh(TOFLOAT, 1, yylineno);
			aux3->children[0] = aux2;
			aux->children[0] = aux3;
			
  		}
  		else if((yyval.no)->children[0]->type == FLOAT && (yyval.no)->children[1]->type == INTEGER){
  			noh *aux = (yyval.no);
			noh *aux2 = aux->children[0];
			noh *aux3 = create_noh(TOINT, 1, yylineno);
			aux3->children[0] = aux2;
			aux->children[0] = aux3;
  		}
	}
#line 1760 "calc.tab.c"
    break;

  case 29: /* term: term '/' term2  */
#line 278 "calc.y"
        {
		(yyval.no) = create_noh(DIVIDE, 2, yylineno);
		(yyval.no)->children[0] = (yyvsp[-2].no);
		(yyval.no)->children[1] = (yyvsp[0].no);
		if((yyval.no)->children[0]->type == INTEGER && (yyval.no)->children[1]->type == FLOAT)
 		{
	    		noh *aux = (yyval.no);
			noh *aux2 = aux->children[0];
			noh *aux3 = create_noh(TOFLOAT, 1, yylineno);
			aux3->children[0] = aux2;
			aux->children[0] = aux3;
			
  		}
  		else if((yyval.no)->children[0]->type == FLOAT && (yyval.no)->children[1]->type == INTEGER){
  			noh *aux = (yyval.no);
			noh *aux2 = aux->children[0];
			noh *aux3 = create_noh(TOINT, 1, yylineno);
			aux3->children[0] = aux2;
			aux->children[0] = aux3;
  		}
	}
#line 1786 "calc.tab.c"
    break;

  case 30: /* term: term '%' term2  */
#line 300 "calc.y"
        {
		(yyval.no) = create_noh(MOD, 2, yylineno);
		(yyval.no)->children[0] = (yyvsp[-2].no);
		(yyval.no)->children[1] = (yyvsp[0].no);
		if((yyval.no)->children[0]->type == INTEGER && (yyval.no)->children[1]->type == FLOAT)
 		{
	    		noh *aux = (yyval.no);
			noh *aux2 = aux->children[0];
			noh *aux3 = create_noh(TOFLOAT, 1, yylineno);
			aux3->children[0] = aux2;
			aux->children[0] = aux3;
			
  		}
  		else if((yyval.no)->children[0]->type == FLOAT && (yyval.no)->children[1]->type == INTEGER){
  			noh *aux = (yyval.no);
			noh *aux2 = aux->children[0];
			noh *aux3 = create_noh(TOINT, 1, yylineno);
			aux3->children[0] = aux2;
			aux->children[0] = aux3;
  		}
	}
#line 1812 "calc.tab.c"
    break;

  case 31: /* term: term2  */
#line 321 "calc.y"
                { (yyval.no) = (yyvsp[0].no); }
#line 1818 "calc.tab.c"
    break;

  case 32: /* term2: term2 '^' factor  */
#line 325 "calc.y"
        {
  		(yyval.no) = create_noh(POW, 2, yylineno);
		(yyval.no)->children[0] = (yyvsp[-2].no);
		(yyval.no)->children[1] = (yyvsp[0].no);
		if((yyval.no)->children[0]->type == INTEGER && (yyval.no)->children[1]->type == FLOAT)
 		{
	    		noh *aux = (yyval.no);
			noh *aux2 = aux->children[0];
			noh *aux3 = create_noh(TOFLOAT, 1, yylineno);
			aux3->children[0] = aux2;
			aux->children[0] = aux3;
			
  		}
  		else if((yyval.no)->children[0]->type == FLOAT && (yyval.no)->children[1]->type == INTEGER){
  			noh *aux = (yyval.no);
			noh *aux2 = aux->children[0];
			noh *aux3 = create_noh(TOINT, 1, yylineno);
			aux3->children[0] = aux2;
			aux->children[0] = aux3;
  		}
	}
#line 1844 "calc.tab.c"
    break;

  case 33: /* term2: factor  */
#line 346 "calc.y"
                 { (yyval.no) = (yyvsp[0].no); }
#line 1850 "calc.tab.c"
    break;

  case 34: /* factor: '(' aritmetica ')'  */
#line 350 "calc.y"
        { (yyval.no) = (yyvsp[-1].no); }
#line 1856 "calc.tab.c"
    break;

  case 35: /* factor: TOK_IDENT  */
#line 351 "calc.y"
                    {
   		(yyval.no) = create_noh(IDENT, 0, yylineno);
		(yyval.no)->name = (yyvsp[0].args).ident;
		if (!simbolo_existe((yyvsp[0].args).ident))
			simbolo_novo((yyvsp[0].args).ident, TOK_IDENT);
	}
#line 1867 "calc.tab.c"
    break;

  case 36: /* factor: TOK_INTEGER  */
#line 358 "calc.y"
        {
		(yyval.no) = create_noh(INTEGER, 0, yylineno);
		(yyval.no)->intv = (yyvsp[0].args).intv;
	}
#line 1876 "calc.tab.c"
    break;

  case 37: /* factor: TOK_FLOAT  */
#line 363 "calc.y"
        {
   		(yyval.no) = create_noh(FLOAT, 0, yylineno);
		(yyval.no)->dblv = (yyvsp[0].args).dblv;
	}
#line 1885 "calc.tab.c"
    break;


#line 1889 "calc.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 370 "calc.y"


int yyerror(const char *s) {
	printf("Erro na linha %d: %s\n", yylineno, s);
	return 1;
}



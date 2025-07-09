/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Skeleton implementation for Bison GLR parsers in C

   Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

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

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 1


/* "%code top" blocks.  */
#line 90 "ned2.y"


#include <cstdio>
#include <cstdlib>
#include <stack>
#include "common/commonutil.h"
#include "common/stringutil.h"
#include "yydefs.h"
#include "errorstore.h"
#include "sourcedocument.h"
#include "exception.h"
#include "nedelements.h"
#include "ned2.lex.h"

#define YYDEBUG 1           /* allow debugging */
#define YYDEBUGGING_ON 0    /* turn on/off debugging */

#if YYDEBUG != 0
#define YYERROR_VERBOSE     /* more detailed error messages */
#include <cstring>         /* YYVERBOSE needs it */
#endif

/* increase GLR stack -- with the default 200 some NED files have reportedly caused a "memory exhausted" error */
#define YYINITDEPTH 500

#include "nedutil.h"
#include "nedyyutil.h"

using namespace omnetpp;

using namespace omnetpp::common;
using namespace omnetpp::nedxml;
using namespace omnetpp::nedxml::nedyyutil;


#line 90 "ned2.tab.cc"


/* Substitute the variable and function names.  */
#define yyparse ned2yyparse
#define yylex   ned2yylex
#define yyerror ned2yyerror
#define yydebug ned2yydebug


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

#include "ned2.tab.h"

/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IMPORT = 3,                     /* IMPORT  */
  YYSYMBOL_PACKAGE = 4,                    /* PACKAGE  */
  YYSYMBOL_PROPERTY = 5,                   /* PROPERTY  */
  YYSYMBOL_MODULE = 6,                     /* MODULE  */
  YYSYMBOL_SIMPLE = 7,                     /* SIMPLE  */
  YYSYMBOL_NETWORK = 8,                    /* NETWORK  */
  YYSYMBOL_CHANNEL = 9,                    /* CHANNEL  */
  YYSYMBOL_MODULEINTERFACE = 10,           /* MODULEINTERFACE  */
  YYSYMBOL_CHANNELINTERFACE = 11,          /* CHANNELINTERFACE  */
  YYSYMBOL_EXTENDS = 12,                   /* EXTENDS  */
  YYSYMBOL_LIKE = 13,                      /* LIKE  */
  YYSYMBOL_TYPES = 14,                     /* TYPES  */
  YYSYMBOL_PARAMETERS = 15,                /* PARAMETERS  */
  YYSYMBOL_GATES = 16,                     /* GATES  */
  YYSYMBOL_SUBMODULES = 17,                /* SUBMODULES  */
  YYSYMBOL_CONNECTIONS = 18,               /* CONNECTIONS  */
  YYSYMBOL_ALLOWUNCONNECTED = 19,          /* ALLOWUNCONNECTED  */
  YYSYMBOL_DOUBLE_ = 20,                   /* DOUBLE_  */
  YYSYMBOL_INT_ = 21,                      /* INT_  */
  YYSYMBOL_STRING_ = 22,                   /* STRING_  */
  YYSYMBOL_BOOL_ = 23,                     /* BOOL_  */
  YYSYMBOL_OBJECT_ = 24,                   /* OBJECT_  */
  YYSYMBOL_XML_ = 25,                      /* XML_  */
  YYSYMBOL_VOLATILE_ = 26,                 /* VOLATILE_  */
  YYSYMBOL_INPUT_ = 27,                    /* INPUT_  */
  YYSYMBOL_OUTPUT_ = 28,                   /* OUTPUT_  */
  YYSYMBOL_INOUT_ = 29,                    /* INOUT_  */
  YYSYMBOL_IF = 30,                        /* IF  */
  YYSYMBOL_FOR = 31,                       /* FOR  */
  YYSYMBOL_RIGHTARROW = 32,                /* RIGHTARROW  */
  YYSYMBOL_LEFTARROW = 33,                 /* LEFTARROW  */
  YYSYMBOL_DBLARROW = 34,                  /* DBLARROW  */
  YYSYMBOL_TO = 35,                        /* TO  */
  YYSYMBOL_THIS_ = 36,                     /* THIS_  */
  YYSYMBOL_PARENT = 37,                    /* PARENT  */
  YYSYMBOL_DEFAULT = 38,                   /* DEFAULT  */
  YYSYMBOL_ASK = 39,                       /* ASK  */
  YYSYMBOL_CONST_ = 40,                    /* CONST_  */
  YYSYMBOL_SIZEOF = 41,                    /* SIZEOF  */
  YYSYMBOL_INDEX_ = 42,                    /* INDEX_  */
  YYSYMBOL_EXISTS = 43,                    /* EXISTS  */
  YYSYMBOL_TYPENAME = 44,                  /* TYPENAME  */
  YYSYMBOL_XMLDOC = 45,                    /* XMLDOC  */
  YYSYMBOL_TRUE_ = 46,                     /* TRUE_  */
  YYSYMBOL_FALSE_ = 47,                    /* FALSE_  */
  YYSYMBOL_NAN_ = 48,                      /* NAN_  */
  YYSYMBOL_INF_ = 49,                      /* INF_  */
  YYSYMBOL_UNDEFINED_ = 50,                /* UNDEFINED_  */
  YYSYMBOL_NULLPTR_ = 51,                  /* NULLPTR_  */
  YYSYMBOL_NULL_ = 52,                     /* NULL_  */
  YYSYMBOL_NAME = 53,                      /* NAME  */
  YYSYMBOL_PROPNAME = 54,                  /* PROPNAME  */
  YYSYMBOL_INTCONSTANT = 55,               /* INTCONSTANT  */
  YYSYMBOL_REALCONSTANT = 56,              /* REALCONSTANT  */
  YYSYMBOL_STRINGCONSTANT = 57,            /* STRINGCONSTANT  */
  YYSYMBOL_CHARCONSTANT = 58,              /* CHARCONSTANT  */
  YYSYMBOL_PLUSPLUS = 59,                  /* PLUSPLUS  */
  YYSYMBOL_DOUBLEASTERISK = 60,            /* DOUBLEASTERISK  */
  YYSYMBOL_EQ = 61,                        /* EQ  */
  YYSYMBOL_NE = 62,                        /* NE  */
  YYSYMBOL_GE = 63,                        /* GE  */
  YYSYMBOL_LE = 64,                        /* LE  */
  YYSYMBOL_SPACESHIP = 65,                 /* SPACESHIP  */
  YYSYMBOL_AND = 66,                       /* AND  */
  YYSYMBOL_OR = 67,                        /* OR  */
  YYSYMBOL_XOR = 68,                       /* XOR  */
  YYSYMBOL_SHIFT_LEFT = 69,                /* SHIFT_LEFT  */
  YYSYMBOL_SHIFT_RIGHT = 70,               /* SHIFT_RIGHT  */
  YYSYMBOL_DOUBLECOLON = 71,               /* DOUBLECOLON  */
  YYSYMBOL_EXPRESSION_SELECTOR = 72,       /* EXPRESSION_SELECTOR  */
  YYSYMBOL_COMMONCHAR = 73,                /* COMMONCHAR  */
  YYSYMBOL_INVALID_CHAR = 74,              /* INVALID_CHAR  */
  YYSYMBOL_75_ = 75,                       /* '?'  */
  YYSYMBOL_76_ = 76,                       /* ':'  */
  YYSYMBOL_77_ = 77,                       /* '<'  */
  YYSYMBOL_78_ = 78,                       /* '>'  */
  YYSYMBOL_MATCH = 79,                     /* MATCH  */
  YYSYMBOL_80_ = 80,                       /* '|'  */
  YYSYMBOL_81_ = 81,                       /* '#'  */
  YYSYMBOL_82_ = 82,                       /* '&'  */
  YYSYMBOL_83_ = 83,                       /* '+'  */
  YYSYMBOL_84_ = 84,                       /* '-'  */
  YYSYMBOL_85_ = 85,                       /* '*'  */
  YYSYMBOL_86_ = 86,                       /* '/'  */
  YYSYMBOL_87_ = 87,                       /* '%'  */
  YYSYMBOL_88_ = 88,                       /* '^'  */
  YYSYMBOL_UMIN_ = 89,                     /* UMIN_  */
  YYSYMBOL_NEG_ = 90,                      /* NEG_  */
  YYSYMBOL_NOT_ = 91,                      /* NOT_  */
  YYSYMBOL_92_ = 92,                       /* '.'  */
  YYSYMBOL_93_ = 93,                       /* ';'  */
  YYSYMBOL_94_ = 94,                       /* '}'  */
  YYSYMBOL_95_ = 95,                       /* '('  */
  YYSYMBOL_96_ = 96,                       /* ')'  */
  YYSYMBOL_97_ = 97,                       /* '@'  */
  YYSYMBOL_98_ = 98,                       /* '['  */
  YYSYMBOL_99_ = 99,                       /* ']'  */
  YYSYMBOL_100_ = 100,                     /* '{'  */
  YYSYMBOL_101_ = 101,                     /* ','  */
  YYSYMBOL_102_ = 102,                     /* '='  */
  YYSYMBOL_103_ = 103,                     /* '$'  */
  YYSYMBOL_104_ = 104,                     /* '!'  */
  YYSYMBOL_105_ = 105,                     /* '~'  */
  YYSYMBOL_YYACCEPT = 106,                 /* $accept  */
  YYSYMBOL_startsymbol = 107,              /* startsymbol  */
  YYSYMBOL_nedfile = 108,                  /* nedfile  */
  YYSYMBOL_definitions = 109,              /* definitions  */
  YYSYMBOL_definition = 110,               /* definition  */
  YYSYMBOL_packagedeclaration = 111,       /* packagedeclaration  */
  YYSYMBOL_dottedname = 112,               /* dottedname  */
  YYSYMBOL_import = 113,                   /* import  */
  YYSYMBOL_importspec = 114,               /* importspec  */
  YYSYMBOL_importname = 115,               /* importname  */
  YYSYMBOL_propertydecl = 116,             /* propertydecl  */
  YYSYMBOL_propertydecl_header = 117,      /* propertydecl_header  */
  YYSYMBOL_opt_propertydecl_keys = 118,    /* opt_propertydecl_keys  */
  YYSYMBOL_propertydecl_keys = 119,        /* propertydecl_keys  */
  YYSYMBOL_propertydecl_key = 120,         /* propertydecl_key  */
  YYSYMBOL_fileproperty = 121,             /* fileproperty  */
  YYSYMBOL_channeldefinition = 122,        /* channeldefinition  */
  YYSYMBOL_123_1 = 123,                    /* $@1  */
  YYSYMBOL_channelheader = 124,            /* channelheader  */
  YYSYMBOL_125_2 = 125,                    /* $@2  */
  YYSYMBOL_opt_inheritance = 126,          /* opt_inheritance  */
  YYSYMBOL_extendsname = 127,              /* extendsname  */
  YYSYMBOL_likenames = 128,                /* likenames  */
  YYSYMBOL_likename = 129,                 /* likename  */
  YYSYMBOL_channelinterfacedefinition = 130, /* channelinterfacedefinition  */
  YYSYMBOL_131_3 = 131,                    /* $@3  */
  YYSYMBOL_channelinterfaceheader = 132,   /* channelinterfaceheader  */
  YYSYMBOL_133_4 = 133,                    /* $@4  */
  YYSYMBOL_opt_interfaceinheritance = 134, /* opt_interfaceinheritance  */
  YYSYMBOL_extendsnames = 135,             /* extendsnames  */
  YYSYMBOL_simplemoduledefinition = 136,   /* simplemoduledefinition  */
  YYSYMBOL_137_5 = 137,                    /* $@5  */
  YYSYMBOL_simplemoduleheader = 138,       /* simplemoduleheader  */
  YYSYMBOL_139_6 = 139,                    /* $@6  */
  YYSYMBOL_compoundmoduledefinition = 140, /* compoundmoduledefinition  */
  YYSYMBOL_141_7 = 141,                    /* $@7  */
  YYSYMBOL_compoundmoduleheader = 142,     /* compoundmoduleheader  */
  YYSYMBOL_143_8 = 143,                    /* $@8  */
  YYSYMBOL_networkdefinition = 144,        /* networkdefinition  */
  YYSYMBOL_145_9 = 145,                    /* $@9  */
  YYSYMBOL_networkheader = 146,            /* networkheader  */
  YYSYMBOL_147_10 = 147,                   /* $@10  */
  YYSYMBOL_moduleinterfacedefinition = 148, /* moduleinterfacedefinition  */
  YYSYMBOL_149_11 = 149,                   /* $@11  */
  YYSYMBOL_moduleinterfaceheader = 150,    /* moduleinterfaceheader  */
  YYSYMBOL_151_12 = 151,                   /* $@12  */
  YYSYMBOL_opt_paramblock = 152,           /* opt_paramblock  */
  YYSYMBOL_153_13 = 153,                   /* $@13  */
  YYSYMBOL_opt_params = 154,               /* opt_params  */
  YYSYMBOL_params = 155,                   /* params  */
  YYSYMBOL_paramsitem = 156,               /* paramsitem  */
  YYSYMBOL_param = 157,                    /* param  */
  YYSYMBOL_param_typenamevalue = 158,      /* param_typenamevalue  */
  YYSYMBOL_param_typename = 159,           /* param_typename  */
  YYSYMBOL_parampattern_value = 160,       /* parampattern_value  */
  YYSYMBOL_paramtype = 161,                /* paramtype  */
  YYSYMBOL_opt_volatile = 162,             /* opt_volatile  */
  YYSYMBOL_paramvalue = 163,               /* paramvalue  */
  YYSYMBOL_opt_inline_properties = 164,    /* opt_inline_properties  */
  YYSYMBOL_inline_properties = 165,        /* inline_properties  */
  YYSYMBOL_parampattern = 166,             /* parampattern  */
  YYSYMBOL_pattern = 167,                  /* pattern  */
  YYSYMBOL_pattern2 = 168,                 /* pattern2  */
  YYSYMBOL_pattern_elem = 169,             /* pattern_elem  */
  YYSYMBOL_pattern_name = 170,             /* pattern_name  */
  YYSYMBOL_pattern_index = 171,            /* pattern_index  */
  YYSYMBOL_property = 172,                 /* property  */
  YYSYMBOL_property_namevalue = 173,       /* property_namevalue  */
  YYSYMBOL_property_name = 174,            /* property_name  */
  YYSYMBOL_opt_property_keys = 175,        /* opt_property_keys  */
  YYSYMBOL_property_keys = 176,            /* property_keys  */
  YYSYMBOL_property_key = 177,             /* property_key  */
  YYSYMBOL_property_values = 178,          /* property_values  */
  YYSYMBOL_property_value = 179,           /* property_value  */
  YYSYMBOL_property_literal = 180,         /* property_literal  */
  YYSYMBOL_opt_gateblock = 181,            /* opt_gateblock  */
  YYSYMBOL_gateblock = 182,                /* gateblock  */
  YYSYMBOL_183_14 = 183,                   /* $@14  */
  YYSYMBOL_opt_gates = 184,                /* opt_gates  */
  YYSYMBOL_gates = 185,                    /* gates  */
  YYSYMBOL_gate = 186,                     /* gate  */
  YYSYMBOL_187_15 = 187,                   /* $@15  */
  YYSYMBOL_gate_typenamesize = 188,        /* gate_typenamesize  */
  YYSYMBOL_gatetype = 189,                 /* gatetype  */
  YYSYMBOL_opt_typeblock = 190,            /* opt_typeblock  */
  YYSYMBOL_typeblock = 191,                /* typeblock  */
  YYSYMBOL_192_16 = 192,                   /* $@16  */
  YYSYMBOL_opt_localtypes = 193,           /* opt_localtypes  */
  YYSYMBOL_localtypes = 194,               /* localtypes  */
  YYSYMBOL_localtype = 195,                /* localtype  */
  YYSYMBOL_opt_submodblock = 196,          /* opt_submodblock  */
  YYSYMBOL_submodblock = 197,              /* submodblock  */
  YYSYMBOL_198_17 = 198,                   /* $@17  */
  YYSYMBOL_opt_submodules = 199,           /* opt_submodules  */
  YYSYMBOL_submodules = 200,               /* submodules  */
  YYSYMBOL_submodule = 201,                /* submodule  */
  YYSYMBOL_202_18 = 202,                   /* $@18  */
  YYSYMBOL_submoduleheader = 203,          /* submoduleheader  */
  YYSYMBOL_submodulename = 204,            /* submodulename  */
  YYSYMBOL_likeexpr = 205,                 /* likeexpr  */
  YYSYMBOL_opt_condition = 206,            /* opt_condition  */
  YYSYMBOL_opt_connblock = 207,            /* opt_connblock  */
  YYSYMBOL_connblock = 208,                /* connblock  */
  YYSYMBOL_209_19 = 209,                   /* $@19  */
  YYSYMBOL_210_20 = 210,                   /* $@20  */
  YYSYMBOL_opt_connections = 211,          /* opt_connections  */
  YYSYMBOL_connections = 212,              /* connections  */
  YYSYMBOL_connectionsitem = 213,          /* connectionsitem  */
  YYSYMBOL_connectiongroup = 214,          /* connectiongroup  */
  YYSYMBOL_215_21 = 215,                   /* $@21  */
  YYSYMBOL_opt_loops_and_conditions = 216, /* opt_loops_and_conditions  */
  YYSYMBOL_loops_and_conditions = 217,     /* loops_and_conditions  */
  YYSYMBOL_loop_or_condition = 218,        /* loop_or_condition  */
  YYSYMBOL_loop = 219,                     /* loop  */
  YYSYMBOL_connection = 220,               /* connection  */
  YYSYMBOL_leftgatespec = 221,             /* leftgatespec  */
  YYSYMBOL_leftmod = 222,                  /* leftmod  */
  YYSYMBOL_leftgate = 223,                 /* leftgate  */
  YYSYMBOL_parentleftgate = 224,           /* parentleftgate  */
  YYSYMBOL_rightgatespec = 225,            /* rightgatespec  */
  YYSYMBOL_rightmod = 226,                 /* rightmod  */
  YYSYMBOL_rightgate = 227,                /* rightgate  */
  YYSYMBOL_parentrightgate = 228,          /* parentrightgate  */
  YYSYMBOL_opt_subgate = 229,              /* opt_subgate  */
  YYSYMBOL_channelspec = 230,              /* channelspec  */
  YYSYMBOL_231_22 = 231,                   /* $@22  */
  YYSYMBOL_channelspec_header = 232,       /* channelspec_header  */
  YYSYMBOL_opt_channelname = 233,          /* opt_channelname  */
  YYSYMBOL_condition = 234,                /* condition  */
  YYSYMBOL_vector = 235,                   /* vector  */
  YYSYMBOL_expression = 236,               /* expression  */
  YYSYMBOL_expr = 237,                     /* expr  */
  YYSYMBOL_functioncall = 238,             /* functioncall  */
  YYSYMBOL_array = 239,                    /* array  */
  YYSYMBOL_object = 240,                   /* object  */
  YYSYMBOL_opt_exprlist = 241,             /* opt_exprlist  */
  YYSYMBOL_exprlist = 242,                 /* exprlist  */
  YYSYMBOL_opt_keyvaluelist = 243,         /* opt_keyvaluelist  */
  YYSYMBOL_keyvaluelist = 244,             /* keyvaluelist  */
  YYSYMBOL_keyvalue = 245,                 /* keyvalue  */
  YYSYMBOL_key = 246,                      /* key  */
  YYSYMBOL_simple_expr = 247,              /* simple_expr  */
  YYSYMBOL_funcname = 248,                 /* funcname  */
  YYSYMBOL_qname_elem = 249,               /* qname_elem  */
  YYSYMBOL_qname = 250,                    /* qname  */
  YYSYMBOL_operator = 251,                 /* operator  */
  YYSYMBOL_literal = 252,                  /* literal  */
  YYSYMBOL_stringliteral = 253,            /* stringliteral  */
  YYSYMBOL_boolliteral = 254,              /* boolliteral  */
  YYSYMBOL_numliteral = 255,               /* numliteral  */
  YYSYMBOL_otherliteral = 256,             /* otherliteral  */
  YYSYMBOL_quantity = 257,                 /* quantity  */
  YYSYMBOL_realconstant_ext = 258,         /* realconstant_ext  */
  YYSYMBOL_opt_semicolon = 259             /* opt_semicolon  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template, here we set
   the default value of $$ to a zeroed-out value.  Since the default
   value is undefined, this behavior is technically correct.  */
static YYSTYPE yyval_default;
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;


/* Unqualified %code blocks.  */
#line 131 "ned2.y"


static struct NedParserState
{
    bool inTypes;
    bool inConnGroup;
    std::stack<ASTNode *> propertyscope; // top(): where to insert properties as we parse them
    std::stack<ASTNode *> blockscope;    // top(): where to insert parameters, gates, etc
    std::stack<ASTNode *> typescope;     // top(): as blockscope, but ignore submodules and connection channels

    /* tmp flags, used with param, gate and conn */
    int paramType;
    int gateType;
    bool isVolatile;
    bool isDefault;
    YYLTYPE exprPos;
    int subgate;
    std::vector<ASTNode *> propvals; // temporarily collects property values

    /* tmp flags, used with msg fields */
    bool isAbstract;
    bool isReadonly;

    /* NED-II: modules, channels */
    NedFileElement *nedfile;
    CommentElement *comment;
    PackageElement *package;
    ImportElement *import;
    PropertyDeclElement *propertydecl;
    ExtendsElement *extends;
    InterfaceNameElement *interfacename;
    ASTNode *component;  // compound/simple module, module interface, channel or channel interface
    ParametersElement *parameters;
    ParamElement *param;
    PropertyElement *property;
    PropertyKeyElement *propkey;
    TypesElement *types;
    GatesElement *gates;
    GateElement *gate;
    SubmodulesElement *submods;
    SubmoduleElement *submod;
    ConnectionsElement *conns;
    ConnectionGroupElement *conngroup;
    ConnectionElement *conn;
    LoopElement *loop;
    ConditionElement *condition;
} ps;

static void resetParserState()
{
    static NedParserState cleanps;
    ps = cleanps;
}

static NedParserState globalps;  // for error recovery

static void restoreGlobalParserState()  // for error recovery
{
    ps = globalps;
}

static void assertNonEmpty(std::stack<ASTNode *>& somescope)
{
    // for error recovery: STL stack::top() crashes if stack is empty
    if (somescope.empty())
    {
        INTERNAL_ERROR0(nullptr, "error during parsing: scope stack empty");
        somescope.push(nullptr);
    }
}

void ned2yyerror(YYLTYPE* yyllocp, yyscan_t unused, ParseContext *np, const char* msg);


#line 479 "ned2.tab.cc"

#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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


#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#ifdef __cplusplus
  typedef bool yybool;
# define yytrue true
# define yyfalse false
#else
  /* When we move to stdbool, get rid of the various casts to yybool.  */
  typedef signed char yybool;
# define yytrue 1
# define yyfalse 0
#endif

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(Env) setjmp (Env)
/* Pacify Clang and ICC.  */
# define YYLONGJMP(Env, Val)                    \
 do {                                           \
   longjmp (Env, Val);                          \
   YY_ASSERT (0);                               \
 } while (yyfalse)
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

/* The _Noreturn keyword of C11.  */
#ifndef _Noreturn
# if (defined __cplusplus \
      && ((201103 <= __cplusplus && !(__GNUC__ == 4 && __GNUC_MINOR__ == 7)) \
          || (defined _MSC_VER && 1900 <= _MSC_VER)))
#  define _Noreturn [[noreturn]]
# elif ((!defined __cplusplus || defined __clang__) \
        && (201112 <= (defined __STDC_VERSION__ ? __STDC_VERSION__ : 0) \
            || (!defined __STRICT_ANSI__ \
                && (4 < __GNUC__ + (7 <= __GNUC_MINOR__) \
                    || (defined __apple_build_version__ \
                        ? 6000000 <= __apple_build_version__ \
                        : 3 < __clang_major__ + (5 <= __clang_minor__))))))
   /* _Noreturn works as-is.  */
# elif (2 < __GNUC__ + (8 <= __GNUC_MINOR__) || defined __clang__ \
        || 0x5110 <= __SUNPRO_C)
#  define _Noreturn __attribute__ ((__noreturn__))
# elif 1200 <= (defined _MSC_VER ? _MSC_VER : 0)
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn
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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  104
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1221

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  106
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  154
/* YYNRULES -- Number of rules.  */
#define YYNRULES  385
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  627
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 10
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   333

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
       2,     2,     2,   104,     2,    81,   103,    87,    82,     2,
      95,    96,    85,    83,   101,    84,    92,    86,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    76,    93,
      77,   102,    78,    75,    97,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    98,     2,    99,    88,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   100,    80,    94,   105,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      79,    89,    90,    91
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   212,   212,   213,   220,   221,   225,   226,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   242,
     244,   246,   248,   250,   252,   254,   256,   258,   260,   262,
     264,   269,   279,   280,   287,   297,   298,   302,   303,   304,
     305,   306,   307,   314,   319,   327,   332,   341,   342,   346,
     347,   351,   363,   375,   374,   398,   397,   407,   408,   409,
     410,   414,   423,   424,   428,   441,   440,   464,   463,   473,
     474,   478,   479,   487,   486,   511,   510,   524,   523,   551,
     550,   564,   563,   591,   590,   607,   606,   631,   630,   643,
     652,   651,   661,   662,   666,   667,   671,   672,   676,   677,
     684,   690,   708,   715,   723,   741,   743,   745,   747,   749,
     751,   756,   758,   763,   765,   767,   771,   779,   780,   784,
     785,   789,   801,   802,   806,   807,   811,   812,   813,   814,
     818,   819,   820,   821,   822,   823,   824,   825,   829,   830,
     831,   832,   839,   847,   848,   852,   858,   868,   872,   873,
     877,   886,   898,   900,   905,   909,   918,   919,   920,   921,
     928,   929,   934,   933,   946,   947,   951,   955,   966,   965,
     977,   982,   988,   995,   999,  1004,  1013,  1015,  1017,  1025,
    1026,  1031,  1030,  1047,  1048,  1052,  1053,  1057,  1058,  1059,
    1060,  1061,  1062,  1063,  1064,  1071,  1072,  1077,  1076,  1089,
    1090,  1094,  1095,  1099,  1105,  1104,  1124,  1129,  1139,  1144,
    1153,  1155,  1157,  1162,  1164,  1172,  1173,  1178,  1177,  1189,
    1188,  1201,  1202,  1206,  1207,  1211,  1212,  1225,  1224,  1246,
    1248,  1253,  1258,  1266,  1267,  1271,  1286,  1291,  1296,  1302,
    1308,  1312,  1319,  1320,  1324,  1330,  1338,  1343,  1349,  1358,
    1365,  1373,  1384,  1385,  1389,  1393,  1401,  1406,  1412,  1421,
    1426,  1432,  1441,  1453,  1458,  1460,  1459,  1474,  1475,  1479,
    1488,  1489,  1497,  1510,  1515,  1522,  1523,  1524,  1525,  1526,
    1527,  1529,  1530,  1531,  1532,  1533,  1534,  1535,  1538,  1539,
    1540,  1541,  1542,  1543,  1544,  1545,  1547,  1548,  1549,  1551,
    1554,  1555,  1556,  1558,  1560,  1561,  1562,  1566,  1570,  1571,
    1572,  1576,  1577,  1578,  1579,  1580,  1584,  1585,  1589,  1590,
    1594,  1595,  1596,  1600,  1601,  1605,  1609,  1610,  1611,  1612,
    1613,  1614,  1615,  1616,  1617,  1618,  1619,  1620,  1621,  1622,
    1623,  1627,  1628,  1629,  1633,  1634,  1635,  1636,  1637,  1638,
    1639,  1640,  1644,  1645,  1646,  1647,  1651,  1652,  1656,  1657,
    1658,  1659,  1660,  1661,  1665,  1666,  1667,  1668,  1672,  1676,
    1677,  1681,  1682,  1683,  1687,  1688,  1689,  1693,  1694,  1695,
    1696,  1700,  1701,  1702,  1706,  1707
};
#endif

#define YYPACT_NINF (-500)
#define YYTABLE_NINF (-384)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      95,   235,     1,    22,    33,    36,    41,    44,    54,    55,
     849,  -500,   114,   173,  -500,    57,  -500,  -500,  -500,  -500,
     258,  -500,  -500,    15,  -500,    20,  -500,    45,  -500,    47,
    -500,    48,  -500,    49,    83,    87,  -500,  -500,  -500,   -49,
     248,  -500,   315,   133,    99,  -500,   136,  -500,   154,  -500,
     161,  -500,   215,  -500,   223,  -500,  -500,  -500,  -500,  -500,
    -500,  -500,  -500,  -500,   232,  -500,   236,  -500,  -500,  -500,
    -500,  -500,  -500,  -500,  -500,  -500,   156,   284,  -500,  -500,
     849,   849,   589,   406,   849,   849,  -500,  1001,  -500,  -500,
    -500,  -500,   251,  -500,   250,  -500,  -500,  -500,  -500,  -500,
    -500,   372,   299,   273,  -500,  -500,   -16,   263,   270,  -500,
     279,  -500,   283,  -500,   286,  -500,   288,  -500,   296,  -500,
     298,  -500,  -500,   -16,   235,  -500,  -500,  -500,  -500,   333,
    -500,   311,  -500,   400,  -500,   400,  -500,   400,  -500,   400,
    -500,   422,  -500,   422,   322,   322,   358,   849,   406,  -500,
     364,   933,  -500,  1033,   269,  -500,  -500,   395,   407,  -500,
    -500,  -500,   284,   411,  -500,   447,   373,   365,  -500,   412,
     372,   299,   364,   364,   849,   849,   849,   849,   849,   849,
     849,   849,   849,   849,   849,   849,   849,   849,   849,   849,
     849,   849,   849,   849,   849,   849,   849,   340,   849,   292,
     440,   444,  -500,   450,  -500,  -500,   413,   417,  -500,   262,
    -500,  -500,  -500,   272,  -500,   272,  -500,   144,  -500,   192,
    -500,   192,  -500,   144,   418,   424,  -500,   414,  -500,   101,
     248,  -500,   425,     1,     1,  -500,  -500,  -500,  -500,     1,
    -500,  -500,   415,   208,   234,   -31,   894,   431,  -500,  -500,
     654,   407,   284,   411,   372,  -500,   406,   849,   844,   844,
     536,   536,   578,  1129,  1065,  1097,   387,   387,   969,   536,
     536,   318,   399,   643,   708,   420,   420,    25,    25,    25,
      25,  -500,  -500,   430,   426,  -500,  -500,  -500,  -500,  -500,
     432,   270,   -16,  -500,  -500,  -500,   453,  -500,   247,  -500,
    -500,   130,   436,  -500,   205,  -500,  -500,  -500,   270,  -500,
     539,   270,  -500,   441,  -500,   149,  -500,   439,   443,   522,
     522,   522,   522,  -500,   -16,   -16,   -16,  -500,   464,   544,
     464,   465,  -500,  -500,   466,   322,  -500,  -500,   512,   406,
    -500,  -500,  -500,  1033,  -500,  1033,   849,  -500,   849,  -500,
     475,  -500,  -500,   516,   515,   540,   477,  -500,  -500,   183,
    -500,  -500,  -500,  -500,  -500,  -500,   521,   476,   206,  -500,
    -500,   131,   130,  -500,  -500,   501,   485,  -500,   566,   566,
     487,  -500,  -500,   262,   414,     1,     1,     1,   157,   489,
    1033,  -500,   254,  -500,  -500,   529,  -500,  -500,   394,  -500,
     394,  -500,   482,   494,   488,   490,   496,  -500,  -500,   518,
     571,  -500,   571,  -500,   465,  -500,  -500,   538,   406,  -500,
    -500,  -500,   500,  -500,   270,  -500,   504,  -500,  -500,  -500,
     294,  -500,   523,   582,  -500,   582,   507,   510,   849,   534,
    -500,  -500,  -500,  -500,   531,  -500,   294,  -500,  -500,   590,
      71,  -500,     8,   555,  -500,   556,   406,  -500,   557,  -500,
     719,  -500,  -500,   270,   553,   599,   601,   602,   603,   614,
     615,  -500,  -500,  -500,   569,  -500,   572,  -500,   580,  -500,
     581,  -500,   583,  -500,   585,  -500,    71,  -500,   618,   606,
    -500,  -500,  -500,   592,  -500,  -500,   593,   621,   784,  -500,
    -500,   610,  -500,   618,  -500,   143,   639,  -500,    21,  -500,
    -500,  -500,  -500,   849,  -500,  -500,  -500,  -500,   -18,    21,
     849,   663,    77,  -500,    21,  -500,  -500,   617,   619,  -500,
    -500,   392,   362,   626,  -500,  -500,   144,   498,    -7,   706,
    -500,  -500,   620,   668,    13,  -500,  -500,  -500,   392,   630,
     671,   679,   680,   681,   522,   641,  -500,   659,  -500,  -500,
       1,   849,  -500,  -500,  -500,   285,  -500,  -500,   -45,  -500,
     653,  -500,   714,   647,   -18,  -500,   715,  -500,   716,   648,
    -500,   685,   849,  -500,    -7,   722,    61,  -500,    53,  -500,
     720,   727,  -500,   464,   768,   727,   727,    98,   689,   687,
    -500,   849,   689,  -500,  -500,   648,  -500,    80,  -500,   272,
       1,  -500,  -500,  -500,  -500,  -500,  -500,   707,  -500,  -500,
     102,   690,   464,  -500,  -500,  -500,  -500
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    18,     0,     0,     3,     4,     7,     8,     9,    10,
     118,    11,    12,     0,    13,     0,    14,     0,    15,     0,
      16,     0,    17,     0,     0,   143,    40,    42,    41,     0,
      36,    33,     0,     0,     0,    79,     0,    75,     0,    83,
       0,    55,     0,    87,     0,    67,   347,   346,   348,   345,
     349,   350,   354,   355,     0,   358,     0,   359,   351,   369,
     370,   383,   382,   374,   375,   376,   352,   371,   381,   368,
       0,     0,     0,   322,     0,     0,     2,   274,   276,   279,
     278,   275,     0,   357,   341,   342,   343,   364,   365,   366,
     367,   373,   372,   145,     1,     6,    48,     0,   117,   120,
       0,    53,     0,    65,     0,    73,     0,    77,     0,    81,
       0,    85,    52,   155,     0,    34,    37,    39,    38,     0,
      31,    45,    24,    57,    22,    57,    26,    57,    30,    57,
      28,    70,    20,    70,     0,     0,     0,     0,   322,   379,
     287,     0,   308,   319,     0,   337,   338,   334,   335,   340,
     339,   327,   328,   329,   326,     0,     0,   320,   324,     0,
     330,     0,   299,   303,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   317,     0,
       0,     0,   380,     0,   159,   158,     0,    47,    50,    51,
      43,   119,    29,   112,    19,   112,    21,   112,    23,   112,
      25,   112,    27,   112,     0,   147,   149,   151,   153,   154,
      35,    32,     0,     0,     0,    80,    76,    84,    56,     0,
      88,    68,   352,     0,     0,     0,     0,     0,   280,   309,
       0,   336,   331,   332,   333,   311,   321,     0,   288,   289,
     291,   293,   294,   296,   297,   298,   304,   305,     0,   292,
     290,   295,   301,   302,   300,   281,   282,   283,   284,   285,
     286,   344,   277,     0,   316,   360,   361,   356,   377,   378,
       0,   118,     0,   157,   156,   132,     0,   111,   130,   129,
     134,     0,     0,    89,   112,    95,    96,    98,   118,    99,
       0,   118,   121,     0,   125,   126,    97,     0,     0,   161,
     161,   161,   161,   144,   155,   155,   155,    46,    61,    58,
      64,    59,    63,    72,    69,     0,   363,   362,     0,   322,
     353,   312,   310,   318,   323,   325,     0,   307,     0,   146,
       0,    49,    90,     0,     0,   138,     0,    54,    94,     0,
     105,   106,   107,   108,   109,   110,     0,     0,     0,   135,
     137,     0,     0,   142,    66,     0,     0,   160,   180,   180,
       0,   148,   152,   154,   150,     0,     0,     0,     0,     0,
     306,    44,   112,   131,   140,   141,   133,   100,     0,   102,
       0,   123,   130,   122,     0,     0,     0,   162,    74,     0,
     196,   179,   196,    86,    60,    62,    71,     0,   322,   313,
      91,   139,   115,   116,   118,   113,     0,   128,   127,   136,
     165,   181,     0,   216,   195,   216,     0,     0,     0,     0,
     104,   176,   177,   178,   173,   163,   164,   167,   168,     0,
     184,   197,     0,     0,   215,     0,   322,   314,     0,   101,
       0,   175,   166,   118,   170,     0,     0,     0,     0,     0,
       0,   194,   187,   188,     0,   189,     0,   190,     0,   191,
       0,   192,     0,   193,     0,   182,   183,   186,   200,     0,
     219,    78,    82,     0,   114,   174,     0,     0,     0,   172,
     185,   208,   198,   199,   202,     0,     0,   217,   222,   315,
     273,   169,   171,     0,   209,   201,   203,   204,     0,   222,
       0,     0,   263,   220,   221,   224,   225,     0,   229,   232,
     233,   230,     0,     0,   243,   234,   112,     0,   214,     0,
     218,   272,     0,     0,   249,   244,   223,   227,     0,     0,
     270,   270,   270,     0,   161,     0,   210,     0,   206,   213,
       0,     0,   262,   251,   250,   230,   231,   226,   263,   236,
       0,   253,     0,   264,   267,   238,     0,   240,     0,   263,
     242,     0,     0,   211,   214,     0,   230,   271,   259,   255,
       0,     0,   265,   268,     0,     0,     0,   246,   385,     0,
     207,     0,   385,   261,   260,   263,   252,   263,   237,   112,
       0,   239,   241,   248,   247,   384,   205,     0,   235,   228,
     256,     0,   269,   212,   258,   257,   266
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -500,  -500,  -500,  -500,   771,  -500,    -2,  -500,  -500,   664,
    -266,  -500,  -500,  -500,   495,  -500,  -261,  -500,  -260,  -500,
     239,  -224,   404,   416,  -251,  -500,  -233,  -500,   655,  -500,
    -226,  -500,  -217,  -500,  -213,  -500,  -208,  -500,  -189,  -500,
    -183,  -500,  -175,  -500,  -168,  -500,  -212,  -500,   398,  -500,
     493,  -500,  -500,  -500,  -500,  -500,  -500,   401,  -272,  -500,
    -500,  -500,  -500,   442,  -500,   105,  -500,     2,  -500,  -500,
    -500,   491,   473,   486,  -113,  -308,  -500,  -500,  -500,  -500,
     366,  -500,  -500,  -500,   434,  -500,  -500,  -500,  -500,   330,
     410,  -500,  -500,  -500,  -500,   335,  -500,  -500,  -500,   268,
     259,   409,  -500,  -500,  -500,   326,   281,  -499,  -500,  -500,
     316,  -500,   300,  -500,  -500,  -500,  -500,  -500,  -500,  -312,
    -500,  -500,  -500,  -496,  -127,  -500,  -500,  -500,  -468,  -426,
      -9,   -52,   652,  -500,  -500,  -500,   656,  -144,  -500,   594,
    -500,  -500,  -500,  -179,   356,  -500,  -500,  -500,  -500,  -500,
    -500,   -75,   -77,   249
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    13,    14,    15,    16,    17,   328,    18,    39,    40,
      19,    20,   206,   207,   208,    21,    22,   213,    23,   139,
     235,   329,   331,   332,    24,   215,    25,   143,   240,   334,
      26,   217,    27,   135,    28,   219,    29,   133,    30,   221,
      31,   137,    32,   223,    33,   141,   302,   392,   303,   304,
     305,   306,   307,   308,   309,   366,   310,   424,   107,   108,
     311,   312,   313,   314,   315,   356,   316,   317,    35,   224,
     225,   226,   227,   228,   209,   376,   377,   430,   445,   446,
     447,   463,   448,   449,   410,   411,   450,   485,   486,   487,
     433,   434,   488,   502,   503,   504,   536,   505,   506,   539,
     558,   453,   454,   519,   508,   523,   524,   525,   526,   565,
     527,   528,   529,   530,   531,   532,   533,   580,   534,   569,
     570,   606,   571,   588,   572,   609,   573,   574,   535,   589,
     496,    87,    88,    89,    90,   283,   154,   166,   167,   168,
     169,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   616
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,    86,    34,   318,   247,   319,   171,   320,   170,   321,
     229,   322,   378,   379,   380,   333,   110,    34,   461,   350,
     287,   112,   109,   520,   201,   546,   544,   489,   150,   151,
     153,   587,   172,   173,    44,    41,   359,    46,   499,   367,
     338,   204,    48,   124,   125,    50,   114,  -254,   116,   118,
     120,   520,   521,   513,    41,    52,    54,   205,   543,   537,
       1,     2,     3,     4,     5,     6,     7,     8,     9,   339,
     559,   171,   563,   170,   522,   514,     3,   465,   466,   467,
     468,   469,   470,   597,   490,   129,    45,   546,   171,    47,
     254,   520,   521,   201,    49,   246,   545,    51,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    53,    55,   620,
     211,   513,   603,   196,   522,   111,   559,   197,   564,    43,
     113,  -230,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   115,   153,   117,   119,   121,
      11,   513,   439,   295,    12,   602,   287,   613,   293,   296,
     -93,   624,   604,   416,   471,   354,   354,    10,   103,  -245,
     297,   614,  -254,   104,   294,   513,   122,   201,   513,   171,
     543,   170,   123,   543,   472,   355,   355,   131,    11,   473,
     474,   497,    12,   132,   625,   389,   513,   298,   343,   475,
     513,   295,   369,   326,   299,   345,   -93,   296,   -93,   -93,
     -93,   229,   383,   383,   295,   295,   404,   476,   297,   -92,
     472,   -92,   -92,   -92,   477,   473,   474,   146,   417,   300,
     134,   297,   330,   478,   370,   475,   516,   479,   -93,   575,
     577,    12,   480,   517,   301,   298,   581,   371,   136,   372,
     401,  -344,   299,   476,   147,   138,   148,   418,   298,   402,
     477,   481,   171,   295,   170,   299,   299,   482,   -93,   478,
     -93,   -93,   -93,   479,   437,   483,   397,   300,   480,   608,
     297,   295,   484,   611,   612,   398,   -93,   296,    36,    12,
     300,   300,   301,   109,   390,    37,   343,   481,   297,   -92,
     335,   126,    12,   482,   336,   301,   301,   298,   127,   140,
     109,   483,   493,   109,   299,   520,   521,   142,   484,   293,
      38,   441,   442,   443,   554,   298,   335,   144,    62,    63,
     337,   145,   299,   128,   285,   294,   286,   149,   522,   300,
    -103,   171,   199,   170,  -103,   242,   198,   444,   -93,  -103,
     353,    12,   202,   106,   301,    12,   210,   300,    62,    63,
      56,    57,    58,    59,    60,    61,   -93,    12,   249,    12,
     250,   203,   301,   212,   236,   242,   237,   214,   238,   171,
     216,   170,   218,   330,   330,    68,   231,   182,   183,   425,
     220,   425,   222,   281,   550,   551,   552,   621,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   129,   130,   232,
     197,   245,   233,   234,    56,    57,    58,    59,    60,    61,
      71,    72,   520,   521,   576,   578,   109,   200,    78,   458,
      62,    63,   422,   423,   239,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,  -383,    77,
      78,    79,   155,   156,   157,   158,   197,   159,   160,   161,
    -382,   162,   163,   164,  -381,   109,   256,   255,   182,   183,
     191,   192,   193,   194,   195,   196,   405,   406,    80,   197,
     189,   190,   191,   192,   193,   194,   195,   196,   257,    81,
     165,   197,    82,   288,    83,    71,   251,   289,    84,    85,
     243,   244,   252,   253,   290,   193,   194,   195,   196,   291,
     292,   541,   197,   147,   323,   325,   538,   324,    56,    57,
      58,    59,    60,    61,   327,   341,   347,   348,   557,   352,
     357,   349,   373,   368,    62,    63,   555,   374,   375,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,   585,    77,    78,    79,   129,   385,   584,   360,
     361,   362,   363,   364,   365,   388,   386,   387,   391,   393,
     394,   396,   593,   599,   399,   395,   556,   407,   400,   408,
     409,   413,    80,   419,   421,   353,  -124,   427,   432,   428,
     429,   436,   618,    81,   431,   438,    82,   440,    83,   451,
     452,   178,    84,    85,   457,   182,   183,   456,   622,    56,
      57,    58,    59,    60,    61,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,    62,    63,   459,   197,   460,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,   464,    77,    78,    79,   182,   183,   491,
     492,   498,    45,   494,    47,    49,    51,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,    53,    55,   111,
     197,   501,   113,    80,    56,    57,    58,    59,    60,    61,
     115,   117,   507,   119,    81,   121,   509,    82,   152,    83,
      62,    63,   510,    84,    85,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,   513,    77,
      78,    79,   182,   183,   511,   518,   542,   547,   553,   560,
     548,   562,   561,   567,   568,   190,   191,   192,   193,   194,
     195,   196,   568,   568,   579,   197,   582,   583,    80,    56,
      57,    58,    59,    60,    61,   590,   591,   592,   595,    81,
     596,   543,    82,   342,    83,    62,    63,   601,    84,    85,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,   605,    77,    78,    79,   182,   183,   598,
     607,   610,   615,   617,   626,   623,   105,   351,   230,   414,
     420,   191,   192,   193,   194,   195,   196,   358,   241,   384,
     197,   426,   415,    80,    56,    57,    58,    59,    60,    61,
     403,   382,   462,   412,    81,   381,   500,    82,   495,    83,
      62,    63,   435,    84,    85,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,   515,    77,
      78,    79,   594,   600,   455,   540,   586,   549,   566,   282,
     344,   619,     0,     0,   284,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,    56,
      57,    58,    59,    60,    61,     0,     0,     0,     0,    81,
       0,     0,    82,   512,    83,    62,    63,     0,    84,    85,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,     0,    77,    78,    79,   176,   177,   178,
       0,     0,     0,   182,   183,     0,     0,     0,     0,     0,
       0,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,    80,     0,     0,   197,     0,     0,     0,
       0,     0,     0,     0,    81,     0,     0,    82,     0,    83,
       0,     0,     0,    84,    85,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,     0,     0,     0,     0,   184,
       0,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,     0,     0,     0,   197,     0,     0,     0,
       0,     0,     0,   340,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,     0,     0,     0,     0,   184,     0,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,     0,     0,     0,   197,     0,     0,     0,   248,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
       0,     0,     0,     0,   184,   346,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,     0,     0,
       0,   197,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,     0,     0,     0,     0,   184,     0,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
       0,     0,     0,   197,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,     0,     0,     0,     0,   184,     0,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,     0,     0,     0,   197,   174,   175,   176,   177,
     178,   179,     0,   181,   182,   183,     0,     0,     0,     0,
       0,     0,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,     0,     0,     0,   197,   174,   175,
     176,   177,   178,   179,     0,     0,   182,   183,     0,     0,
       0,     0,     0,     0,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,     0,     0,     0,   197,
     174,   175,   176,   177,   178,     0,     0,     0,   182,   183,
       0,     0,     0,     0,     0,     0,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,     0,     0,
       0,   197
};

static const yytype_int16 yycheck[] =
{
       2,    10,     0,   215,   148,   217,    83,   219,    83,   221,
     123,   223,   320,   321,   322,   239,     1,    15,   444,   291,
     199,     1,    20,    30,   101,   524,   522,    19,    80,    81,
      82,    76,    84,    85,     1,    53,   308,     1,   464,   311,
      71,    57,     1,    92,    93,     1,     1,    92,     1,     1,
       1,    30,    31,    98,    53,     1,     1,    73,   103,    77,
       3,     4,     5,     6,     7,     8,     9,    10,    11,   100,
     538,   148,    59,   148,    53,   501,     5,     6,     7,     8,
       9,    10,    11,   579,    76,    92,    53,   586,   165,    53,
     165,    30,    31,   170,    53,   147,   522,    53,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    53,    53,   605,
     108,    98,    59,    88,    53,   100,   584,    92,   544,    97,
     100,   100,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   100,   198,   100,   100,   100,
      93,    98,   424,     9,    97,    94,   335,    59,    57,    15,
      16,    59,   588,   387,    93,    35,    35,    72,    54,    92,
      26,   597,    92,     0,    73,    98,    93,   254,    98,   256,
     103,   256,    95,   103,   450,    55,    55,    54,    93,   450,
     450,   463,    97,    94,   620,   339,    98,    53,   250,   450,
      98,     9,    53,   102,    60,   257,    14,    15,    16,    17,
      18,   324,   325,   326,     9,     9,    85,   450,    26,    14,
     486,    16,    17,    18,   450,   486,   486,    71,    71,    85,
      94,    26,   234,   450,    85,   486,    93,   450,    94,   551,
     552,    97,   450,   100,   100,    53,   554,    98,    94,   100,
      44,    95,    60,   486,    98,    94,   100,   100,    53,    53,
     486,   450,   339,     9,   339,    60,    60,   450,    14,   486,
      16,    17,    18,   486,   418,   450,    93,    85,   486,   591,
      26,     9,   450,   595,   596,   102,    94,    15,    53,    97,
      85,    85,   100,   291,   346,    60,   348,   486,    26,    94,
      92,    53,    97,   486,    96,   100,   100,    53,    60,    94,
     308,   486,   456,   311,    60,    30,    31,    94,   486,    57,
      85,    27,    28,    29,   536,    53,    92,    95,    36,    37,
      96,    95,    60,    85,    42,    73,    44,    53,    53,    85,
      93,   418,    92,   418,    97,    53,    95,    53,    94,   102,
     103,    97,    53,    95,   100,    97,    93,    85,    36,    37,
      20,    21,    22,    23,    24,    25,    94,    97,    99,    97,
     101,    98,   100,    94,   135,    53,   137,    94,   139,   456,
      94,   456,    94,   385,   386,    45,    53,    69,    70,   398,
      94,   400,    94,    53,    32,    33,    34,   609,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    92,    93,    98,
      92,    53,    12,    13,    20,    21,    22,    23,    24,    25,
      48,    49,    30,    31,   551,   552,   424,    55,    56,   438,
      36,    37,    38,    39,    12,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    53,    55,
      56,    57,    46,    47,    48,    49,    92,    51,    52,    53,
      53,    55,    56,    57,    53,   463,   101,    94,    69,    70,
      83,    84,    85,    86,    87,    88,   371,   372,    84,    92,
      81,    82,    83,    84,    85,    86,    87,    88,    76,    95,
      84,    92,    98,    53,   100,    48,    49,    53,   104,   105,
     144,   145,    55,    56,    54,    85,    86,    87,    88,    96,
      93,   520,    92,    98,    96,   101,   518,    93,    20,    21,
      22,    23,    24,    25,    99,    94,    96,   101,   537,    76,
      94,    99,    93,    92,    36,    37,    38,    94,    16,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   561,    55,    56,    57,    92,    13,   560,    20,
      21,    22,    23,    24,    25,    53,   101,   101,    93,    53,
      55,    94,   574,   582,    53,    35,    78,    76,   102,    94,
      14,    94,    84,    94,    55,   103,    92,    99,    17,    99,
      94,    53,   601,    95,    76,    95,    98,    93,   100,    76,
      18,    65,   104,   105,    94,    69,    70,   100,   610,    20,
      21,    22,    23,    24,    25,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    36,    37,    93,    92,    98,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    53,    55,    56,    57,    69,    70,    94,
      94,    98,    53,    96,    53,    53,    53,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    53,    53,   100,
      92,    53,   100,    84,    20,    21,    22,    23,    24,    25,
     100,   100,    76,   100,    95,   100,    94,    98,    99,   100,
      36,    37,    99,   104,   105,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    98,    55,
      56,    57,    69,    70,    93,    76,    53,   100,    92,    13,
     101,    53,   102,    93,    53,    82,    83,    84,    85,    86,
      87,    88,    53,    53,    53,    92,    95,    78,    84,    20,
      21,    22,    23,    24,    25,    92,    32,   100,    33,    95,
      34,   103,    98,    99,   100,    36,    37,    35,   104,   105,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    53,    55,    56,    57,    69,    70,    94,
      53,    13,    93,    96,    94,    78,    15,   292,   124,   385,
     392,    83,    84,    85,    86,    87,    88,   304,   143,   326,
      92,   400,   386,    84,    20,    21,    22,    23,    24,    25,
     368,   325,   446,   379,    95,   324,   486,    98,    99,   100,
      36,    37,   412,   104,   105,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   503,    55,
      56,    57,   574,   584,   435,   519,   565,   531,   548,   197,
     256,   602,    -1,    -1,   198,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    95,
      -1,    -1,    98,    99,   100,    36,    37,    -1,   104,   105,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    56,    57,    63,    64,    65,
      -1,    -1,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    84,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    -1,    -1,    98,    -1,   100,
      -1,    -1,    -1,   104,   105,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    -1,    -1,    -1,    75,
      -1,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    99,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    -1,    -1,    75,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    -1,    -1,    92,    -1,    -1,    -1,    96,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    -1,
      -1,    92,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    -1,    -1,    -1,    -1,    75,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    -1,    -1,    92,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    -1,    -1,    75,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    -1,    -1,    92,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    92,    61,    62,
      63,    64,    65,    66,    -1,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    -1,    -1,    92,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    -1,
      -1,    92
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      72,    93,    97,   107,   108,   109,   110,   111,   113,   116,
     117,   121,   122,   124,   130,   132,   136,   138,   140,   142,
     144,   146,   148,   150,   173,   174,    53,    60,    85,   114,
     115,    53,   112,    97,     1,    53,     1,    53,     1,    53,
       1,    53,     1,    53,     1,    53,    20,    21,    22,    23,
      24,    25,    36,    37,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    55,    56,    57,
      84,    95,    98,   100,   104,   105,   236,   237,   238,   239,
     240,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,    54,     0,   110,    95,   164,   165,   173,
       1,   100,     1,   100,     1,   100,     1,   100,     1,   100,
       1,   100,    93,    95,    92,    93,    53,    60,    85,    92,
      93,    54,    94,   143,    94,   139,    94,   147,    94,   125,
      94,   151,    94,   133,    95,    95,    71,    98,   100,    53,
     237,   237,    99,   237,   242,    46,    47,    48,    49,    51,
      52,    53,    55,    56,    57,    84,   243,   244,   245,   246,
     257,   258,   237,   237,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    75,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    92,    95,    92,
      55,   258,    53,    98,    57,    73,   118,   119,   120,   180,
      93,   173,    94,   123,    94,   131,    94,   137,    94,   141,
      94,   145,    94,   149,   175,   176,   177,   178,   179,   180,
     115,    53,    98,    12,    13,   126,   126,   126,   126,    12,
     134,   134,    53,   250,   250,    53,   237,   243,    96,    99,
     101,    49,    55,    56,   257,    94,   101,    76,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,    53,   238,   241,   242,    42,    44,   249,    53,    53,
      54,    96,    93,    57,    73,     9,    15,    26,    53,    60,
      85,   100,   152,   154,   155,   156,   157,   158,   159,   160,
     162,   166,   167,   168,   169,   170,   172,   173,   152,   152,
     152,   152,   152,    96,    93,   101,   102,    99,   112,   127,
     112,   128,   129,   127,   135,    92,    96,    96,    71,   100,
      99,    94,    99,   237,   245,   237,    76,    96,   101,    99,
     164,   120,    76,   103,    35,    55,   171,    94,   156,   164,
      20,    21,    22,    23,    24,    25,   161,   164,    92,    53,
      85,    98,   100,    93,    94,    16,   181,   182,   181,   181,
     181,   177,   179,   180,   178,    13,   101,   101,    53,   243,
     237,    93,   153,    53,    55,    35,    94,    93,   102,    53,
     102,    44,    53,   169,    85,   171,   171,    76,    94,    14,
     190,   191,   190,    94,   128,   129,   127,    71,   100,    94,
     154,    55,    38,    39,   163,   236,   163,    99,    99,    94,
     183,    76,    17,   196,   197,   196,    53,   243,    95,   164,
      93,    27,    28,    29,    53,   184,   185,   186,   188,   189,
     192,    76,    18,   207,   208,   207,   100,    94,   236,    93,
      98,   235,   186,   187,    53,     6,     7,     8,     9,    10,
      11,    93,   116,   122,   124,   130,   132,   136,   138,   140,
     142,   144,   146,   148,   150,   193,   194,   195,   198,    19,
      76,    94,    94,   243,    96,    99,   236,   164,    98,   235,
     195,    53,   199,   200,   201,   203,   204,    76,   210,    94,
      99,    93,    99,    98,   235,   201,    93,   100,    76,   209,
      30,    31,    53,   211,   212,   213,   214,   216,   217,   218,
     219,   220,   221,   222,   224,   234,   202,    77,   112,   205,
     211,   236,    53,   103,   229,   235,   213,   100,   101,   216,
      32,    33,    34,    92,   152,    38,    78,   236,   206,   234,
      13,   102,    53,    59,   235,   215,   218,    93,    53,   225,
     226,   228,   230,   232,   233,   225,   230,   225,   230,    53,
     223,   181,    95,    78,   112,   236,   212,    76,   229,   235,
      92,    32,   100,   112,   205,    33,    34,   229,    94,   236,
     206,    35,    94,    59,   235,    53,   227,    53,   225,   231,
      13,   225,   225,    59,   235,    93,   259,    96,   236,   259,
     229,   152,   112,    78,    59,   235,    94
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   106,   107,   107,   108,   108,   109,   109,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   111,   112,   112,   113,   114,   114,   115,   115,   115,
     115,   115,   115,   116,   116,   117,   117,   118,   118,   119,
     119,   120,   121,   123,   122,   125,   124,   126,   126,   126,
     126,   127,   128,   128,   129,   131,   130,   133,   132,   134,
     134,   135,   135,   137,   136,   139,   138,   141,   140,   143,
     142,   145,   144,   147,   146,   149,   148,   151,   150,   152,
     153,   152,   154,   154,   155,   155,   156,   156,   157,   157,
     158,   158,   159,   159,   160,   161,   161,   161,   161,   161,
     161,   162,   162,   163,   163,   163,   163,   164,   164,   165,
     165,   166,   167,   167,   168,   168,   169,   169,   169,   169,
     170,   170,   170,   170,   170,   170,   170,   170,   171,   171,
     171,   171,   172,   173,   173,   174,   174,   175,   176,   176,
     177,   177,   178,   178,   179,   179,   180,   180,   180,   180,
     181,   181,   183,   182,   184,   184,   185,   185,   187,   186,
     188,   188,   188,   188,   188,   188,   189,   189,   189,   190,
     190,   192,   191,   193,   193,   194,   194,   195,   195,   195,
     195,   195,   195,   195,   195,   196,   196,   198,   197,   199,
     199,   200,   200,   201,   202,   201,   203,   203,   204,   204,
     205,   205,   205,   206,   206,   207,   207,   209,   208,   210,
     208,   211,   211,   212,   212,   213,   213,   215,   214,   216,
     216,   217,   217,   218,   218,   219,   220,   220,   220,   220,
     220,   220,   221,   221,   222,   222,   223,   223,   223,   224,
     224,   224,   225,   225,   226,   226,   227,   227,   227,   228,
     228,   228,   229,   229,   230,   231,   230,   232,   232,   232,
     233,   233,   234,   235,   236,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   238,   239,   239,
     239,   240,   240,   240,   240,   240,   241,   241,   242,   242,
     243,   243,   243,   244,   244,   245,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   247,   247,   247,   248,   248,   248,   248,   248,   248,
     248,   248,   249,   249,   249,   249,   250,   250,   251,   251,
     251,   251,   251,   251,   252,   252,   252,   252,   253,   254,
     254,   255,   255,   255,   256,   256,   256,   257,   257,   257,
     257,   258,   258,   258,   259,   259
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     1,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     3,     1,     2,     2,     2,
       1,     1,     1,     3,     6,     3,     5,     1,     0,     3,
       1,     1,     2,     0,     5,     0,     4,     0,     2,     2,
       4,     1,     3,     1,     1,     0,     5,     0,     4,     2,
       0,     3,     1,     0,     6,     0,     4,     0,     9,     0,
       4,     0,     9,     0,     4,     0,     6,     0,     4,     1,
       0,     4,     1,     0,     2,     1,     1,     1,     1,     1,
       3,     6,     3,     1,     5,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     4,     1,     1,     1,     0,     2,
       1,     1,     3,     3,     3,     1,     1,     4,     4,     1,
       1,     3,     1,     3,     1,     2,     4,     2,     1,     3,
       2,     2,     2,     1,     4,     2,     5,     1,     3,     1,
       3,     1,     3,     1,     1,     0,     2,     2,     1,     1,
       1,     0,     0,     4,     1,     0,     2,     1,     0,     4,
       2,     4,     3,     1,     3,     2,     1,     1,     1,     1,
       0,     0,     4,     1,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     0,     4,     1,
       0,     2,     1,     2,     0,     7,     4,     6,     1,     2,
       2,     3,     6,     1,     0,     1,     0,     0,     5,     0,
       4,     1,     0,     2,     1,     1,     3,     0,     6,     1,
       0,     3,     1,     1,     1,     6,     3,     5,     3,     5,
       3,     5,     3,     1,     2,     1,     2,     3,     3,     2,
       3,     3,     3,     1,     1,     2,     2,     3,     3,     2,
       3,     3,     2,     0,     1,     0,     5,     1,     2,     4,
       0,     2,     2,     3,     1,     1,     1,     3,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     3,     3,     2,     3,     3,     5,     4,     2,     3,
       4,     3,     4,     6,     8,    10,     1,     0,     3,     1,
       1,     2,     0,     3,     1,     3,     1,     1,     1,     1,
       1,     2,     2,     2,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     1,     3,     1,     1,     1,
       3,     3,     4,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     2,
       2,     1,     1,     1,     1,     0
};


/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const yytype_int8 yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const yytype_int8 yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0
};

/* YYIMMEDIATE[RULE-NUM] -- True iff rule #RULE-NUM is not to be deferred, as
   in the case of predicates.  */
static const yybool yyimmediate[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const yytype_int8 yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     0,     0,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,     0,     0,     0,     0,     0,
       0,     0,    11,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short yyconfl[] =
{
       0,   352,     0,   274,     0,   341,     0,   263,     0,   270,
       0,   270,     0,   270,     0,   263,     0,   263,     0
};


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

# define YYRHSLOC(Rhs, K) ((Rhs)[K].yystate.yyloc)



#undef yynerrs
#define yynerrs (yystackp->yyerrcnt)
#undef yychar
#define yychar (yystackp->yyrawchar)
#undef yylval
#define yylval (yystackp->yyval)
#undef yylloc
#define yylloc (yystackp->yyloc)
#define ned2yynerrs yynerrs
#define ned2yychar yychar
#define ned2yylval yylval
#define ned2yylloc yylloc

enum { YYENOMEM = -2 };

typedef enum { yyok, yyaccept, yyabort, yyerr, yynomem } YYRESULTTAG;

#define YYCHK(YYE)                              \
  do {                                          \
    YYRESULTTAG yychk_flag = YYE;               \
    if (yychk_flag != yyok)                     \
      return yychk_flag;                        \
  } while (0)

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
#  define YYSTACKEXPANDABLE 1
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyexpandGLRStack (Yystack);                       \
  } while (0)
#else
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyMemoryExhausted (Yystack);                      \
  } while (0)
#endif

/** State numbers. */
typedef int yy_state_t;

/** Rule numbers. */
typedef int yyRuleNum;

/** Item references. */
typedef short yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState
{
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yyval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yy_state_t yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the last token produced by my symbol */
  YYPTRDIFF_T yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  nonterminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yyval;
  } yysemantics;
  /** Source location for this state.  */
  YYLTYPE yyloc;
};

struct yyGLRStateSet
{
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  YYPTRDIFF_T yysize;
  YYPTRDIFF_T yycapacity;
};

struct yySemanticOption
{
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  YYLTYPE yyloc;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;
  /* To compute the location of the error token.  */
  yyGLRStackItem yyerror_range[3];

  int yyerrcnt;
  int yyrawchar;
  YYSTYPE yyval;
  YYLTYPE yyloc;

  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  YYPTRDIFF_T yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

_Noreturn static void
yyFail (yyGLRStack* yystackp, YYLTYPE *yylocp, yyscan_t scanner, omnetpp::nedxml::ParseContext *np, const char* yymsg)
{
  if (yymsg != YY_NULLPTR)
    yyerror (yylocp, scanner, np, yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

_Noreturn static void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

/** Accessing symbol of state YYSTATE.  */
static inline yysymbol_kind_t
yy_accessing_symbol (yy_state_t yystate)
{
  return YY_CAST (yysymbol_kind_t, yystos[yystate]);
}

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IMPORT", "PACKAGE",
  "PROPERTY", "MODULE", "SIMPLE", "NETWORK", "CHANNEL", "MODULEINTERFACE",
  "CHANNELINTERFACE", "EXTENDS", "LIKE", "TYPES", "PARAMETERS", "GATES",
  "SUBMODULES", "CONNECTIONS", "ALLOWUNCONNECTED", "DOUBLE_", "INT_",
  "STRING_", "BOOL_", "OBJECT_", "XML_", "VOLATILE_", "INPUT_", "OUTPUT_",
  "INOUT_", "IF", "FOR", "RIGHTARROW", "LEFTARROW", "DBLARROW", "TO",
  "THIS_", "PARENT", "DEFAULT", "ASK", "CONST_", "SIZEOF", "INDEX_",
  "EXISTS", "TYPENAME", "XMLDOC", "TRUE_", "FALSE_", "NAN_", "INF_",
  "UNDEFINED_", "NULLPTR_", "NULL_", "NAME", "PROPNAME", "INTCONSTANT",
  "REALCONSTANT", "STRINGCONSTANT", "CHARCONSTANT", "PLUSPLUS",
  "DOUBLEASTERISK", "EQ", "NE", "GE", "LE", "SPACESHIP", "AND", "OR",
  "XOR", "SHIFT_LEFT", "SHIFT_RIGHT", "DOUBLECOLON", "EXPRESSION_SELECTOR",
  "COMMONCHAR", "INVALID_CHAR", "'?'", "':'", "'<'", "'>'", "MATCH", "'|'",
  "'#'", "'&'", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "UMIN_", "NEG_",
  "NOT_", "'.'", "';'", "'}'", "'('", "')'", "'@'", "'['", "']'", "'{'",
  "','", "'='", "'$'", "'!'", "'~'", "$accept", "startsymbol", "nedfile",
  "definitions", "definition", "packagedeclaration", "dottedname",
  "import", "importspec", "importname", "propertydecl",
  "propertydecl_header", "opt_propertydecl_keys", "propertydecl_keys",
  "propertydecl_key", "fileproperty", "channeldefinition", "$@1",
  "channelheader", "$@2", "opt_inheritance", "extendsname", "likenames",
  "likename", "channelinterfacedefinition", "$@3",
  "channelinterfaceheader", "$@4", "opt_interfaceinheritance",
  "extendsnames", "simplemoduledefinition", "$@5", "simplemoduleheader",
  "$@6", "compoundmoduledefinition", "$@7", "compoundmoduleheader", "$@8",
  "networkdefinition", "$@9", "networkheader", "$@10",
  "moduleinterfacedefinition", "$@11", "moduleinterfaceheader", "$@12",
  "opt_paramblock", "$@13", "opt_params", "params", "paramsitem", "param",
  "param_typenamevalue", "param_typename", "parampattern_value",
  "paramtype", "opt_volatile", "paramvalue", "opt_inline_properties",
  "inline_properties", "parampattern", "pattern", "pattern2",
  "pattern_elem", "pattern_name", "pattern_index", "property",
  "property_namevalue", "property_name", "opt_property_keys",
  "property_keys", "property_key", "property_values", "property_value",
  "property_literal", "opt_gateblock", "gateblock", "$@14", "opt_gates",
  "gates", "gate", "$@15", "gate_typenamesize", "gatetype",
  "opt_typeblock", "typeblock", "$@16", "opt_localtypes", "localtypes",
  "localtype", "opt_submodblock", "submodblock", "$@17", "opt_submodules",
  "submodules", "submodule", "$@18", "submoduleheader", "submodulename",
  "likeexpr", "opt_condition", "opt_connblock", "connblock", "$@19",
  "$@20", "opt_connections", "connections", "connectionsitem",
  "connectiongroup", "$@21", "opt_loops_and_conditions",
  "loops_and_conditions", "loop_or_condition", "loop", "connection",
  "leftgatespec", "leftmod", "leftgate", "parentleftgate", "rightgatespec",
  "rightmod", "rightgate", "parentrightgate", "opt_subgate", "channelspec",
  "$@22", "channelspec_header", "opt_channelname", "condition", "vector",
  "expression", "expr", "functioncall", "array", "object", "opt_exprlist",
  "exprlist", "opt_keyvaluelist", "keyvaluelist", "keyvalue", "key",
  "simple_expr", "funcname", "qname_elem", "qname", "operator", "literal",
  "stringliteral", "boolliteral", "numliteral", "otherliteral", "quantity",
  "realconstant_ext", "opt_semicolon", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

/** Left-hand-side symbol for rule #YYRULE.  */
static inline yysymbol_kind_t
yylhsNonterm (yyRuleNum yyrule)
{
  return YY_CAST (yysymbol_kind_t, yyr1[yyrule]);
}

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

# define YY_FPRINTF                             \
  YY_IGNORE_USELESS_CAST_BEGIN YY_FPRINTF_

# define YY_FPRINTF_(Args)                      \
  do {                                          \
    YYFPRINTF Args;                             \
    YY_IGNORE_USELESS_CAST_END                  \
  } while (0)

# define YY_DPRINTF                             \
  YY_IGNORE_USELESS_CAST_BEGIN YY_DPRINTF_

# define YY_DPRINTF_(Args)                      \
  do {                                          \
    if (yydebug)                                \
      YYFPRINTF Args;                           \
    YY_IGNORE_USELESS_CAST_END                  \
  } while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */



/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, omnetpp::nedxml::ParseContext *np)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (np);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, omnetpp::nedxml::ParseContext *np)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, scanner, np);
  YYFPRINTF (yyo, ")");
}

# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                  \
  do {                                                                  \
    if (yydebug)                                                        \
      {                                                                 \
        YY_FPRINTF ((stderr, "%s ", Title));                            \
        yy_symbol_print (stderr, Kind, Value, Location, scanner, np);        \
        YY_FPRINTF ((stderr, "\n"));                                    \
      }                                                                 \
  } while (0)

static inline void
yy_reduce_print (yybool yynormal, yyGLRStackItem* yyvsp, YYPTRDIFF_T yyk,
                 yyRuleNum yyrule, yyscan_t scanner, omnetpp::nedxml::ParseContext *np);

# define YY_REDUCE_PRINT(Args)          \
  do {                                  \
    if (yydebug)                        \
      yy_reduce_print Args;             \
  } while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

static void yypstack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
  YY_ATTRIBUTE_UNUSED;
static void yypdumpstack (yyGLRStack* yystackp)
  YY_ATTRIBUTE_UNUSED;

#else /* !YYDEBUG */

# define YY_DPRINTF(Args) do {} while (yyfalse)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_REDUCE_PRINT(Args)

#endif /* !YYDEBUG */



/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) YY_ATTRIBUTE_UNUSED;
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  int i;
  yyGLRState *s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
#if YYDEBUG
      yyvsp[i].yystate.yylrState = s->yylrState;
#endif
      yyvsp[i].yystate.yyresolved = s->yyresolved;
      if (s->yyresolved)
        yyvsp[i].yystate.yysemantics.yyval = s->yysemantics.yyval;
      else
        /* The effect of using yyval or yyloc (in an immediate rule) is
         * undefined.  */
        yyvsp[i].yystate.yysemantics.yyfirstVal = YY_NULLPTR;
      yyvsp[i].yystate.yyloc = s->yyloc;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}


/** If yychar is empty, fetch the next token.  */
static inline yysymbol_kind_t
yygetToken (int *yycharp, yyGLRStack* yystackp, yyscan_t scanner, omnetpp::nedxml::ParseContext *np)
{
  yysymbol_kind_t yytoken;
  YY_USE (scanner);
  YY_USE (np);
  if (*yycharp == YYEMPTY)
    {
      YY_DPRINTF ((stderr, "Reading a token\n"));
      *yycharp = yylex (&yylval, &yylloc, scanner);
    }
  if (*yycharp <= YYEOF)
    {
      *yycharp = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YY_DPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (*yycharp);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }
  return yytoken;
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     YY_ATTRIBUTE_UNUSED;
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT, yynomem for YYNOMEM.  */
static YYRESULTTAG
yyuserAction (yyRuleNum yyrule, int yyrhslen, yyGLRStackItem* yyvsp,
              yyGLRStack* yystackp, YYPTRDIFF_T yyk,
              YYSTYPE* yyvalp, YYLTYPE *yylocp, yyscan_t scanner, omnetpp::nedxml::ParseContext *np)
{
  const yybool yynormal YY_ATTRIBUTE_UNUSED = yystackp->yysplitPoint == YY_NULLPTR;
  int yylow = 1;
  YY_USE (yyvalp);
  YY_USE (yylocp);
  YY_USE (scanner);
  YY_USE (np);
  YY_USE (yyk);
  YY_USE (yyrhslen);
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYNOMEM
# define YYNOMEM return yynomem
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, (N), yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)                                              \
  return yyerror (yylocp, scanner, np, YY_("syntax error: cannot back up")),     \
         yyerrok, yyerr

  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yyval;
  /* Default location. */
  YYLLOC_DEFAULT ((*yylocp), (yyvsp - yyrhslen), yyrhslen);
  yystackp->yyerror_range[1].yystate.yyloc = *yylocp;
  /* If yyk == -1, we are running a deferred action on a temporary
     stack.  In that case, YY_REDUCE_PRINT must not play with YYFILL,
     so pretend the stack is "normal". */
  YY_REDUCE_PRINT ((yynormal || yyk == -1, yyvsp, yyk, yyrule, scanner, np));
  switch (yyrule)
    {
  case 19: /* definition: channelinterfaceheader error '}'  */
#line 243 "ned2.y"
                { storePos(np,  ps.component, (*yylocp)); restoreGlobalParserState(); }
#line 2291 "ned2.tab.cc"
    break;

  case 20: /* definition: CHANNELINTERFACE error '}'  */
#line 245 "ned2.y"
                { restoreGlobalParserState(); }
#line 2297 "ned2.tab.cc"
    break;

  case 21: /* definition: simplemoduleheader error '}'  */
#line 247 "ned2.y"
                { storePos(np,  ps.component, (*yylocp)); restoreGlobalParserState(); }
#line 2303 "ned2.tab.cc"
    break;

  case 22: /* definition: SIMPLE error '}'  */
#line 249 "ned2.y"
                { restoreGlobalParserState(); }
#line 2309 "ned2.tab.cc"
    break;

  case 23: /* definition: compoundmoduleheader error '}'  */
#line 251 "ned2.y"
                { storePos(np,  ps.component, (*yylocp)); restoreGlobalParserState(); }
#line 2315 "ned2.tab.cc"
    break;

  case 24: /* definition: MODULE error '}'  */
#line 253 "ned2.y"
                { restoreGlobalParserState(); }
#line 2321 "ned2.tab.cc"
    break;

  case 25: /* definition: networkheader error '}'  */
#line 255 "ned2.y"
                { storePos(np,  ps.component, (*yylocp)); restoreGlobalParserState(); }
#line 2327 "ned2.tab.cc"
    break;

  case 26: /* definition: NETWORK error '}'  */
#line 257 "ned2.y"
                { restoreGlobalParserState(); }
#line 2333 "ned2.tab.cc"
    break;

  case 27: /* definition: moduleinterfaceheader error '}'  */
#line 259 "ned2.y"
                { storePos(np,  ps.component, (*yylocp)); restoreGlobalParserState(); }
#line 2339 "ned2.tab.cc"
    break;

  case 28: /* definition: MODULEINTERFACE error '}'  */
#line 261 "ned2.y"
                { restoreGlobalParserState(); }
#line 2345 "ned2.tab.cc"
    break;

  case 29: /* definition: channelheader error '}'  */
#line 263 "ned2.y"
                { storePos(np,  ps.component, (*yylocp)); restoreGlobalParserState(); }
#line 2351 "ned2.tab.cc"
    break;

  case 30: /* definition: CHANNEL error '}'  */
#line 265 "ned2.y"
                { restoreGlobalParserState(); }
#line 2357 "ned2.tab.cc"
    break;

  case 31: /* packagedeclaration: PACKAGE dottedname ';'  */
#line 270 "ned2.y"
                {
                  ps.package = (PackageElement *)createNedElementWithTag(np, NED_PACKAGE, ps.nedfile);
                  ps.package->setName(removeSpaces(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)).c_str());
                  storePos(np,  ps.package,(*yylocp));
                  storeBannerAndRightComments(np, ps.package,(*yylocp));
                }
#line 2368 "ned2.tab.cc"
    break;

  case 34: /* import: IMPORT importspec ';'  */
#line 288 "ned2.y"
                {
                  ps.import = (ImportElement *)createNedElementWithTag(np, NED_IMPORT, ps.nedfile);
                  ps.import->setImportSpec(removeSpaces(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)).c_str());
                  storePos(np,  ps.import,(*yylocp));
                  storeBannerAndRightComments(np, ps.import,(*yylocp));
                }
#line 2379 "ned2.tab.cc"
    break;

  case 43: /* propertydecl: propertydecl_header opt_inline_properties ';'  */
#line 315 "ned2.y"
                {
                    storePos(np,  ps.propertydecl, (*yylocp));
                    storeBannerAndRightComments(np, ps.propertydecl,(*yylocp));
                }
#line 2388 "ned2.tab.cc"
    break;

  case 44: /* propertydecl: propertydecl_header '(' opt_propertydecl_keys ')' opt_inline_properties ';'  */
#line 320 "ned2.y"
                {
                    storePos(np,  ps.propertydecl, (*yylocp));
                    storeBannerAndRightComments(np, ps.propertydecl,(*yylocp));
                }
#line 2397 "ned2.tab.cc"
    break;

  case 45: /* propertydecl_header: PROPERTY '@' PROPNAME  */
#line 328 "ned2.y"
                {
                  ps.propertydecl = (PropertyDeclElement *)createNedElementWithTag(np, NED_PROPERTY_DECL, ps.nedfile);
                  ps.propertydecl->setName(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)));
                }
#line 2406 "ned2.tab.cc"
    break;

  case 46: /* propertydecl_header: PROPERTY '@' PROPNAME '[' ']'  */
#line 333 "ned2.y"
                {
                  ps.propertydecl = (PropertyDeclElement *)createNedElementWithTag(np, NED_PROPERTY_DECL, ps.nedfile);
                  ps.propertydecl->setName(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)));
                  ps.propertydecl->setIsArray(true);
                }
#line 2416 "ned2.tab.cc"
    break;

  case 51: /* propertydecl_key: property_literal  */
#line 352 "ned2.y"
                {
                  ps.propkey = (PropertyKeyElement *)createNedElementWithTag(np, NED_PROPERTY_KEY, ps.propertydecl);
                  ps.propkey->setName(opp_trim(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc))).c_str());
                  storePos(np,  ps.propkey, (*yylocp));
                }
#line 2426 "ned2.tab.cc"
    break;

  case 52: /* fileproperty: property_namevalue ';'  */
#line 364 "ned2.y"
                {
                  storePos(np,  ps.property, (*yylocp));
                  storeBannerAndRightComments(np, ps.property,(*yylocp));
                }
#line 2435 "ned2.tab.cc"
    break;

  case 53: /* $@1: %empty  */
#line 375 "ned2.y"
                {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)createNedElementWithTag(np, NED_PARAMETERS, ps.component);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
#line 2447 "ned2.tab.cc"
    break;

  case 54: /* channeldefinition: channelheader '{' $@1 opt_paramblock '}'  */
#line 384 "ned2.y"
                {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(np, ps.component, (*yylocp));
                  storePos(np,  ps.component, (*yylocp));
                  storeTrailingComment(np, ps.component,(*yylocp));
                }
#line 2462 "ned2.tab.cc"
    break;

  case 55: /* $@2: %empty  */
#line 398 "ned2.y"
                {
                  ps.component = (ChannelElement *)createNedElementWithTag(np, NED_CHANNEL, ps.inTypes ? (ASTNode *)ps.types : (ASTNode *)ps.nedfile);
                  ((ChannelElement *)ps.component)->setName(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)));
                }
#line 2471 "ned2.tab.cc"
    break;

  case 56: /* channelheader: CHANNEL NAME $@2 opt_inheritance  */
#line 403 "ned2.y"
                { storeBannerAndRightComments(np, ps.component,(*yylocp)); }
#line 2477 "ned2.tab.cc"
    break;

  case 61: /* extendsname: dottedname  */
#line 415 "ned2.y"
                {
                  ps.extends = (ExtendsElement *)createNedElementWithTag(np, NED_EXTENDS, ps.component);
                  ps.extends->setName(removeSpaces(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)).c_str());
                  storePos(np,  ps.extends, (*yylocp));
                }
#line 2487 "ned2.tab.cc"
    break;

  case 64: /* likename: dottedname  */
#line 429 "ned2.y"
                {
                  ps.interfacename = (InterfaceNameElement *)createNedElementWithTag(np, NED_INTERFACE_NAME, ps.component);
                  ps.interfacename->setName(removeSpaces(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)).c_str());
                  storePos(np, ps.interfacename, (*yylocp));
                }
#line 2497 "ned2.tab.cc"
    break;

  case 65: /* $@3: %empty  */
#line 441 "ned2.y"
                {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)createNedElementWithTag(np, NED_PARAMETERS, ps.component);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
#line 2509 "ned2.tab.cc"
    break;

  case 66: /* channelinterfacedefinition: channelinterfaceheader '{' $@3 opt_paramblock '}'  */
#line 450 "ned2.y"
                {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(np, ps.component, (*yylocp));
                  storePos(np, ps.component, (*yylocp));
                  storeTrailingComment(np, ps.component,(*yylocp));
                }
#line 2524 "ned2.tab.cc"
    break;

  case 67: /* $@4: %empty  */
#line 464 "ned2.y"
                {
                  ps.component = (ChannelInterfaceElement *)createNedElementWithTag(np, NED_CHANNEL_INTERFACE, ps.inTypes ? (ASTNode *)ps.types : (ASTNode *)ps.nedfile);
                  ((ChannelInterfaceElement *)ps.component)->setName(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)));
                }
#line 2533 "ned2.tab.cc"
    break;

  case 68: /* channelinterfaceheader: CHANNELINTERFACE NAME $@4 opt_interfaceinheritance  */
#line 469 "ned2.y"
                { storeBannerAndRightComments(np, ps.component,(*yylocp)); }
#line 2539 "ned2.tab.cc"
    break;

  case 73: /* $@5: %empty  */
#line 487 "ned2.y"
                {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)createNedElementWithTag(np, NED_PARAMETERS, ps.component);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
#line 2551 "ned2.tab.cc"
    break;

  case 74: /* simplemoduledefinition: simplemoduleheader '{' $@5 opt_paramblock opt_gateblock '}'  */
#line 497 "ned2.y"
                {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(np, ps.component, (*yylocp));
                  storePos(np, ps.component, (*yylocp));
                  storeTrailingComment(np, ps.component,(*yylocp));
                }
#line 2566 "ned2.tab.cc"
    break;

  case 75: /* $@6: %empty  */
#line 511 "ned2.y"
                {
                  ps.component = (SimpleModuleElement *)createNedElementWithTag(np, NED_SIMPLE_MODULE, ps.inTypes ? (ASTNode *)ps.types : (ASTNode *)ps.nedfile );
                  ((SimpleModuleElement *)ps.component)->setName(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)));
                }
#line 2575 "ned2.tab.cc"
    break;

  case 76: /* simplemoduleheader: SIMPLE NAME $@6 opt_inheritance  */
#line 516 "ned2.y"
                { storeBannerAndRightComments(np, ps.component,(*yylocp)); }
#line 2581 "ned2.tab.cc"
    break;

  case 77: /* $@7: %empty  */
#line 524 "ned2.y"
                {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)createNedElementWithTag(np, NED_PARAMETERS, ps.component);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
#line 2593 "ned2.tab.cc"
    break;

  case 78: /* compoundmoduledefinition: compoundmoduleheader '{' $@7 opt_paramblock opt_gateblock opt_typeblock opt_submodblock opt_connblock '}'  */
#line 537 "ned2.y"
                {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(np, ps.component, (*yylocp));
                  storePos(np, ps.component, (*yylocp));
                  storeTrailingComment(np, ps.component,(*yylocp));
                }
#line 2608 "ned2.tab.cc"
    break;

  case 79: /* $@8: %empty  */
#line 551 "ned2.y"
                {
                  ps.component = (CompoundModuleElement *)createNedElementWithTag(np, NED_COMPOUND_MODULE, ps.inTypes ? (ASTNode *)ps.types : (ASTNode *)ps.nedfile );
                  ((CompoundModuleElement *)ps.component)->setName(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)));
                }
#line 2617 "ned2.tab.cc"
    break;

  case 80: /* compoundmoduleheader: MODULE NAME $@8 opt_inheritance  */
#line 556 "ned2.y"
                { storeBannerAndRightComments(np, ps.component,(*yylocp)); }
#line 2623 "ned2.tab.cc"
    break;

  case 81: /* $@9: %empty  */
#line 564 "ned2.y"
                {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)ps.component->getFirstChildWithTag(NED_PARAMETERS); // networkheader already created it for @isNetwork
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
#line 2635 "ned2.tab.cc"
    break;

  case 82: /* networkdefinition: networkheader '{' $@9 opt_paramblock opt_gateblock opt_typeblock opt_submodblock opt_connblock '}'  */
#line 577 "ned2.y"
                {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(np, ps.component, (*yylocp));
                  storePos(np, ps.component, (*yylocp));
                  storeTrailingComment(np, ps.component,(*yylocp));
                }
#line 2650 "ned2.tab.cc"
    break;

  case 83: /* $@10: %empty  */
#line 591 "ned2.y"
                {
                  ps.component = (CompoundModuleElement *)createNedElementWithTag(np, NED_COMPOUND_MODULE, ps.inTypes ? (ASTNode *)ps.types : (ASTNode *)ps.nedfile );
                  ((CompoundModuleElement *)ps.component)->setName(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)));
                }
#line 2659 "ned2.tab.cc"
    break;

  case 84: /* networkheader: NETWORK NAME $@10 opt_inheritance  */
#line 596 "ned2.y"
                {
                  setIsNetworkProperty(np, ps.component);
                  storeBannerAndRightComments(np, ps.component,(*yylocp));
                }
#line 2668 "ned2.tab.cc"
    break;

  case 85: /* $@11: %empty  */
#line 607 "ned2.y"
                {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)createNedElementWithTag(np, NED_PARAMETERS, ps.component);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
#line 2680 "ned2.tab.cc"
    break;

  case 86: /* moduleinterfacedefinition: moduleinterfaceheader '{' $@11 opt_paramblock opt_gateblock '}'  */
#line 617 "ned2.y"
                {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(np, ps.component, (*yylocp));
                  storePos(np, ps.component, (*yylocp));
                  storeTrailingComment(np, ps.component,(*yylocp));
                }
#line 2695 "ned2.tab.cc"
    break;

  case 87: /* $@12: %empty  */
#line 631 "ned2.y"
                {
                  ps.component = (ModuleInterfaceElement *)createNedElementWithTag(np, NED_MODULE_INTERFACE, ps.inTypes ? (ASTNode *)ps.types : (ASTNode *)ps.nedfile);
                  ((ModuleInterfaceElement *)ps.component)->setName(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)));
                }
#line 2704 "ned2.tab.cc"
    break;

  case 88: /* moduleinterfaceheader: MODULEINTERFACE NAME $@12 opt_interfaceinheritance  */
#line 636 "ned2.y"
                { storeBannerAndRightComments(np, ps.component,(*yylocp)); }
#line 2710 "ned2.tab.cc"
    break;

  case 89: /* opt_paramblock: opt_params  */
#line 644 "ned2.y"
                {
                  storePos(np, ps.parameters, (*yylocp));
                  if (!ps.parameters->getFirstChild()) { // delete "parameters" element if empty
                      ps.parameters->getParent()->removeChild(ps.parameters);
                      delete ps.parameters;
                  }
                }
#line 2722 "ned2.tab.cc"
    break;

  case 90: /* $@13: %empty  */
#line 652 "ned2.y"
                {
                  ps.parameters->setIsImplicit(false);
                  storeBannerAndRightComments(np, ps.parameters,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                }
#line 2731 "ned2.tab.cc"
    break;

  case 91: /* opt_paramblock: PARAMETERS ':' $@13 opt_params  */
#line 657 "ned2.y"
                { storePos(np, ps.parameters, (*yylocp)); }
#line 2737 "ned2.tab.cc"
    break;

  case 100: /* param_typenamevalue: param_typename opt_inline_properties ';'  */
#line 685 "ned2.y"
                {
                  ps.propertyscope.pop();
                  storePos(np, ps.param, (*yylocp));
                  storeBannerAndRightComments(np, ps.param,(*yylocp));
                }
#line 2747 "ned2.tab.cc"
    break;

  case 101: /* param_typenamevalue: param_typename opt_inline_properties '=' paramvalue opt_inline_properties ';'  */
#line 691 "ned2.y"
                {
                  ps.propertyscope.pop();
                  if (!isEmpty(ps.exprPos))  // note: $4 cannot be checked, as it's always nullptr when expression parsing is off
                      addExpression(np, ps.param, "value",ps.exprPos,YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval);
                  else {
                      // Note: "=default" is currently not accepted in NED files, because
                      // it would be complicated to support in the Inifile Editor.
                      if (ps.isDefault)
                          np->getErrors()->addError(ps.param,"applying the default value (\"=default\" syntax) is not supported in NED files");
                  }
                  ps.param->setIsDefault(ps.isDefault);
                  storePos(np, ps.param, (*yylocp));
                  storeBannerAndRightComments(np, ps.param,(*yylocp));
                }
#line 2766 "ned2.tab.cc"
    break;

  case 102: /* param_typename: opt_volatile paramtype NAME  */
#line 709 "ned2.y"
                {
                  ps.param = addParameter(np, ps.parameters, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                  ps.param->setType(ps.paramType);
                  ps.param->setIsVolatile(ps.isVolatile);
                  ps.propertyscope.push(ps.param);
                }
#line 2777 "ned2.tab.cc"
    break;

  case 103: /* param_typename: NAME  */
#line 716 "ned2.y"
                {
                  ps.param = addParameter(np, ps.parameters, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                  ps.propertyscope.push(ps.param);
                }
#line 2786 "ned2.tab.cc"
    break;

  case 104: /* parampattern_value: parampattern opt_inline_properties '=' paramvalue ';'  */
#line 724 "ned2.y"
                {
                  ps.propertyscope.pop();
                  if (!isEmpty(ps.exprPos))  // note: $4 cannot be checked, as it's always nullptr when expression parsing is off
                      addExpression(np, ps.param, "value",ps.exprPos,YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval);
                  else {
                      // Note: "=default" is currently not accepted in NED files, because
                      // it would be complicated to support in the Inifile Editor.
                      if (ps.isDefault)
                          np->getErrors()->addError(ps.param,"applying the default value (\"=default\" syntax) is not supported in NED files");
                  }
                  ps.param->setIsDefault(ps.isDefault);
                  storePos(np, ps.param, (*yylocp));
                  storeBannerAndRightComments(np, ps.param,(*yylocp));
                }
#line 2805 "ned2.tab.cc"
    break;

  case 105: /* paramtype: DOUBLE_  */
#line 742 "ned2.y"
                { ps.paramType = PARTYPE_DOUBLE; }
#line 2811 "ned2.tab.cc"
    break;

  case 106: /* paramtype: INT_  */
#line 744 "ned2.y"
                { ps.paramType = PARTYPE_INT; }
#line 2817 "ned2.tab.cc"
    break;

  case 107: /* paramtype: STRING_  */
#line 746 "ned2.y"
                { ps.paramType = PARTYPE_STRING; }
#line 2823 "ned2.tab.cc"
    break;

  case 108: /* paramtype: BOOL_  */
#line 748 "ned2.y"
                { ps.paramType = PARTYPE_BOOL; }
#line 2829 "ned2.tab.cc"
    break;

  case 109: /* paramtype: OBJECT_  */
#line 750 "ned2.y"
                { ps.paramType = PARTYPE_OBJECT; }
#line 2835 "ned2.tab.cc"
    break;

  case 110: /* paramtype: XML_  */
#line 752 "ned2.y"
                { ps.paramType = PARTYPE_XML; }
#line 2841 "ned2.tab.cc"
    break;

  case 111: /* opt_volatile: VOLATILE_  */
#line 757 "ned2.y"
                { ps.isVolatile = true; }
#line 2847 "ned2.tab.cc"
    break;

  case 112: /* opt_volatile: %empty  */
#line 759 "ned2.y"
                { ps.isVolatile = false; }
#line 2853 "ned2.tab.cc"
    break;

  case 113: /* paramvalue: expression  */
#line 764 "ned2.y"
                { (*yyvalp) = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval; ps.exprPos = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc); ps.isDefault = false; }
#line 2859 "ned2.tab.cc"
    break;

  case 114: /* paramvalue: DEFAULT '(' expression ')'  */
#line 766 "ned2.y"
                { (*yyvalp) = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval; ps.exprPos = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc); ps.isDefault = true; }
#line 2865 "ned2.tab.cc"
    break;

  case 115: /* paramvalue: DEFAULT  */
#line 768 "ned2.y"
                {
                  (*yyvalp) = nullptr; ps.exprPos = makeEmptyYYLoc(); ps.isDefault = true;
                }
#line 2873 "ned2.tab.cc"
    break;

  case 116: /* paramvalue: ASK  */
#line 772 "ned2.y"
                {
                  np->getErrors()->addError(ps.parameters,"interactive prompting (\"=ask\" syntax) is not supported in NED files");
                  (*yyvalp) = nullptr; ps.exprPos = makeEmptyYYLoc(); ps.isDefault = false;
                }
#line 2882 "ned2.tab.cc"
    break;

  case 121: /* parampattern: pattern  */
#line 790 "ned2.y"
                {
                  ps.param = addParameter(np, ps.parameters, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                  ps.param->setIsPattern(true);
                  const char *patt = ps.param->getName();
                  if (strchr(patt,' ') || strchr(patt,'\t') || strchr(patt,'\n'))
                      np->getErrors()->addError(ps.param,"parameter name patterns may not contain whitespace");
                  ps.propertyscope.push(ps.param);
                }
#line 2895 "ned2.tab.cc"
    break;

  case 142: /* property: property_namevalue ';'  */
#line 840 "ned2.y"
                {
                  storePos(np, ps.property, (*yylocp));
                  storeBannerAndRightComments(np, ps.property,(*yylocp));
                }
#line 2904 "ned2.tab.cc"
    break;

  case 145: /* property_name: '@' PROPNAME  */
#line 853 "ned2.y"
                {
                  assertNonEmpty(ps.propertyscope);
                  ps.property = addProperty(np, ps.propertyscope.top(), toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)));
                  ps.propvals.clear(); // just to be safe
                }
#line 2914 "ned2.tab.cc"
    break;

  case 146: /* property_name: '@' PROPNAME '[' PROPNAME ']'  */
#line 859 "ned2.y"
                {
                  assertNonEmpty(ps.propertyscope);
                  ps.property = addProperty(np, ps.propertyscope.top(), toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yyloc)));
                  ps.property->setIndex(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  ps.propvals.clear(); // just to be safe
                }
#line 2925 "ned2.tab.cc"
    break;

  case 150: /* property_key: property_literal '=' property_values  */
#line 878 "ned2.y"
                {
                  ps.propkey = (PropertyKeyElement *)createNedElementWithTag(np, NED_PROPERTY_KEY, ps.property);
                  ps.propkey->setName(opp_trim(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc))).c_str());
                  for (int i=0; i<(int)ps.propvals.size(); i++)
                      ps.propkey->appendChild(ps.propvals[i]);
                  ps.propvals.clear();
                  storePos(np, ps.propkey, (*yylocp));
                }
#line 2938 "ned2.tab.cc"
    break;

  case 151: /* property_key: property_values  */
#line 887 "ned2.y"
                {
                  ps.propkey = (PropertyKeyElement *)createNedElementWithTag(np, NED_PROPERTY_KEY, ps.property);
                  ps.propkey->appendChild(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                  for (int i=0; i<(int)ps.propvals.size(); i++)
                      ps.propkey->appendChild(ps.propvals[i]);
                  ps.propvals.clear();
                  storePos(np, ps.propkey, (*yylocp));
                }
#line 2951 "ned2.tab.cc"
    break;

  case 152: /* property_values: property_values ',' property_value  */
#line 899 "ned2.y"
                { ps.propvals.push_back(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 2957 "ned2.tab.cc"
    break;

  case 153: /* property_values: property_value  */
#line 901 "ned2.y"
                { ps.propvals.push_back(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 2963 "ned2.tab.cc"
    break;

  case 154: /* property_value: property_literal  */
#line 906 "ned2.y"
                {
                  (*yyvalp) = createPropertyValue(np, (*yylocp));
                }
#line 2971 "ned2.tab.cc"
    break;

  case 155: /* property_value: %empty  */
#line 910 "ned2.y"
                {
                  LiteralElement *node = (LiteralElement *)createNedElementWithTag(np, NED_LITERAL);
                  node->setType(LIT_SPEC); // and leave both value and text at ""
                  (*yyvalp) = node;
                }
#line 2981 "ned2.tab.cc"
    break;

  case 162: /* $@14: %empty  */
#line 934 "ned2.y"
                {
                  assertNonEmpty(ps.blockscope);
                  ps.gates = (GatesElement *)createNedElementWithTag(np, NED_GATES, ps.blockscope.top());
                  storeBannerAndRightComments(np, ps.gates,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                }
#line 2991 "ned2.tab.cc"
    break;

  case 163: /* gateblock: GATES ':' $@14 opt_gates  */
#line 940 "ned2.y"
                {
                  storePos(np, ps.gates, (*yylocp));
                }
#line 2999 "ned2.tab.cc"
    break;

  case 166: /* gates: gates gate  */
#line 952 "ned2.y"
                {
                  storeBannerAndRightComments(np, ps.gate,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                }
#line 3007 "ned2.tab.cc"
    break;

  case 167: /* gates: gate  */
#line 956 "ned2.y"
                {
                  storeBannerAndRightComments(np, ps.gate,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                }
#line 3015 "ned2.tab.cc"
    break;

  case 168: /* $@15: %empty  */
#line 966 "ned2.y"
                {
                  ps.propertyscope.push(ps.gate);
                }
#line 3023 "ned2.tab.cc"
    break;

  case 169: /* gate: gate_typenamesize $@15 opt_inline_properties ';'  */
#line 970 "ned2.y"
                {
                  ps.propertyscope.pop();
                  storePos(np, ps.gate, (*yylocp));
                }
#line 3032 "ned2.tab.cc"
    break;

  case 170: /* gate_typenamesize: gatetype NAME  */
#line 978 "ned2.y"
                {
                  ps.gate = addGate(np, ps.gates, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                  ps.gate->setType(ps.gateType);
                }
#line 3041 "ned2.tab.cc"
    break;

  case 171: /* gate_typenamesize: gatetype NAME '[' ']'  */
#line 983 "ned2.y"
                {
                  ps.gate = addGate(np, ps.gates, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc));
                  ps.gate->setType(ps.gateType);
                  ps.gate->setIsVector(true);
                }
#line 3051 "ned2.tab.cc"
    break;

  case 172: /* gate_typenamesize: gatetype NAME vector  */
#line 989 "ned2.y"
                {
                  ps.gate = addGate(np, ps.gates, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc));
                  ps.gate->setType(ps.gateType);
                  ps.gate->setIsVector(true);
                  addExpression(np, ps.gate, "vector-size",ps.exprPos,YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                }
#line 3062 "ned2.tab.cc"
    break;

  case 173: /* gate_typenamesize: NAME  */
#line 996 "ned2.y"
                {
                  ps.gate = addGate(np, ps.gates, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                }
#line 3070 "ned2.tab.cc"
    break;

  case 174: /* gate_typenamesize: NAME '[' ']'  */
#line 1000 "ned2.y"
                {
                  ps.gate = addGate(np, ps.gates, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc));
                  ps.gate->setIsVector(true);
                }
#line 3079 "ned2.tab.cc"
    break;

  case 175: /* gate_typenamesize: NAME vector  */
#line 1005 "ned2.y"
                {
                  ps.gate = addGate(np, ps.gates, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc));
                  ps.gate->setIsVector(true);
                  addExpression(np, ps.gate, "vector-size",ps.exprPos,YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                }
#line 3089 "ned2.tab.cc"
    break;

  case 176: /* gatetype: INPUT_  */
#line 1014 "ned2.y"
                { ps.gateType = GATETYPE_INPUT; }
#line 3095 "ned2.tab.cc"
    break;

  case 177: /* gatetype: OUTPUT_  */
#line 1016 "ned2.y"
                { ps.gateType = GATETYPE_OUTPUT; }
#line 3101 "ned2.tab.cc"
    break;

  case 178: /* gatetype: INOUT_  */
#line 1018 "ned2.y"
                { ps.gateType = GATETYPE_INOUT; }
#line 3107 "ned2.tab.cc"
    break;

  case 181: /* $@16: %empty  */
#line 1031 "ned2.y"
                {
                  assertNonEmpty(ps.blockscope);
                  ps.types = (TypesElement *)createNedElementWithTag(np, NED_TYPES, ps.blockscope.top());
                  storeBannerAndRightComments(np, ps.types,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                  if (ps.inTypes)
                     np->getErrors()->addError(ps.types,"more than one level of type nesting is not allowed");
                  ps.inTypes = true;
                }
#line 3120 "ned2.tab.cc"
    break;

  case 182: /* typeblock: TYPES ':' $@16 opt_localtypes  */
#line 1040 "ned2.y"
                {
                  ps.inTypes = false;
                  storePos(np, ps.types, (*yylocp));
                }
#line 3129 "ned2.tab.cc"
    break;

  case 197: /* $@17: %empty  */
#line 1077 "ned2.y"
                {
                  assertNonEmpty(ps.blockscope);
                  ps.submods = (SubmodulesElement *)createNedElementWithTag(np, NED_SUBMODULES, ps.blockscope.top());
                  storeBannerAndRightComments(np, ps.submods,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                }
#line 3139 "ned2.tab.cc"
    break;

  case 198: /* submodblock: SUBMODULES ':' $@17 opt_submodules  */
#line 1083 "ned2.y"
                {
                  storePos(np, ps.submods, (*yylocp));
                }
#line 3147 "ned2.tab.cc"
    break;

  case 203: /* submodule: submoduleheader ';'  */
#line 1100 "ned2.y"
                {
                  storeBannerAndRightComments(np, ps.submod,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                  storePos(np, ps.submod, (*yylocp));
                }
#line 3156 "ned2.tab.cc"
    break;

  case 204: /* $@18: %empty  */
#line 1105 "ned2.y"
                {
                  ps.blockscope.push(ps.submod);
                  ps.parameters = (ParametersElement *)createNedElementWithTag(np, NED_PARAMETERS, ps.submod);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                  storeBannerAndRightComments(np, ps.submod,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                }
#line 3168 "ned2.tab.cc"
    break;

  case 205: /* submodule: submoduleheader '{' $@18 opt_paramblock opt_gateblock '}' opt_semicolon  */
#line 1115 "ned2.y"
                {
                  ps.blockscope.pop();
                  ps.propertyscope.pop();
                  storePos(np, ps.submod, (*yylocp));
                  storeTrailingComment(np, ps.submod,(*yylocp));
                }
#line 3179 "ned2.tab.cc"
    break;

  case 206: /* submoduleheader: submodulename ':' dottedname opt_condition  */
#line 1125 "ned2.y"
                {
                  ps.submod->setType(removeSpaces(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)).c_str());
                  if (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval) ps.submod->appendChild(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                }
#line 3188 "ned2.tab.cc"
    break;

  case 207: /* submoduleheader: submodulename ':' likeexpr LIKE dottedname opt_condition  */
#line 1130 "ned2.y"
                {
                  addOptionalExpression(np, ps.submod, "like-expr", ps.exprPos, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval);
                  ps.submod->setLikeType(removeSpaces(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)).c_str());
                  ps.submod->setIsDefault(ps.isDefault);
                  if (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval) ps.submod->appendChild(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                }
#line 3199 "ned2.tab.cc"
    break;

  case 208: /* submodulename: NAME  */
#line 1140 "ned2.y"
                {
                  ps.submod = (SubmoduleElement *)createNedElementWithTag(np, NED_SUBMODULE, ps.submods);
                  ps.submod->setName(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)));
                }
#line 3208 "ned2.tab.cc"
    break;

  case 209: /* submodulename: NAME vector  */
#line 1145 "ned2.y"
                {
                  ps.submod = (SubmoduleElement *)createNedElementWithTag(np, NED_SUBMODULE, ps.submods);
                  ps.submod->setName(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  addExpression(np, ps.submod, "vector-size",ps.exprPos,YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                }
#line 3218 "ned2.tab.cc"
    break;

  case 210: /* likeexpr: '<' '>'  */
#line 1154 "ned2.y"
                { (*yyvalp) = nullptr; ps.exprPos = makeEmptyYYLoc(); ps.isDefault = false; }
#line 3224 "ned2.tab.cc"
    break;

  case 211: /* likeexpr: '<' expression '>'  */
#line 1156 "ned2.y"
                { (*yyvalp) = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval; ps.exprPos = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc); ps.isDefault = false; }
#line 3230 "ned2.tab.cc"
    break;

  case 212: /* likeexpr: '<' DEFAULT '(' expression ')' '>'  */
#line 1158 "ned2.y"
                { (*yyvalp) = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval; ps.exprPos = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc); ps.isDefault = true; }
#line 3236 "ned2.tab.cc"
    break;

  case 213: /* opt_condition: condition  */
#line 1163 "ned2.y"
                { (*yyvalp) = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval; }
#line 3242 "ned2.tab.cc"
    break;

  case 214: /* opt_condition: %empty  */
#line 1165 "ned2.y"
                { (*yyvalp) = nullptr; }
#line 3248 "ned2.tab.cc"
    break;

  case 217: /* $@19: %empty  */
#line 1178 "ned2.y"
                {
                  assertNonEmpty(ps.blockscope);
                  ps.conns = (ConnectionsElement *)createNedElementWithTag(np, NED_CONNECTIONS, ps.blockscope.top());
                  ps.conns->setAllowUnconnected(true);
                  storeBannerAndRightComments(np, ps.conns,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                }
#line 3259 "ned2.tab.cc"
    break;

  case 218: /* connblock: CONNECTIONS ALLOWUNCONNECTED ':' $@19 opt_connections  */
#line 1185 "ned2.y"
                {
                  storePos(np, ps.conns, (*yylocp));
                }
#line 3267 "ned2.tab.cc"
    break;

  case 219: /* $@20: %empty  */
#line 1189 "ned2.y"
                {
                  assertNonEmpty(ps.blockscope);
                  ps.conns = (ConnectionsElement *)createNedElementWithTag(np, NED_CONNECTIONS, ps.blockscope.top());
                  storeBannerAndRightComments(np, ps.conns,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                }
#line 3277 "ned2.tab.cc"
    break;

  case 220: /* connblock: CONNECTIONS ':' $@20 opt_connections  */
#line 1195 "ned2.y"
                {
                  storePos(np, ps.conns, (*yylocp));
                }
#line 3285 "ned2.tab.cc"
    break;

  case 226: /* connectionsitem: connection opt_loops_and_conditions ';'  */
#line 1213 "ned2.y"
                {
                  if (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval) {
                      transferChildren(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, ps.conn);
                      delete YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval;
                  }
                  storePos(np, ps.conn, (*yylocp));
                  storeBannerAndRightComments(np, ps.conn,(*yylocp));
                }
#line 3298 "ned2.tab.cc"
    break;

  case 227: /* $@21: %empty  */
#line 1225 "ned2.y"
                {
                  if (ps.inConnGroup)
                      np->getErrors()->addError(ps.conngroup,"nested connection groups are not allowed");
                  ps.conngroup = (ConnectionGroupElement *)createNedElementWithTag(np, NED_CONNECTION_GROUP, ps.conns);
                  if (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval) {
                      // for's and if's were collected in a temporary UnknownElement, put them under conngroup now
                      transferChildren(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, ps.conngroup);
                      delete YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval;
                  }
                  ps.inConnGroup = true;
                  storeBannerAndRightComments(np, ps.conngroup,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc));
                }
#line 3315 "ned2.tab.cc"
    break;

  case 228: /* connectiongroup: opt_loops_and_conditions '{' $@21 connections '}' opt_semicolon  */
#line 1238 "ned2.y"
                {
                  ps.inConnGroup = false;
                  storePos(np, ps.conngroup,(*yylocp));
                  storeTrailingComment(np, ps.conngroup,(*yylocp));
                }
#line 3325 "ned2.tab.cc"
    break;

  case 229: /* opt_loops_and_conditions: loops_and_conditions  */
#line 1247 "ned2.y"
                { (*yyvalp) = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval; }
#line 3331 "ned2.tab.cc"
    break;

  case 230: /* opt_loops_and_conditions: %empty  */
#line 1249 "ned2.y"
                { (*yyvalp) = nullptr; }
#line 3337 "ned2.tab.cc"
    break;

  case 231: /* loops_and_conditions: loops_and_conditions ',' loop_or_condition  */
#line 1254 "ned2.y"
                {
                  YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval->appendChild(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                  (*yyvalp) = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval;
                }
#line 3346 "ned2.tab.cc"
    break;

  case 232: /* loops_and_conditions: loop_or_condition  */
#line 1259 "ned2.y"
                {
                  (*yyvalp) = new UnknownElement();
                  (*yyvalp)->appendChild(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                }
#line 3355 "ned2.tab.cc"
    break;

  case 235: /* loop: FOR NAME '=' expression TO expression  */
#line 1272 "ned2.y"
                {
                  ps.loop = (LoopElement *)createNedElementWithTag(np, NED_LOOP);
                  ps.loop->setParamName( toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yyloc)) );
                  addExpression(np, ps.loop, "from-value",(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc),YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval);
                  addExpression(np, ps.loop, "to-value",(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc),YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                  storePos(np, ps.loop, (*yylocp));
                  (*yyvalp) = ps.loop;
                }
#line 3368 "ned2.tab.cc"
    break;

  case 236: /* connection: leftgatespec RIGHTARROW rightgatespec  */
#line 1287 "ned2.y"
                {
                  ps.conn->setIsBidirectional(false);
                  ps.conn->setIsForwardArrow(true);
                }
#line 3377 "ned2.tab.cc"
    break;

  case 237: /* connection: leftgatespec RIGHTARROW channelspec RIGHTARROW rightgatespec  */
#line 1292 "ned2.y"
                {
                  ps.conn->setIsBidirectional(false);
                  ps.conn->setIsForwardArrow(true);
                }
#line 3386 "ned2.tab.cc"
    break;

  case 238: /* connection: leftgatespec LEFTARROW rightgatespec  */
#line 1297 "ned2.y"
                {
                  swapConnection(ps.conn);
                  ps.conn->setIsBidirectional(false);
                  ps.conn->setIsForwardArrow(false);
                }
#line 3396 "ned2.tab.cc"
    break;

  case 239: /* connection: leftgatespec LEFTARROW channelspec LEFTARROW rightgatespec  */
#line 1303 "ned2.y"
                {
                  swapConnection(ps.conn);
                  ps.conn->setIsBidirectional(false);
                  ps.conn->setIsForwardArrow(false);
                }
#line 3406 "ned2.tab.cc"
    break;

  case 240: /* connection: leftgatespec DBLARROW rightgatespec  */
#line 1309 "ned2.y"
                {
                  ps.conn->setIsBidirectional(true);
                }
#line 3414 "ned2.tab.cc"
    break;

  case 241: /* connection: leftgatespec DBLARROW channelspec DBLARROW rightgatespec  */
#line 1313 "ned2.y"
                {
                  ps.conn->setIsBidirectional(true);
                }
#line 3422 "ned2.tab.cc"
    break;

  case 244: /* leftmod: NAME vector  */
#line 1325 "ned2.y"
                {
                  ps.conn = (ConnectionElement *)createNedElementWithTag(np, NED_CONNECTION, ps.inConnGroup ? (ASTNode*)ps.conngroup : (ASTNode*)ps.conns );
                  ps.conn->setSrcModule( toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)) );
                  addExpression(np, ps.conn, "src-module-index",ps.exprPos,YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                }
#line 3432 "ned2.tab.cc"
    break;

  case 245: /* leftmod: NAME  */
#line 1331 "ned2.y"
                {
                  ps.conn = (ConnectionElement *)createNedElementWithTag(np, NED_CONNECTION, ps.inConnGroup ? (ASTNode*)ps.conngroup : (ASTNode*)ps.conns );
                  ps.conn->setSrcModule( toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)) );
                }
#line 3441 "ned2.tab.cc"
    break;

  case 246: /* leftgate: NAME opt_subgate  */
#line 1339 "ned2.y"
                {
                  ps.conn->setSrcGate( toString(np,  (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)) );
                  ps.conn->setSrcGateSubg(ps.subgate);
                }
#line 3450 "ned2.tab.cc"
    break;

  case 247: /* leftgate: NAME opt_subgate vector  */
#line 1344 "ned2.y"
                {
                  ps.conn->setSrcGate( toString(np,  (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)) );
                  ps.conn->setSrcGateSubg(ps.subgate);
                  addExpression(np, ps.conn, "src-gate-index",ps.exprPos,YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                }
#line 3460 "ned2.tab.cc"
    break;

  case 248: /* leftgate: NAME opt_subgate PLUSPLUS  */
#line 1350 "ned2.y"
                {
                  ps.conn->setSrcGate( toString(np,  (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)) );
                  ps.conn->setSrcGateSubg(ps.subgate);
                  ps.conn->setSrcGatePlusplus(true);
                }
#line 3470 "ned2.tab.cc"
    break;

  case 249: /* parentleftgate: NAME opt_subgate  */
#line 1359 "ned2.y"
                {
                  ps.conn = (ConnectionElement *)createNedElementWithTag(np, NED_CONNECTION, ps.inConnGroup ? (ASTNode*)ps.conngroup : (ASTNode*)ps.conns );
                  ps.conn->setSrcModule("");
                  ps.conn->setSrcGate(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  ps.conn->setSrcGateSubg(ps.subgate);
                }
#line 3481 "ned2.tab.cc"
    break;

  case 250: /* parentleftgate: NAME opt_subgate vector  */
#line 1366 "ned2.y"
                {
                  ps.conn = (ConnectionElement *)createNedElementWithTag(np, NED_CONNECTION, ps.inConnGroup ? (ASTNode*)ps.conngroup : (ASTNode*)ps.conns );
                  ps.conn->setSrcModule("");
                  ps.conn->setSrcGate(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)));
                  ps.conn->setSrcGateSubg(ps.subgate);
                  addExpression(np, ps.conn, "src-gate-index",ps.exprPos,YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                }
#line 3493 "ned2.tab.cc"
    break;

  case 251: /* parentleftgate: NAME opt_subgate PLUSPLUS  */
#line 1374 "ned2.y"
                {
                  ps.conn = (ConnectionElement *)createNedElementWithTag(np, NED_CONNECTION, ps.inConnGroup ? (ASTNode*)ps.conngroup : (ASTNode*)ps.conns );
                  ps.conn->setSrcModule("");
                  ps.conn->setSrcGate(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)));
                  ps.conn->setSrcGateSubg(ps.subgate);
                  ps.conn->setSrcGatePlusplus(true);
                }
#line 3505 "ned2.tab.cc"
    break;

  case 254: /* rightmod: NAME  */
#line 1390 "ned2.y"
                {
                  ps.conn->setDestModule( toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)) );
                }
#line 3513 "ned2.tab.cc"
    break;

  case 255: /* rightmod: NAME vector  */
#line 1394 "ned2.y"
                {
                  ps.conn->setDestModule( toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)) );
                  addExpression(np, ps.conn, "dest-module-index",ps.exprPos,YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                }
#line 3522 "ned2.tab.cc"
    break;

  case 256: /* rightgate: NAME opt_subgate  */
#line 1402 "ned2.y"
                {
                  ps.conn->setDestGate( toString(np,  (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                }
#line 3531 "ned2.tab.cc"
    break;

  case 257: /* rightgate: NAME opt_subgate vector  */
#line 1407 "ned2.y"
                {
                  ps.conn->setDestGate( toString(np,  (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                  addExpression(np, ps.conn, "dest-gate-index",ps.exprPos,YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                }
#line 3541 "ned2.tab.cc"
    break;

  case 258: /* rightgate: NAME opt_subgate PLUSPLUS  */
#line 1413 "ned2.y"
                {
                  ps.conn->setDestGate( toString(np,  (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                  ps.conn->setDestGatePlusplus(true);
                }
#line 3551 "ned2.tab.cc"
    break;

  case 259: /* parentrightgate: NAME opt_subgate  */
#line 1422 "ned2.y"
                {
                  ps.conn->setDestGate( toString(np,  (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                }
#line 3560 "ned2.tab.cc"
    break;

  case 260: /* parentrightgate: NAME opt_subgate vector  */
#line 1427 "ned2.y"
                {
                  ps.conn->setDestGate( toString(np,  (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                  addExpression(np, ps.conn, "dest-gate-index",ps.exprPos,YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                }
#line 3570 "ned2.tab.cc"
    break;

  case 261: /* parentrightgate: NAME opt_subgate PLUSPLUS  */
#line 1433 "ned2.y"
                {
                  ps.conn->setDestGate( toString(np,  (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                  ps.conn->setDestGatePlusplus(true);
                }
#line 3580 "ned2.tab.cc"
    break;

  case 262: /* opt_subgate: '$' NAME  */
#line 1442 "ned2.y"
                {
                  const char *s = toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                  if (!strcmp(s,"i"))
                      ps.subgate = SUBGATE_I;
                  else if (!strcmp(s,"o"))
                      ps.subgate = SUBGATE_O;
                  else {
                      std::string msg = opp_stringf("invalid subgate spec '%s', must be 'i' or 'o'", s); 
                      np->error(msg.c_str(), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc).first_line);
                  }
                }
#line 3596 "ned2.tab.cc"
    break;

  case 263: /* opt_subgate: %empty  */
#line 1454 "ned2.y"
                { ps.subgate = SUBGATE_NONE; }
#line 3602 "ned2.tab.cc"
    break;

  case 265: /* $@22: %empty  */
#line 1460 "ned2.y"
                {
                  ps.parameters = (ParametersElement *)createNedElementWithTag(np, NED_PARAMETERS, ps.conn);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
#line 3612 "ned2.tab.cc"
    break;

  case 266: /* channelspec: channelspec_header '{' $@22 opt_paramblock '}'  */
#line 1467 "ned2.y"
                {
                  ps.propertyscope.pop();
                }
#line 3620 "ned2.tab.cc"
    break;

  case 268: /* channelspec_header: opt_channelname dottedname  */
#line 1476 "ned2.y"
                {
                  ps.conn->setType(removeSpaces(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)).c_str());
                }
#line 3628 "ned2.tab.cc"
    break;

  case 269: /* channelspec_header: opt_channelname likeexpr LIKE dottedname  */
#line 1480 "ned2.y"
                {
                  addOptionalExpression(np, ps.conn, "like-expr", ps.exprPos, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval);
                  ps.conn->setLikeType(removeSpaces(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)).c_str());
                  ps.conn->setIsDefault(ps.isDefault);
                }
#line 3638 "ned2.tab.cc"
    break;

  case 271: /* opt_channelname: NAME ':'  */
#line 1490 "ned2.y"
                { ps.conn->setName(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc))); }
#line 3644 "ned2.tab.cc"
    break;

  case 272: /* condition: IF expression  */
#line 1498 "ned2.y"
                {
                  ps.condition = (ConditionElement *)createNedElementWithTag(np, NED_CONDITION);
                  addExpression(np, ps.condition, "condition",(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc),YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                  storePos(np, ps.condition, (*yylocp));
                  (*yyvalp) = ps.condition;
                }
#line 3655 "ned2.tab.cc"
    break;

  case 273: /* vector: '[' expression ']'  */
#line 1511 "ned2.y"
                { (*yyvalp) = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval; ps.exprPos = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc); }
#line 3661 "ned2.tab.cc"
    break;


#line 3665 "ned2.tab.cc"

      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yylhsNonterm (yyrule), yyvalp, yylocp);

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYNOMEM
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YY_USE (yy0);
  YY_USE (yy1);

  switch (yyn)
    {

      default: break;
    }
}

                              /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner, omnetpp::nedxml::ParseContext *np)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (np);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys, yyscan_t scanner, omnetpp::nedxml::ParseContext *np)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yy_accessing_symbol (yys->yylrState),
                &yys->yysemantics.yyval, &yys->yyloc, scanner, np);
  else
    {
#if YYDEBUG
      if (yydebug)
        {
          if (yys->yysemantics.yyfirstVal)
            YY_FPRINTF ((stderr, "%s unresolved", yymsg));
          else
            YY_FPRINTF ((stderr, "%s incomplete", yymsg));
          YY_SYMBOL_PRINT ("", yy_accessing_symbol (yys->yylrState), YY_NULLPTR, &yys->yyloc);
        }
#endif

      if (yys->yysemantics.yyfirstVal)
        {
          yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
          yyGLRState *yyrh;
          int yyn;
          for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
               yyn > 0;
               yyrh = yyrh->yypred, yyn -= 1)
            yydestroyGLRState (yymsg, yyrh, scanner, np);
        }
    }
}

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

/** True iff LR state YYSTATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yy_state_t yystate)
{
  return yypact_value_is_default (yypact[yystate]);
}

/** The default reduction for YYSTATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yy_state_t yystate)
{
  return yydefact[yystate];
}

#define yytable_value_is_error(Yyn) \
  0

/** The action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *YYCONFLICTS to a pointer into yyconfl to a 0-terminated list
 *  of conflicting reductions.
 */
static inline int
yygetLRActions (yy_state_t yystate, yysymbol_kind_t yytoken, const short** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yytoken == YYSYMBOL_YYerror)
    {
      // This is the error token.
      *yyconflicts = yyconfl;
      return 0;
    }
  else if (yyisDefaultedState (yystate)
           || yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyconflicts = yyconfl;
      return -yydefact[yystate];
    }
  else if (! yytable_value_is_error (yytable[yyindex]))
    {
      *yyconflicts = yyconfl + yyconflp[yyindex];
      return yytable[yyindex];
    }
  else
    {
      *yyconflicts = yyconfl + yyconflp[yyindex];
      return 0;
    }
}

/** Compute post-reduction state.
 * \param yystate   the current state
 * \param yysym     the nonterminal to push on the stack
 */
static inline yy_state_t
yyLRgotoState (yy_state_t yystate, yysymbol_kind_t yysym)
{
  int yyr = yypgoto[yysym - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yysym - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

                                /* GLRStates */

/** Return a fresh GLRStackItem in YYSTACKP.  The item is an LR state
 *  if YYISSTATE, and otherwise a semantic option.  Callers should call
 *  YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 *  headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  YYRULE on the semantic values in YYRHS to the list of
 *  alternative actions for YYSTATE.  Assumes that YYRHS comes from
 *  stack #YYK of *YYSTACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyGLRState* yystate,
                     yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  YY_ASSERT (!yynewOption->yyisState);
  yynewOption->yystate = yyrhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
      yynewOption->yyloc = yylloc;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

                                /* GLRStacks */

/** Initialize YYSET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates
    = YY_CAST (yyGLRState**,
               YYMALLOC (YY_CAST (YYSIZE_T, yyset->yycapacity)
                         * sizeof yyset->yystates[0]));
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = YY_NULLPTR;
  yyset->yylookaheadNeeds
    = YY_CAST (yybool*,
               YYMALLOC (YY_CAST (YYSIZE_T, yyset->yycapacity)
                         * sizeof yyset->yylookaheadNeeds[0]));
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  memset (yyset->yylookaheadNeeds,
          0,
          YY_CAST (YYSIZE_T, yyset->yycapacity) * sizeof yyset->yylookaheadNeeds[0]);
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize *YYSTACKP to a single empty stack, with total maximum
 *  capacity for all stacks of YYSIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, YYPTRDIFF_T yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems
    = YY_CAST (yyGLRStackItem*,
               YYMALLOC (YY_CAST (YYSIZE_T, yysize)
                         * sizeof yystackp->yynextFree[0]));
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS, YYTOITEMS, YYX, YYTYPE)                   \
  &((YYTOITEMS)                                                         \
    - ((YYFROMITEMS) - YY_REINTERPRET_CAST (yyGLRStackItem*, (YYX))))->YYTYPE

/** If *YYSTACKP is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  YYPTRDIFF_T yynewSize;
  YYPTRDIFF_T yyn;
  YYPTRDIFF_T yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems
    = YY_CAST (yyGLRStackItem*,
               YYMALLOC (YY_CAST (YYSIZE_T, yynewSize)
                         * sizeof yynewItems[0]));
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*YY_REINTERPRET_CAST (yybool *, yyp0))
        {
          yyGLRState* yys0 = &yyp0->yystate;
          yyGLRState* yys1 = &yyp1->yystate;
          if (yys0->yypred != YY_NULLPTR)
            yys1->yypred =
              YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
          if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != YY_NULLPTR)
            yys1->yysemantics.yyfirstVal =
              YYRELOC (yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
        }
      else
        {
          yySemanticOption* yyv0 = &yyp0->yyoption;
          yySemanticOption* yyv1 = &yyp1->yyoption;
          if (yyv0->yystate != YY_NULLPTR)
            yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
          if (yyv0->yynext != YY_NULLPTR)
            yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
        }
    }
  if (yystackp->yysplitPoint != YY_NULLPTR)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
                                      yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != YY_NULLPTR)
      yystackp->yytops.yystates[yyn] =
        YYRELOC (yystackp->yyitems, yynewItems,
                 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that YYS is a GLRState somewhere on *YYSTACKP, update the
 *  splitpoint of *YYSTACKP, if needed, so that it is at least as deep as
 *  YYS.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != YY_NULLPTR && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #YYK in *YYSTACKP.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = YY_NULLPTR;
}

/** Undelete the last stack in *YYSTACKP that was marked as deleted.  Can
    only be done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == YY_NULLPTR || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YY_DPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = YY_NULLPTR;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  YYPTRDIFF_T yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == YY_NULLPTR)
        {
          if (yyi == yyj)
            YY_DPRINTF ((stderr, "Removing dead stacks.\n"));
          yystackp->yytops.yysize -= 1;
        }
      else
        {
          yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
          /* In the current implementation, it's unnecessary to copy
             yystackp->yytops.yylookaheadNeeds[yyi] since, after
             yyremoveDeletes returns, the parser immediately either enters
             deterministic operation or shifts a token.  However, it doesn't
             hurt, and the code might evolve to need it.  */
          yystackp->yytops.yylookaheadNeeds[yyj] =
            yystackp->yytops.yylookaheadNeeds[yyi];
          if (yyj != yyi)
            YY_DPRINTF ((stderr, "Rename stack %ld -> %ld.\n",
                        YY_CAST (long, yyi), YY_CAST (long, yyj)));
          yyj += 1;
        }
      yyi += 1;
    }
}

/** Shift to a new state on stack #YYK of *YYSTACKP, corresponding to LR
 * state YYLRSTATE, at input position YYPOSN, with (resolved) semantic
 * value *YYVALP and source location *YYLOCP.  */
static inline void
yyglrShift (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yy_state_t yylrState,
            YYPTRDIFF_T yyposn,
            YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyval = *yyvalp;
  yynewState->yyloc = *yylocp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #YYK of *YYSTACKP, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yy_state_t yylrState,
                 YYPTRDIFF_T yyposn, yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;
  YY_ASSERT (yynewState->yyisState);

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = YY_NULLPTR;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, yyrhs, yyrule);
}

#if YYDEBUG

/*----------------------------------------------------------------------.
| Report that stack #YYK of *YYSTACKP is going to be reduced by YYRULE. |
`----------------------------------------------------------------------*/

static inline void
yy_reduce_print (yybool yynormal, yyGLRStackItem* yyvsp, YYPTRDIFF_T yyk,
                 yyRuleNum yyrule, yyscan_t scanner, omnetpp::nedxml::ParseContext *np)
{
  int yynrhs = yyrhsLength (yyrule);
  int yylow = 1;
  int yyi;
  YY_FPRINTF ((stderr, "Reducing stack %ld by rule %d (line %d):\n",
               YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule]));
  if (! yynormal)
    yyfillin (yyvsp, 1, -yynrhs);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YY_FPRINTF ((stderr, "   $%d = ", yyi + 1));
      yy_symbol_print (stderr,
                       yy_accessing_symbol (yyvsp[yyi - yynrhs + 1].yystate.yylrState),
                       &yyvsp[yyi - yynrhs + 1].yystate.yysemantics.yyval,
                       &(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL ((yyi + 1) - (yynrhs))].yystate.yyloc)                       , scanner, np);
      if (!yyvsp[yyi - yynrhs + 1].yystate.yyresolved)
        YY_FPRINTF ((stderr, " (unresolved)"));
      YY_FPRINTF ((stderr, "\n"));
    }
}
#endif

/** Pop the symbols consumed by reduction #YYRULE from the top of stack
 *  #YYK of *YYSTACKP, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *YYVALP to the resulting value,
 *  and *YYLOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyRuleNum yyrule,
            YYSTYPE* yyvalp, YYLTYPE *yylocp, yyscan_t scanner, omnetpp::nedxml::ParseContext *np)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* yyrhs
        = YY_REINTERPRET_CAST (yyGLRStackItem*, yystackp->yytops.yystates[yyk]);
      YY_ASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      return yyuserAction (yyrule, yynrhs, yyrhs, yystackp, yyk,
                           yyvalp, yylocp, scanner, np);
    }
  else
    {
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yyGLRState* yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
        = yystackp->yytops.yystates[yyk];
      int yyi;
      if (yynrhs == 0)
        /* Set default location.  */
        yyrhsVals[YYMAXRHS + YYMAXLEFT - 1].yystate.yyloc = yys->yyloc;
      for (yyi = 0; yyi < yynrhs; yyi += 1)
        {
          yys = yys->yypred;
          YY_ASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyk, yyvalp, yylocp, scanner, np);
    }
}

/** Pop items off stack #YYK of *YYSTACKP according to grammar rule YYRULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with YYRULE and store its value with the
 *  newly pushed state, if YYFORCEEVAL or if *YYSTACKP is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #YYK from
 *  *YYSTACKP.  In this case, the semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyRuleNum yyrule,
             yybool yyforceEval, yyscan_t scanner, omnetpp::nedxml::ParseContext *np)
{
  YYPTRDIFF_T yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == YY_NULLPTR)
    {
      YYSTYPE yyval;
      YYLTYPE yyloc;

      YYRESULTTAG yyflag = yydoAction (yystackp, yyk, yyrule, &yyval, &yyloc, scanner, np);
      if (yyflag == yyerr && yystackp->yysplitPoint != YY_NULLPTR)
        YY_DPRINTF ((stderr,
                     "Parse on stack %ld rejected by rule %d (line %d).\n",
                     YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule]));
      if (yyflag != yyok)
        return yyflag;
      yyglrShift (yystackp, yyk,
                  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
                                 yylhsNonterm (yyrule)),
                  yyposn, &yyval, &yyloc);
    }
  else
    {
      YYPTRDIFF_T yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yy_state_t yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
           0 < yyn; yyn -= 1)
        {
          yys = yys->yypred;
          YY_ASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YY_DPRINTF ((stderr,
                   "Reduced stack %ld by rule %d (line %d); action deferred.  "
                   "Now in state %d.\n",
                   YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule],
                   yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
        if (yyi != yyk && yystackp->yytops.yystates[yyi] != YY_NULLPTR)
          {
            yyGLRState *yysplit = yystackp->yysplitPoint;
            yyGLRState *yyp = yystackp->yytops.yystates[yyi];
            while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
              {
                if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
                  {
                    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
                    yymarkStackDeleted (yystackp, yyk);
                    YY_DPRINTF ((stderr, "Merging stack %ld into stack %ld.\n",
                                 YY_CAST (long, yyk), YY_CAST (long, yyi)));
                    return yyok;
                  }
                yyp = yyp->yypred;
              }
          }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static YYPTRDIFF_T
yysplitStack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      YY_ASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yycapacity <= yystackp->yytops.yysize)
    {
      YYPTRDIFF_T state_size = YYSIZEOF (yystackp->yytops.yystates[0]);
      YYPTRDIFF_T half_max_capacity = YYSIZE_MAXIMUM / 2 / state_size;
      if (half_max_capacity < yystackp->yytops.yycapacity)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      {
        yyGLRState** yynewStates
          = YY_CAST (yyGLRState**,
                     YYREALLOC (yystackp->yytops.yystates,
                                (YY_CAST (YYSIZE_T, yystackp->yytops.yycapacity)
                                 * sizeof yynewStates[0])));
        if (yynewStates == YY_NULLPTR)
          yyMemoryExhausted (yystackp);
        yystackp->yytops.yystates = yynewStates;
      }

      {
        yybool* yynewLookaheadNeeds
          = YY_CAST (yybool*,
                     YYREALLOC (yystackp->yytops.yylookaheadNeeds,
                                (YY_CAST (YYSIZE_T, yystackp->yytops.yycapacity)
                                 * sizeof yynewLookaheadNeeds[0])));
        if (yynewLookaheadNeeds == YY_NULLPTR)
          yyMemoryExhausted (yystackp);
        yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
      }
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize - 1;
}

/** True iff YYY0 and YYY1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
           yyn = yyrhsLength (yyy0->yyrule);
           yyn > 0;
           yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
        if (yys0->yyposn != yys1->yyposn)
          return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (YYY0,YYY1), destructively merge the
 *  alternative semantic values for the RHS-symbols of YYY1 and YYY0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       0 < yyn;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
        break;
      else if (yys0->yyresolved)
        {
          yys1->yyresolved = yytrue;
          yys1->yysemantics.yyval = yys0->yysemantics.yyval;
        }
      else if (yys1->yyresolved)
        {
          yys0->yyresolved = yytrue;
          yys0->yysemantics.yyval = yys1->yysemantics.yyval;
        }
      else
        {
          yySemanticOption** yyz0p = &yys0->yysemantics.yyfirstVal;
          yySemanticOption* yyz1 = yys1->yysemantics.yyfirstVal;
          while (yytrue)
            {
              if (yyz1 == *yyz0p || yyz1 == YY_NULLPTR)
                break;
              else if (*yyz0p == YY_NULLPTR)
                {
                  *yyz0p = yyz1;
                  break;
                }
              else if (*yyz0p < yyz1)
                {
                  yySemanticOption* yyz = *yyz0p;
                  *yyz0p = yyz1;
                  yyz1 = yyz1->yynext;
                  (*yyz0p)->yynext = yyz;
                }
              yyz0p = &(*yyz0p)->yynext;
            }
          yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
        }
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
        return 0;
      else
        return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp, yyscan_t scanner, omnetpp::nedxml::ParseContext *np);


/** Resolve the previous YYN states starting at and including state YYS
 *  on *YYSTACKP. If result != yyok, some states may have been left
 *  unresolved possibly with empty semantic option chains.  Regardless
 *  of whether result = yyok, each state has been left with consistent
 *  data so that yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
                 yyGLRStack* yystackp, yyscan_t scanner, omnetpp::nedxml::ParseContext *np)
{
  if (0 < yyn)
    {
      YY_ASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp, scanner, np));
      if (! yys->yyresolved)
        YYCHK (yyresolveValue (yys, yystackp, scanner, np));
    }
  return yyok;
}

/** Resolve the states for the RHS of YYOPT on *YYSTACKP, perform its
 *  user action, and return the semantic value and location in *YYVALP
 *  and *YYLOCP.  Regardless of whether result = yyok, all RHS states
 *  have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
                 YYSTYPE* yyvalp, YYLTYPE *yylocp, yyscan_t scanner, omnetpp::nedxml::ParseContext *np)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs = yyrhsLength (yyopt->yyrule);
  YYRESULTTAG yyflag =
    yyresolveStates (yyopt->yystate, yynrhs, yystackp, scanner, np);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
        yydestroyGLRState ("Cleanup: popping", yys, scanner, np);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  if (yynrhs == 0)
    /* Set default location.  */
    yyrhsVals[YYMAXRHS + YYMAXLEFT - 1].yystate.yyloc = yyopt->yystate->yyloc;
  {
    int yychar_current = yychar;
    YYSTYPE yylval_current = yylval;
    YYLTYPE yylloc_current = yylloc;
    yychar = yyopt->yyrawchar;
    yylval = yyopt->yyval;
    yylloc = yyopt->yyloc;
    yyflag = yyuserAction (yyopt->yyrule, yynrhs,
                           yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, -1, yyvalp, yylocp, scanner, np);
    yychar = yychar_current;
    yylval = yylval_current;
    yylloc = yylloc_current;
  }
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == YY_NULLPTR)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YY_FPRINTF ((stderr, "%*s%s -> <Rule %d, empty>\n",
                 yyindent, "", yysymbol_name (yylhsNonterm (yyx->yyrule)),
                 yyx->yyrule - 1));
  else
    YY_FPRINTF ((stderr, "%*s%s -> <Rule %d, tokens %ld .. %ld>\n",
                 yyindent, "", yysymbol_name (yylhsNonterm (yyx->yyrule)),
                 yyx->yyrule - 1, YY_CAST (long, yys->yyposn + 1),
                 YY_CAST (long, yyx->yystate->yyposn)));
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
        {
          if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
            YY_FPRINTF ((stderr, "%*s%s <empty>\n", yyindent+2, "",
                         yysymbol_name (yy_accessing_symbol (yystates[yyi]->yylrState))));
          else
            YY_FPRINTF ((stderr, "%*s%s <tokens %ld .. %ld>\n", yyindent+2, "",
                         yysymbol_name (yy_accessing_symbol (yystates[yyi]->yylrState)),
                         YY_CAST (long, yystates[yyi-1]->yyposn + 1),
                         YY_CAST (long, yystates[yyi]->yyposn)));
        }
      else
        yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
                   yySemanticOption* yyx1, YYLTYPE *yylocp, yyscan_t scanner, omnetpp::nedxml::ParseContext *np)
{
  YY_USE (yyx0);
  YY_USE (yyx1);

#if YYDEBUG
  YY_FPRINTF ((stderr, "Ambiguity detected.\n"));
  YY_FPRINTF ((stderr, "Option 1,\n"));
  yyreportTree (yyx0, 2);
  YY_FPRINTF ((stderr, "\nOption 2,\n"));
  yyreportTree (yyx1, 2);
  YY_FPRINTF ((stderr, "\n"));
#endif

  yyerror (yylocp, scanner, np, YY_("syntax is ambiguous"));
  return yyabort;
}

/** Resolve the locations for each of the YYN1 states in *YYSTACKP,
 *  ending at YYS1.  Has no effect on previously resolved states.
 *  The first semantic option of a state is always chosen.  */
static void
yyresolveLocations (yyGLRState *yys1, int yyn1,
                    yyGLRStack *yystackp, yyscan_t scanner, omnetpp::nedxml::ParseContext *np)
{
  if (0 < yyn1)
    {
      yyresolveLocations (yys1->yypred, yyn1 - 1, yystackp, scanner, np);
      if (!yys1->yyresolved)
        {
          yyGLRStackItem yyrhsloc[1 + YYMAXRHS];
          int yynrhs;
          yySemanticOption *yyoption = yys1->yysemantics.yyfirstVal;
          YY_ASSERT (yyoption);
          yynrhs = yyrhsLength (yyoption->yyrule);
          if (0 < yynrhs)
            {
              yyGLRState *yys;
              int yyn;
              yyresolveLocations (yyoption->yystate, yynrhs,
                                  yystackp, scanner, np);
              for (yys = yyoption->yystate, yyn = yynrhs;
                   yyn > 0;
                   yys = yys->yypred, yyn -= 1)
                yyrhsloc[yyn].yystate.yyloc = yys->yyloc;
            }
          else
            {
              /* Both yyresolveAction and yyresolveLocations traverse the GSS
                 in reverse rightmost order.  It is only necessary to invoke
                 yyresolveLocations on a subforest for which yyresolveAction
                 would have been invoked next had an ambiguity not been
                 detected.  Thus the location of the previous state (but not
                 necessarily the previous state itself) is guaranteed to be
                 resolved already.  */
              yyGLRState *yyprevious = yyoption->yystate;
              yyrhsloc[0].yystate.yyloc = yyprevious->yyloc;
            }
          YYLLOC_DEFAULT ((yys1->yyloc), yyrhsloc, yynrhs);
        }
    }
}

/** Resolve the ambiguity represented in state YYS in *YYSTACKP,
 *  perform the indicated actions, and set the semantic value of YYS.
 *  If result != yyok, the chain of semantic options in YYS has been
 *  cleared instead or it has been left unmodified except that
 *  redundant options may have been removed.  Regardless of whether
 *  result = yyok, YYS has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp, yyscan_t scanner, omnetpp::nedxml::ParseContext *np)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest = yyoptionList;
  yySemanticOption** yypp;
  yybool yymerge = yyfalse;
  YYSTYPE yyval;
  YYRESULTTAG yyflag;
  YYLTYPE *yylocp = &yys->yyloc;

  for (yypp = &yyoptionList->yynext; *yypp != YY_NULLPTR; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
        {
          yymergeOptionSets (yybest, yyp);
          *yypp = yyp->yynext;
        }
      else
        {
          switch (yypreference (yybest, yyp))
            {
            case 0:
              yyresolveLocations (yys, 1, yystackp, scanner, np);
              return yyreportAmbiguity (yybest, yyp, yylocp, scanner, np);
              break;
            case 1:
              yymerge = yytrue;
              break;
            case 2:
              break;
            case 3:
              yybest = yyp;
              yymerge = yyfalse;
              break;
            default:
              /* This cannot happen so it is not worth a YY_ASSERT (yyfalse),
                 but some compilers complain if the default case is
                 omitted.  */
              break;
            }
          yypp = &yyp->yynext;
        }
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yyval, yylocp, scanner, np);
      if (yyflag == yyok)
        for (yyp = yybest->yynext; yyp != YY_NULLPTR; yyp = yyp->yynext)
          {
            if (yyprec == yydprec[yyp->yyrule])
              {
                YYSTYPE yyval_other;
                YYLTYPE yydummy;
                yyflag = yyresolveAction (yyp, yystackp, &yyval_other, &yydummy, scanner, np);
                if (yyflag != yyok)
                  {
                    yydestruct ("Cleanup: discarding incompletely merged value for",
                                yy_accessing_symbol (yys->yylrState),
                                &yyval, yylocp, scanner, np);
                    break;
                  }
                yyuserMerge (yymerger[yyp->yyrule], &yyval, &yyval_other);
              }
          }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yyval, yylocp, scanner, np);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yyval = yyval;
    }
  else
    yys->yysemantics.yyfirstVal = YY_NULLPTR;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp, yyscan_t scanner, omnetpp::nedxml::ParseContext *np)
{
  if (yystackp->yysplitPoint != YY_NULLPTR)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
           yys != yystackp->yysplitPoint;
           yys = yys->yypred, yyn += 1)
        continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
                             , scanner, np));
    }
  return yyok;
}

/** Called when returning to deterministic operation to clean up the extra
 * stacks. */
static void
yycompressStack (yyGLRStack* yystackp)
{
  /* yyr is the state after the split point.  */
  yyGLRState *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == YY_NULLPTR)
    return;

  {
    yyGLRState *yyp, *yyq;
    for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = YY_NULLPTR;
         yyp != yystackp->yysplitPoint;
         yyr = yyp, yyp = yyq, yyq = yyp->yypred)
      yyp->yypred = yyr;
  }

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = YY_REINTERPRET_CAST (yyGLRStackItem*, yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;

  while (yyr != YY_NULLPTR)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, YYPTRDIFF_T yyk,
                   YYPTRDIFF_T yyposn, YYLTYPE *yylocp, yyscan_t scanner, omnetpp::nedxml::ParseContext *np)
{
  while (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    {
      yy_state_t yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YY_DPRINTF ((stderr, "Stack %ld Entering state %d\n",
                   YY_CAST (long, yyk), yystate));

      YY_ASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
        {
          YYRESULTTAG yyflag;
          yyRuleNum yyrule = yydefaultAction (yystate);
          if (yyrule == 0)
            {
              YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          yyflag = yyglrReduce (yystackp, yyk, yyrule, yyimmediate[yyrule], scanner, np);
          if (yyflag == yyerr)
            {
              YY_DPRINTF ((stderr,
                           "Stack %ld dies "
                           "(predicate failure or explicit user error).\n",
                           YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          if (yyflag != yyok)
            return yyflag;
        }
      else
        {
          yysymbol_kind_t yytoken = yygetToken (&yychar, yystackp, scanner, np);
          const short* yyconflicts;
          const int yyaction = yygetLRActions (yystate, yytoken, &yyconflicts);
          yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;

          for (/* nothing */; *yyconflicts; yyconflicts += 1)
            {
              YYRESULTTAG yyflag;
              YYPTRDIFF_T yynewStack = yysplitStack (yystackp, yyk);
              YY_DPRINTF ((stderr, "Splitting off stack %ld from %ld.\n",
                           YY_CAST (long, yynewStack), YY_CAST (long, yyk)));
              yyflag = yyglrReduce (yystackp, yynewStack,
                                    *yyconflicts,
                                    yyimmediate[*yyconflicts], scanner, np);
              if (yyflag == yyok)
                YYCHK (yyprocessOneStack (yystackp, yynewStack,
                                          yyposn, yylocp, scanner, np));
              else if (yyflag == yyerr)
                {
                  YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yynewStack)));
                  yymarkStackDeleted (yystackp, yynewStack);
                }
              else
                return yyflag;
            }

          if (yyisShiftAction (yyaction))
            break;
          else if (yyisErrorAction (yyaction))
            {
              YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              break;
            }
          else
            {
              YYRESULTTAG yyflag = yyglrReduce (yystackp, yyk, -yyaction,
                                                yyimmediate[-yyaction], scanner, np);
              if (yyflag == yyerr)
                {
                  YY_DPRINTF ((stderr,
                               "Stack %ld dies "
                               "(predicate failure or explicit user error).\n",
                               YY_CAST (long, yyk)));
                  yymarkStackDeleted (yystackp, yyk);
                  break;
                }
              else if (yyflag != yyok)
                return yyflag;
            }
        }
    }
  return yyok;
}






static void
yyreportSyntaxError (yyGLRStack* yystackp, yyscan_t scanner, omnetpp::nedxml::ParseContext *np)
{
  if (yystackp->yyerrState != 0)
    return;
  yyerror (&yylloc, scanner, np, YY_("syntax error"));
  yynerrs += 1;
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
static void
yyrecoverSyntaxError (yyGLRStack* yystackp, yyscan_t scanner, omnetpp::nedxml::ParseContext *np)
{
  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (yytrue)
      {
        yysymbol_kind_t yytoken;
        int yyj;
        if (yychar == YYEOF)
          yyFail (yystackp, &yylloc, scanner, np, YY_NULLPTR);
        if (yychar != YYEMPTY)
          {
            /* We throw away the lookahead, but the error range
               of the shifted error token must take it into account.  */
            yyGLRState *yys = yystackp->yytops.yystates[0];
            yyGLRStackItem yyerror_range[3];
            yyerror_range[1].yystate.yyloc = yys->yyloc;
            yyerror_range[2].yystate.yyloc = yylloc;
            YYLLOC_DEFAULT ((yys->yyloc), yyerror_range, 2);
            yytoken = YYTRANSLATE (yychar);
            yydestruct ("Error: discarding",
                        yytoken, &yylval, &yylloc, scanner, np);
            yychar = YYEMPTY;
          }
        yytoken = yygetToken (&yychar, yystackp, scanner, np);
        yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
        if (yypact_value_is_default (yyj))
          return;
        yyj += yytoken;
        if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
          {
            if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
              return;
          }
        else if (! yytable_value_is_error (yytable[yyj]))
          return;
      }

  /* Reduce to one stack.  */
  {
    YYPTRDIFF_T yyk;
    for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
      if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
        break;
    if (yyk >= yystackp->yytops.yysize)
      yyFail (yystackp, &yylloc, scanner, np, YY_NULLPTR);
    for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
      yymarkStackDeleted (yystackp, yyk);
    yyremoveDeletes (yystackp);
    yycompressStack (yystackp);
  }

  /* Pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != YY_NULLPTR)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      int yyj = yypact[yys->yylrState];
      if (! yypact_value_is_default (yyj))
        {
          yyj += YYSYMBOL_YYerror;
          if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYSYMBOL_YYerror
              && yyisShiftAction (yytable[yyj]))
            {
              /* Shift the error token.  */
              int yyaction = yytable[yyj];
              /* First adjust its location.*/
              YYLTYPE yyerrloc;
              yystackp->yyerror_range[2].yystate.yyloc = yylloc;
              YYLLOC_DEFAULT (yyerrloc, (yystackp->yyerror_range), 2);
              YY_SYMBOL_PRINT ("Shifting", yy_accessing_symbol (yyaction),
                               &yylval, &yyerrloc);
              yyglrShift (yystackp, 0, yyaction,
                          yys->yyposn, &yylval, &yyerrloc);
              yys = yystackp->yytops.yystates[0];
              break;
            }
        }
      yystackp->yyerror_range[1].yystate.yyloc = yys->yyloc;
      if (yys->yypred != YY_NULLPTR)
        yydestroyGLRState ("Error: popping", yys, scanner, np);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == YY_NULLPTR)
    yyFail (yystackp, &yylloc, scanner, np, YY_NULLPTR);
}

#define YYCHK1(YYE)                             \
  do {                                          \
    switch (YYE) {                              \
    case yyok:     break;                       \
    case yyabort:  goto yyabortlab;             \
    case yyaccept: goto yyacceptlab;            \
    case yyerr:    goto yyuser_error;           \
    case yynomem:  goto yyexhaustedlab;         \
    default:       goto yybuglab;               \
    }                                           \
  } while (0)

/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner, omnetpp::nedxml::ParseContext *np)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  YYPTRDIFF_T yyposn;

  YY_DPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;
  yylloc = yyloc_default;

  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval, &yylloc);
  yyposn = 0;

  while (yytrue)
    {
      /* For efficiency, we have two loops, the first of which is
         specialized to deterministic operation (single stack, no
         potential ambiguity).  */
      /* Standard mode. */
      while (yytrue)
        {
          yy_state_t yystate = yystack.yytops.yystates[0]->yylrState;
          YY_DPRINTF ((stderr, "Entering state %d\n", yystate));
          if (yystate == YYFINAL)
            goto yyacceptlab;
          if (yyisDefaultedState (yystate))
            {
              yyRuleNum yyrule = yydefaultAction (yystate);
              if (yyrule == 0)
                {
                  yystack.yyerror_range[1].yystate.yyloc = yylloc;
                  yyreportSyntaxError (&yystack, scanner, np);
                  goto yyuser_error;
                }
              YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue, scanner, np));
            }
          else
            {
              yysymbol_kind_t yytoken = yygetToken (&yychar, yystackp, scanner, np);
              const short* yyconflicts;
              int yyaction = yygetLRActions (yystate, yytoken, &yyconflicts);
              if (*yyconflicts)
                /* Enter nondeterministic mode.  */
                break;
              if (yyisShiftAction (yyaction))
                {
                  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
                  yychar = YYEMPTY;
                  yyposn += 1;
                  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval, &yylloc);
                  if (0 < yystack.yyerrState)
                    yystack.yyerrState -= 1;
                }
              else if (yyisErrorAction (yyaction))
                {
                  yystack.yyerror_range[1].yystate.yyloc = yylloc;
                  /* Issue an error message unless the scanner already
                     did. */
                  if (yychar != YYerror)
                    yyreportSyntaxError (&yystack, scanner, np);
                  goto yyuser_error;
                }
              else
                YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue, scanner, np));
            }
        }

      /* Nondeterministic mode. */
      while (yytrue)
        {
          yysymbol_kind_t yytoken_to_shift;
          YYPTRDIFF_T yys;

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

          /* yyprocessOneStack returns one of three things:

              - An error flag.  If the caller is yyprocessOneStack, it
                immediately returns as well.  When the caller is finally
                yyparse, it jumps to an error label via YYCHK1.

              - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
                (&yystack, yys), which sets the top state of yys to NULL.  Thus,
                yyparse's following invocation of yyremoveDeletes will remove
                the stack.

              - yyok, when ready to shift a token.

             Except in the first case, yyparse will invoke yyremoveDeletes and
             then shift the next token onto all remaining stacks.  This
             synchronization of the shift (that is, after all preceding
             reductions on all stacks) helps prevent double destructor calls
             on yylval in the event of memory exhaustion.  */

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn, &yylloc, scanner, np));
          yyremoveDeletes (&yystack);
          if (yystack.yytops.yysize == 0)
            {
              yyundeleteLastStack (&yystack);
              if (yystack.yytops.yysize == 0)
                yyFail (&yystack, &yylloc, scanner, np, YY_("syntax error"));
              YYCHK1 (yyresolveStack (&yystack, scanner, np));
              YY_DPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yystack.yyerror_range[1].yystate.yyloc = yylloc;
              yyreportSyntaxError (&yystack, scanner, np);
              goto yyuser_error;
            }

          /* If any yyglrShift call fails, it will fail after shifting.  Thus,
             a copy of yylval will already be on stack 0 in the event of a
             failure in the following loop.  Thus, yychar is set to YYEMPTY
             before the loop to make sure the user destructor for yylval isn't
             called twice.  */
          yytoken_to_shift = YYTRANSLATE (yychar);
          yychar = YYEMPTY;
          yyposn += 1;
          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            {
              yy_state_t yystate = yystack.yytops.yystates[yys]->yylrState;
              const short* yyconflicts;
              int yyaction = yygetLRActions (yystate, yytoken_to_shift,
                              &yyconflicts);
              /* Note that yyconflicts were handled by yyprocessOneStack.  */
              YY_DPRINTF ((stderr, "On stack %ld, ", YY_CAST (long, yys)));
              YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
              yyglrShift (&yystack, yys, yyaction, yyposn,
                          &yylval, &yylloc);
              YY_DPRINTF ((stderr, "Stack %ld now in state %d\n",
                           YY_CAST (long, yys),
                           yystack.yytops.yystates[yys]->yylrState));
            }

          if (yystack.yytops.yysize == 1)
            {
              YYCHK1 (yyresolveStack (&yystack, scanner, np));
              YY_DPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yycompressStack (&yystack);
              break;
            }
        }
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack, scanner, np);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;

 yybuglab:
  YY_ASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturnlab;

 yyexhaustedlab:
  yyerror (&yylloc, scanner, np, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;

 yyreturnlab:
  if (yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
                YYTRANSLATE (yychar), &yylval, &yylloc, scanner, np);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
        {
          YYPTRDIFF_T yysize = yystack.yytops.yysize;
          YYPTRDIFF_T yyk;
          for (yyk = 0; yyk < yysize; yyk += 1)
            if (yystates[yyk])
              {
                while (yystates[yyk])
                  {
                    yyGLRState *yys = yystates[yyk];
                    yystack.yyerror_range[1].yystate.yyloc = yys->yyloc;
                    if (yys->yypred != YY_NULLPTR)
                      yydestroyGLRState ("Cleanup: popping", yys, scanner, np);
                    yystates[yyk] = yys->yypred;
                    yystack.yynextFree -= 1;
                    yystack.yyspaceLeft += 1;
                  }
                break;
              }
        }
      yyfreeGLRStack (&yystack);
    }

  return yyresult;
}

/* DEBUGGING ONLY */
#if YYDEBUG
/* Print *YYS and its predecessors. */
static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YY_FPRINTF ((stderr, " -> "));
    }
  YY_FPRINTF ((stderr, "%d@%ld", yys->yylrState, YY_CAST (long, yys->yyposn)));
}

/* Print YYS (possibly NULL) and its predecessors. */
static void
yypstates (yyGLRState* yys)
{
  if (yys == YY_NULLPTR)
    YY_FPRINTF ((stderr, "<null>"));
  else
    yy_yypstack (yys);
  YY_FPRINTF ((stderr, "\n"));
}

/* Print the stack #YYK.  */
static void
yypstack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

/* Print all the stacks.  */
static void
yypdumpstack (yyGLRStack* yystackp)
{
#define YYINDEX(YYX)                                                    \
  YY_CAST (long,                                                        \
           ((YYX)                                                       \
            ? YY_REINTERPRET_CAST (yyGLRStackItem*, (YYX)) - yystackp->yyitems \
            : -1))

  yyGLRStackItem* yyp;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YY_FPRINTF ((stderr, "%3ld. ",
                   YY_CAST (long, yyp - yystackp->yyitems)));
      if (*YY_REINTERPRET_CAST (yybool *, yyp))
        {
          YY_ASSERT (yyp->yystate.yyisState);
          YY_ASSERT (yyp->yyoption.yyisState);
          YY_FPRINTF ((stderr, "Res: %d, LR State: %d, posn: %ld, pred: %ld",
                       yyp->yystate.yyresolved, yyp->yystate.yylrState,
                       YY_CAST (long, yyp->yystate.yyposn),
                       YYINDEX (yyp->yystate.yypred)));
          if (! yyp->yystate.yyresolved)
            YY_FPRINTF ((stderr, ", firstVal: %ld",
                         YYINDEX (yyp->yystate.yysemantics.yyfirstVal)));
        }
      else
        {
          YY_ASSERT (!yyp->yystate.yyisState);
          YY_ASSERT (!yyp->yyoption.yyisState);
          YY_FPRINTF ((stderr, "Option. rule: %d, state: %ld, next: %ld",
                       yyp->yyoption.yyrule - 1,
                       YYINDEX (yyp->yyoption.yystate),
                       YYINDEX (yyp->yyoption.yynext)));
        }
      YY_FPRINTF ((stderr, "\n"));
    }

  YY_FPRINTF ((stderr, "Tops:"));
  {
    YYPTRDIFF_T yyi;
    for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
      YY_FPRINTF ((stderr, "%ld: %ld; ", YY_CAST (long, yyi),
                   YYINDEX (yystackp->yytops.yystates[yyi])));
    YY_FPRINTF ((stderr, "\n"));
  }
#undef YYINDEX
}
#endif

#undef yylval
#undef yychar
#undef yynerrs
#undef yylloc

/* Substitute the variable and function names.  */
#define yyparse ned2yyparse
#define yylex   ned2yylex
#define yyerror ned2yyerror
#define yylval  ned2yylval
#define yychar  ned2yychar
#define yydebug ned2yydebug
#define yynerrs ned2yynerrs
#define yylloc  ned2yylloc


#line 1710 "ned2.y"


#include "ned2.lex.h"

ASTNode *doParseNed(ParseContext *np)
{
    DETECT_PARSER_REENTRY();

    // create parser state and NedFileElement
    resetParserState();
    ps.nedfile = new NedFileElement();

    // store file name with slashes always, even on Windows -- neddoc relies on that
    ps.nedfile->setFilename(slashifyFilename(np->getFileName()).c_str());
    ps.nedfile->setVersion("2");

    // storing the start and end position of the whole file for the NedFileElement
    // NOTE: we cannot use storePos() because it strips off the leading spaces
    // and comments from the element.
    YYLTYPE pos = np->getSource()->getFullTextPos();
    SourceRegion region;
    region.startLine = pos.first_line;
    region.startColumn = pos.first_column;
    region.endLine = pos.last_line;
    region.endColumn = pos.last_column;
    ps.nedfile->setSourceRegion(region);

    // store file comment
    storeFileComment(np, ps.nedfile);

    ps.propertyscope.push(ps.nedfile);

    globalps = ps; // remember this for error recovery

    if (np->getStoreSourceFlag())
        storeSourceCode(np, ps.nedfile, np->getSource()->getFullTextPos());

    yyscan_t scanner;
    ned2yylex_init(&scanner);

    yy_buffer_state *handle = ned2yy_scan_string(np->getSource()->getFullText(), scanner);

    //ned2yyset_debug(1, scanner);
    //ned2yydebug = 1;

    // parse
    try
    {
        ned2yyparse(scanner,np);
    }
    catch (NedException& e)
    {
        ned2yyerror(ned2yyget_lloc(scanner), scanner, np, (std::string("error during parsing: ")+e.what()).c_str());
        ned2yy_delete_buffer(handle, scanner);
        ned2yylex_destroy(scanner);
        return nullptr;
    }
    ned2yy_delete_buffer(handle, scanner);
    ned2yylex_destroy(scanner);

    if (np->getErrors()->empty())
    {
        // more sanity checks
        if (ps.propertyscope.size()!=1 || ps.propertyscope.top()!=ps.nedfile)
            INTERNAL_ERROR0(nullptr, "error during parsing: imbalanced propertyscope");
        if (!ps.blockscope.empty() || !ps.typescope.empty())
            INTERNAL_ERROR0(nullptr, "error during parsing: imbalanced blockscope or typescope");
    }

    return ps.nedfile;
}

void yyerror(YYLTYPE *yyllocp, yyscan_t scanner, ParseContext *np, const char *msg)
{
    np->error(opp_removeend(msg, "\n").c_str(), yyllocp->first_line);
}

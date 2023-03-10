
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     MAIN = 258,
     INT = 259,
     FLOAT = 260,
     CHAR = 261,
     POW = 262,
     FACTO = 263,
     PRIME = 264,
     READ = 265,
     PRINT = 266,
     SWITCH = 267,
     CASE = 268,
     DEFAULT = 269,
     IF = 270,
     ELIF = 271,
     ELSE = 272,
     WHILE = 273,
     INC = 274,
     DEC = 275,
     MAX = 276,
     MIN = 277,
     COMMA = 278,
     PLUS = 279,
     MINUS = 280,
     MUL = 281,
     DIV = 282,
     ASSIGN = 283,
     EQUAL = 284,
     FUNC = 285,
     HEADER = 286,
     NOTEQUAL = 287,
     GT = 288,
     GAE = 289,
     LT = 290,
     LAE = 291,
     ID = 292,
     REALNUM = 293,
     INTNUM = 294,
     FBS = 295,
     FBC = 296,
     SBS = 297,
     SBC = 298,
     SCOLON = 299,
     COLON = 300,
     INPUT = 301,
     OUT = 302,
     nul = 303,
     RET = 304,
     AND = 305,
     OR = 306,
     FOR = 307,
     NOT = 308,
     BITWISEAND = 309,
     BITWISEOR = 310,
     MOD = 311
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 35 "fp.y"

  struct abc {
    int ival;
    float fval;
    char *str;
    char *type;
  }uni_var;



/* Line 1676 of yacc.c  */
#line 119 "fp.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;



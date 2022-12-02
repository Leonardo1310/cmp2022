
%{
	#include <stdio.h>
	#include "header.h"
	#include "calc.tab.h"
%}

%option yylineno

D	[0-9]
L	[a-zA-Z_]

%% 

[ \t\r\n]				{}
"olhaogol"				{ return TOK_OLHAOGOL; } // PRINT
"="					{ return '=';  }
"*"					{ return '*'; }
"/"					{ return '/'; }
"+"					{ return '+'; }
"-"					{ return '-'; }
"("					{ return '('; }
")"					{ return ')'; }
"^"					{ return '^'; }

[<>!{}]				{ return yytext[0]; }
"eagora"				{ return TOK_EAGORA; } // e
"podeissoarnaldo"			{ return TOK_PODEISSOARNALDO; } // ou
"quemequesobe"				{ return TOK_QUEMEQUESOBE; } //if
"aicomplica"				{ return TOK_AICOMPLICA; } //else
"elesosabefazerisso"			{ return TOK_ELESOSABEFAZERISSO; } //while

{D}+				{ yylval.args.intv = atoi(yytext);
					  return TOK_INTEGER; }

{D}+\.{D}+			{ yylval.args.dblv = atof(yytext);
					  return TOK_FLOAT; }

{L}({L}|{D})*		{ yylval.args.ident = strndup(yytext, yyleng);
					  return TOK_IDENT; }
 /* [a-zA-Z_][a-zA-Z0-9_]* {} */


 /* comentário */
.					{ printf("Invalid caracter: %c.\n", yytext[0]); }

%%

int yywrap() {
	return 1;
}

int main(int argc, char *argv[]) {
	
	if (argc <= 1) {
		printf("%s [file]\n", argv[0]);
		return 1;
	}

	FILE *f = fopen(argv[1], "r");
	yyin = f;
	yyparse();
	fclose(f);
	return 0;
}


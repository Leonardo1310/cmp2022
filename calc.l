
%{
	#include <stdio.h>
%}

%option yylineno


L  [a-zA-Z_]+
N  [0-9]+

%%

 "print"	{printf("TOK_PRINT\n");}
 "="    	{printf("TOK_EQUAL");}
 "*"   	{printf("TOK_MULTIPLY\n");}
 "/"		{printf("TOK_DIVIDE\n");}
 "+"   	{printf("TOK_PLUS\n");}
 "-"   	{printf("TOK_MINUS\n");}
 "("		{printf("TOK_OP\n");}
 ")"		{printf("TOK_CP\n");}

 {N}   	printf("TOK_INTEGER<%s>\n", yytext);}
 {N}\.{N}	printf("TOK_FLOAT<%s>\n", yytext);}
 {L}({L}|{N})*	printf("TOK_LITERAL<%s>\n", yytext);}
 
 .		printf("Invalid character: %c.\n"), yytext[0]);}
 
%%

%{
	
int main (int argc, char *argv[]) {

	if(argc <= 1){
		printf("%s [file]\n", argv[0]);
		return 1;
	}
	
	FILE *f = fopen(argv[1], "r");
	yyin =f;
	yylex();
	fclose(f);
	
	return 0;
}

%}

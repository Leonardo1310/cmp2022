all:
	flex calc.l
	bison -d calc.y
	gcc -O0 -ggdb calc.tab.c lex.yy.c header.c -o calcmp

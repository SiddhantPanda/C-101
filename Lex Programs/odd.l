%{
	#include<stdio.h>
%}
%%
(\".\") {printf("String");}
%%
int yywrap()
{
	return 1;
}
int main()
{
	yyin = fopen("out.c","r");
	yylex();
	fclose(yyin);
	return 0;
}

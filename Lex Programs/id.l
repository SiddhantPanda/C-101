%{
#include<stdio.h>
%}
%%
^[a-z A-Z _][a-z A-Z 0-9 _]* printf("Valid id");
^[^a-z A-Z _] printf("Invalid id");
. ;
%%
int yywrap(){}
int main()
{
	yylex();
	return 0;
}

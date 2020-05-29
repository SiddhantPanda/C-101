%{
#include<stdio.h>
%}

%%
\/\/(.*) { }
\/\*.*\n*.*\*\/ { }
%%
int yywrap(){return 1;}
int main()
{
yyin = fopen("sample.c","r");
yyout = fopen("s.c","w");
yylex();
return 1;
}

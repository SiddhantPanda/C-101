%{
#include<stdio.h>
%}
keyword main|int|scanf|printf|for|while|if|else
%%
{keyword} { printf("Valid keyword");}
. {printf("Invalid keyword");}
%%
int yywrap(){}
int main()
{
yylex();
return 0;
}

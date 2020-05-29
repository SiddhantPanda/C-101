%{
#include<stdio.h>
%}
%%
[1-9][0-9]{9} {printf("\n Valid\n");}
.+ {printf("\n Invalid\n");}
%%
int yywrap(){}
int main()
{
printf("Enter mobile number: ");
yylex();
printf("\n");
return 0;
}

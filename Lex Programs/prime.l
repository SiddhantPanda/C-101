%{
#include<stdio.h>
#include<stdlib.h>
int f,c,j;
%}
%%
[0-9]+ {c=atoi(yytext);
	if(c==2)
	{
		printf("\n Prime number");
	}
	else if(c==0||c==1)
	{
		printf("\n Not prime");
	}
	else
	{
		for(j=2;j<c/2;j++)
		{
			if(c%j==0) f=1;
		}
		if(f==1) printf("\nNot a prime");
		else if(f==0) printf("\n Prime");
	}
}
%%
int yywrap(){}
int main()
{
yylex();
return 0;
}

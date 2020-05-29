%{
	#include<stdio.h>
	int lc=0,sc=0,tc=0,ch=0;
%}
%%
\n lc++;
([ ])+ sc++;
\t tc++;
. ch++;
%%
int yywrap(){return 1;}
int main()
{
	yyin = fopen("text.txt","r");
	yylex();
	printf("\n Lines:%d",lc);
	printf("\n Spaces:%d",sc);
	printf("\n Tabs:%d",tc);
	printf("\n Characters:%d",ch);
	fclose(yyin);
	return 1;
}


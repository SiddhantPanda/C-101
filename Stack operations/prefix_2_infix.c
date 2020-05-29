//Program to convert a post-fix operation to infix and to get the result
#include<stdio.h>
#include<stdlib.h>
int top=-1;
void push(char stack[50],char num);
char pop(char stack[50]);
main()
{
	char exp[50],stack[50],ch;
        int a1,a2,result;
	int i;
	printf("\n Enter the postfix expression \n");
	scanf("%s",exp);
	for(i=0;exp[i]!='\0';i++);
        i--;
	while(i>=0)
	{
		ch=exp[i];
		switch(ch)
		{
			case '+' : a1=(int)(pop(stack)-48);
				   a2=(int)(pop(stack)-48);
				   result=a1+a2;
				   push(stack,(char)(result+48));
				   break;
			case '-': a1=(int)(pop(stack)-48);
				   a2=(int)(pop(stack)-48);
				  result=(char)a1-a2;
				  push(stack,(char)(result+48));
				  break;
			case '*': a1=(int)(pop(stack)-48);
				  a2=(int)(pop(stack)-48);
				  result=(char)a1*a2;
				  push(stack,(char)(result+48));
				  break;
			case '/': a1=(int)(pop(stack)-48);
				  a2=(int)(pop(stack)-48);
				  result=(char)a1/a2;
				  push(stack,(char)(result+48));
				  break;
			default : push(stack,ch);
				  break;
		}
		i--;
	}
	printf("\n The result is %d \n",(pop(stack)-48));
}

void push(char stack[50],char ch)
{
if(top==50)
   {
     printf("\n Stack is Overflow!!! Sorry can't inert more \n");
   }
else
{
top++;
stack[top]=ch;
}
}


char pop(char stack[50])
{
    char ele;
	if(top==-1)
	{
		ele=' ';
		return ele;
	}
	else
	{
	        ele=stack[top];
	        top--;
	        return ele;
	}
}



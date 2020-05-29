//To check Whether a given expression has balanced parameters or not
#include<stdio.h>
#include<stdlib.h>
int top=-1;
void push(char stack[50],char ch);
char pop(char stack[50]);
main()
{
	char exp[50],ch,ch1,stack[50];
	int i=0;
	printf("\n Enter an expression to check for balanced parameters \n");
	scanf(" %s",exp);
	while(exp[i]!='\0')
	{
		ch=exp[i];
		switch(ch)
		{
			case '(': push(stack,ch);
				  break;
			case '{': push(stack,ch);
				  break;
			case '[': push(stack,ch);
				  break;
			case ')': ch1=pop(stack);
				  if(ch1!='(')
				  {
					  printf("\n The equation is unbalanced \n");
							  exit(0);
				  }
				  break;
			case '}': ch1=pop(stack);
				  if(ch1!='{')
				  {
					  printf("\n The equation is unbalanced \n");
							  exit(0);
				  }
				  break;
			case ']': ch1=pop(stack);
				  if(ch1!='[')
				  {
					  printf("\n The equation is unbalanced \n");
							  exit(0);
				  }
				  break;
			default : break;
		}
      i++;

	}
	if(top==-1)
		printf("\n The entered expression has balanced parameters \n");
	else
		printf("\n The expression doesn't has balanced parameters \n");
}

void push(char stack[50],char ch)
{
	if(top==50)
		printf("\n Stack is Overfull \n");
	else
	{
		top++;
		stack[top]=ch;
	}
}
char pop(char stack[50])
{
	char ch;
	if(top==-1)
	{
		printf("\n Stack Underflow \n");
		printf("\n Expression doesn't has balnced parameters \n");
		exit(0);
	}
	else
	{
		ch=stack[top];
		top--;
	}
        return ch;
}

//Program to implement stack using array
#include<stdio.h>
#include<stdlib.h>
int top=-1;
void Push(char stack[50],char str[50]);
void display(char stack[50]);
void reverse(char stack[50],char rev_stack[50]);
char Pop(char stack[50]);
int pallindrome(char stack[50],char rev_stack[50]);
main()
{
	char ary[50],rev_ary[50];
	int pall;
        char str[50];
	 printf("\n Enter a string \n");
        scanf("%[^\n]",str);
        Push(ary,str);
	display(ary);
        reverse(ary,rev_ary);
        display(rev_ary);
       pall=pallindrome(ary,rev_ary);
      if(pall==0)
         printf("\n Pallindrome\n");
     else
         printf("\n Not pallindrome \n");

}

void Push(char stack[50],char str[50])
{
char ele;
int k=0;
   while(str[k]!='\0')
{
ele=str[k];
k++;
if(ele!=' ')
{
top++;
stack[top]=ele;
}

}
}
void display(char stack[50])
{
	int i;
	printf("\n Top ---> %c \n",stack[top]);
	for(i=top-1;i>=0;i--)
	{
		printf("%c \n",stack[i]);
	}
}


char Pop(char stack[50])
{
    char ele;
	if(top==-1)
		return (-1);
	else
	{
		if(top==0)
		{
			ele=stack[top];
			top=-1;
		}
		else
		{
			ele=stack[top];
			top--;
		}
	return ele;
	}
}

void reverse(char stack[50],char rev_stack[50])
{
int k=0,top1;
top1=top;
while(top!=-1)
{
rev_stack[k]=Pop(stack);
k++;
}
top=top1;
}


int pallindrome(char stack[50],char rev_stack[50])
{
	int i;
for(i=0;i<=top;i++)
{
if(stack[i]!=rev_stack[i])
return -1;
}
return 0;
}




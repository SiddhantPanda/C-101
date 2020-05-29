//Program to implement stack using array
#include<stdio.h>
#include<stdlib.h>
int top=-1;
void Push(int stack[50],unsigned int num);
void display(int stack[50]);
void reverse(int stack[50],int rev_stack[50]);
int Pop(int stack[50]);
int pallindrome(int stack[50],int rev_stack[50]);
main()
{
	int ary[50],rev_ary[50],pall;
        unsigned int num;
	 printf("\n Enter a number \n");
        scanf("%u",&num);
        Push(ary,num);
	display(ary);
        reverse(ary,rev_ary);
        display(rev_ary);
       pall=pallindrome(ary,rev_ary);
      if(pall==0)
         printf("\n Pallindrome\n");
     else
         printf("\n Not pallindrome \n");

}

void Push(int stack[50],unsigned int num)
{
int ele;
   while(num!=0)
{
ele=num%10;
num=num/10;
top++;
stack[top]=ele;

}
}
void display(int stack[50])
{
	int i;
	printf("\n Top ---> %d \n",stack[top]);
	for(i=top-1;i>=0;i--)
	{
		printf("%d \n",stack[i]);
	}
}


int Pop(int stack[50])
{
    int ele;
	if(top==-1)
		return -1;
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

void reverse(int stack[50],int rev_stack[50])
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


int pallindrome(int stack[50],int rev_stack[50])
{
	int i;
for(i=0;i<=top;i++)
{
if(stack[i]!=rev_stack[i])
return -1;
}
return 0;
}




//Program to implement stack using ADT
#include<stdio.h>
#include<stdlib.h>
#define size 30
typedef struct stk
{
	int stack[size];
	int top;
}stack;
void push(stack *stk,int ele);
void display(stack *stk);
int pop(stack *stk);
main()
{
	stack stk;
	stk.top=-1;
	int ch,check,ele;
	while(1)
	{
	printf("\n Enter Your choice \n");
	printf(" 1.Push \n 2.Traverse \n 3. Pop \n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1 : printf("\n Enter the element \n");
			 scanf("%d",&ele);
			 push(&stk,ele);
			 break;
	       case 2: display(&stk);
		       break;

	       case 3: check=pop(&stk);
		       if(check!=-1)
			       printf("\n %d has been successfully poped \n",check);
		       break;
	      default : exit(0);
	}
	}

}

void push(stack *stk,int ele)
{
	if(stk->top==size-1)
		printf("\n Overflow \n");
	else
	{
		if(stk->top==-1)
		{
			stk->top=0;
			stk->stack[stk->top]=ele;
		}
		else
		{
			(stk->top)++;
			stk->stack[stk->top]=ele;
		}
	}
}
void display(stack *stk)
{
	int i;
	printf("\n%d <-- TOP \n",stk->stack[stk->top]);
	for(i=(stk->top)-1;i>=0;i--)
	{
		printf("%d \n",stk->stack[i]);
	}
}


int pop(stack *stk)
{
    int ele;
	if(stk->top==-1)
		return -1;
	else
	{
		if(stk->top==0)
		{
			ele=stk->stack[stk->top];
			stk->top=-1;
		}
		else
		{
			ele=stk->stack[stk->top];
			(stk->top)--;
		}
	return ele;
	}
}




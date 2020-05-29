//Program to implement stack using array
#include<stdio.h>
#include<stdlib.h>
int top=-1;
int Push(int stack[50]);
void display(int stack[50]);
void reverse(int stack[50],int rev_stack[50]);
int Pop(int stack[50]);
main()
{
	int ary[50],rev_ary[50],opt,check;
	int ch=0;
	while(ch==0)
	{
	printf("\n Enter Your choice \n");
	printf(" 1.Push \n 2.Display \n 3. Pop \n");
	scanf("%d",&opt);
	switch(opt)
	{
		case 1 : check=Push(ary);
			 if(check!=0)
			 {
				 printf("\n stack is full\n");
			 }
			 else
				 printf("\n Pushing Successful \n");
			 break;
	       case 2: display(ary);
		       break;

	       case 3: check=Pop(ary);
		       if(check==0)
		       printf("\n Stack is empty \n");
		       else
			       printf("\n %d has been successfully Poped \n",check);
		       break;
	      default : ch=1;
	}
	
	}
      reverse(ary,rev_ary);
display(rev_ary);
}

int Push(int stack[50])
{
	int ele;
	if(top==50)
		return -1;
	else
	{
		printf("\n Enter a element to enter \n");
		scanf("%d",&ele);
		if(top==-1)
		{
			top=0;
			stack[top]=ele;
		}
		else
		{
			top++;
			stack[top]=ele;
		}
		return 0;
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
		return 0;
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




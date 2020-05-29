//Program to implement queue in stack
#include<stdio.h>
#include<stdlib.h>
int top=-1;
int stack2[size];
#define size 50
void push(int stack[size],int ele);
int pop(int stack[size]);
void traverse(int stack[size]);

main()
{
	int stack1[size],ele,ch,top1;

	while(1)
	{
		printf("\n Enter your choice \n 1. Insertion \n 2. Deletion\n 3. Display\n Other to exit \n");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1: printf("\n Enter a element to insert \n");
				scanf("%d",&ele);
				push(stack1,ele);
				break;

			case 2: 
		
			        top1=top;
			        top=-1;
	                        while(top1>=0)
	                          {
		                         push(stack2,stack1[top1]);
		                         top1--;
	                          }

	                          ele=pop(stack2);
   
		                  top1=top;
		                  top=-1;

	                         while(top1>=0)
	                          {
		                      push(stack1,stack2[top1]);
		                      top1--;
	                          }
			
			 	 if(ele!=-1)
				{
					printf("\n Deleted %d \n",ele);
				}
				break;
			case 3: traverse(stack1);
				break;
			default: exit(0);
		}
	}
}

void push(int stack[size],int ele)
{
	if(top==size-1)
	{
		printf("\n Overflow\n");
	}

	else
	{
		top++;
		stack[top]=ele;
	}
}



int pop(int stack[size])
{
    int ele;
	if(top==-1)
	{
		printf("\n Underflow \n");
		return -1;
	}
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

void traverse(int stack[size])
{
	int i;
	if(top!=-1)
	{
	printf("\n %d <---Top\n",stack[top]);
	for(i=top-1;i>=0;i--)
		printf(" %d\n",stack[i]);
	}
}

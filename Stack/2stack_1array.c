//Program to implement stack using array
#include<stdio.h>
#include<stdlib.h>
int top1=-1;
int top2=50;
int push1(int stack[50]);
void display1(int stack[50]);
int pop1(int stack[50]);
int push2(int stack[50]);
void display2(int stack[50]);
int pop2(int stack[50]);
main()
{
	int ary[50],opt,check,ch,st;
	ch=0;
	while(ch==0)
	{
        printf("\n 1.Stack1 \n 2.Stack2 \n");
        scanf("%d",&st);
        switch(st)
        {
	case 1: printf("\n Enter Your choice \n");
	        printf(" 1.Push \n 2.Traverse \n 3. Pop \n");
	        scanf("%d",&opt);
	switch(opt)
	{
		case 1 : check=push1(ary);
			 if(check!=0)
			 {
				 printf("\n stack is full\n");
			 }
			 else
				 printf("\n Insertion Successful \n");
			 break;
	       case 2: display1(ary);
		       break;

	       case 3: check=pop1(ary);
		       if(check==-1)
		       printf("\n Stack is empty \n");
		       else
			       printf("\n %d has been successfully poped \n",check);
		       break;
	      default : exit(0);
	}
        break;

        case 2:        printf("\n Enter Your choice \n");
	printf(" 1.Push \n 2.Traverse \n 3. Pop \n");
	scanf("%d",&opt);
	switch(opt)
	{
		case 1 : check=push2(ary);
			 if(check!=0)
			 {
				 printf("\n stack is full\n");
			 }
			 else
				 printf("\n Insertion Successful \n");
			 break;
	       case 2: display2(ary);
		       break;

	       case 3: check=pop2(ary);
		       if(check==-1)
		       printf("\n Stack is empty \n");
		       else
			       printf("\n %d has been successfully poped \n",check);
		       break;
	      default : exit(0);
	}
         break;
       default: exit(0);
	}
}

}

int push1(int stack[50])
{
	int ele;
	if(top1==50||top1==top2-1)
		return -1;
	else
	{
		printf("\n Enter a element to enter \n");
		scanf("%d",&ele);
		if(top1==-1)
		{
			top1=0;
			stack[top1]=ele;
		}
		else
		{
			top1++;
			stack[top1]=ele;
		}
		return 0;
	}
}
void display1(int stack[50])
{
	int i;
	printf("\n Top ---> %d \n",stack[top1]);
	for(i=top1-1;i>=0;i--)
	{
		printf("%d \n",stack[i]);
	}
}


int pop1(int stack[50])
{
    int ele;
	if(top1==-1)
		return -1;
	else
	{
		if(top1==0)
		{
			ele=stack[top1];
			top1=-1;
		}
		else
		{
			ele=stack[top1];
			top1--;
		}
	return ele;
	}
}

int push2(int stack[50])
{
	int ele;
	if(top2==top1+1||top2==0)
		return -1;
	else
	{
		printf("\n Enter a element to enter \n");
		scanf("%d",&ele);
		top2--;
                stack[top2]=ele;
		return 0;
	}
}
void display2(int stack[50])
{
	int i;
	printf("\n Top ---> %d \n",stack[top2]);
	for(i=top2+1;i<50;i++)
	{
		printf("%d \n",stack[i]);
	}
}


int pop2(int stack[50])
{
    int ele;
	if(top2==50)
		return -1;
	else
	{ 
                ele=stack[top2];
		top2++;
	return ele;
	}
}




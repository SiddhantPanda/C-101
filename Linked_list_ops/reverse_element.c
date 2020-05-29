//Program to reverse the elements of an linked list
//Program to sort a linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct data
{
	int info;
	struct data *next;
}node;

node *start,*temp;

int top=-1;
int stack[50];
void push(int ele);
int pop();

void read();
void display();
void reverse();

main()
{
	char ch='Y';
	while(ch=='Y'||ch=='y')
	{
		read();
		printf("\n Wanna Enter more \n");
		scanf(" %c",&ch);
	}

	display();

	reverse();

	printf("\n\n");
	display();

}

void read()
{

	if(start==NULL)
	{
	temp=(node *)malloc(sizeof(node));

	printf("\n Enter the number\n");
	scanf("%d",&(temp->info));
		start=temp;
	}
	else
	{
		temp->next=(node *)malloc(sizeof(node));
		temp=temp->next;
                printf("\n Enter the number\n");
	        scanf("%d",&(temp->info));

	}
}

void display()
{
	temp=start;
	do
	{
		printf(" %d \n",temp->info);
		temp=temp->next;
	}while(temp!=NULL);
}


void push(int ele)
{
	if(top==50)
		return;
	else
	{
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
	}
}


int pop()
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

void reverse()
{
	int n,i;
	temp=start;

	for(n=0;temp!=NULL;n++)
	{
		temp=temp->next;
	}

	temp=start;
	for(i=0;i<n;i++)
	{
		push(temp->info);
		temp=temp->next;
	}

	temp=start;

	for(i=0;i<n;i++)
	{
		temp->info=pop();
		temp=temp->next;
	}
}









//Program to reverse a linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct data
{
	int info;
	struct data *next;
}node;

node *new,*start;

void input();
void output();
void reverse();

main()
{
	int ch,n=1;
	while(n==1)
	{
	printf("\n Enter Your Choice \n");
	printf("\n 1. Insert \n 2. Display \n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: input();
			break;
		case 2: output();
			break;
		default: n=0;
	}
	}
	reverse();
	output();

}

void input()
{
	new=(node *)malloc(sizeof(node));

	printf("\n Enter the number \n");
	scanf("%d",&(new->info));
	new->next=start;
	start=new;
}

void output()
{
	node *temp;
	temp=start;
	do
	{
	      printf("\n %d \n",temp->info);
	      temp=temp->next;
	}while(temp!=NULL);
}

void reverse()
{
	node *temp,*temp1;
	do
	{
		if(temp==NULL)
		{
	             temp=start;
	             start=start->next;
	             temp1=start->next;
	             start->next=temp;
	             temp->next=NULL;
		}
		else
		{
			temp=start;
			start=temp1;
			temp1=start->next;
			start->next=temp;
		}
	}while(temp1!=NULL);
}
	


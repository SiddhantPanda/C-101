//Program to implement stack as a linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct data
{
	int info;
	struct data *next;
}node;

node *new,*top;

void input();
void output();
void delete();

main()
{
	int ch;
	while(1)
	{
	printf("\n Enter Your Choice \n");
	printf("\n 1. Insert \n 2. Display \n 3. Delete \n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: input();
			break;
		case 2: output();
			break;
		case 3: delete();
			break;
		default: exit(0);
	}
	}

}

void input()
{
	new=(node *)malloc(sizeof(node));

	printf("\n Enter the number \n");
	scanf("%d",&(new->info));
	new->next=top;
	top=new;
}

void output()
{
	new=top;
	do
	{
	      printf("\n %d \n",new->info);
	      new=new->next;
	}while(new!=NULL);
}

void delete()
{
	if(top==NULL)
	{
		printf("\n Underflow\n");
		return;
	}
	else
	{
	printf("\n Deleted %d \n",top->info);
	top=top->next;
	}
}

//Program to implement linked list
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

main()
{
	int ch;
	while(1)
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
		default: exit(0);
	}
	}

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
	new=start;
	do
	{
	      printf("\n %d \n",new->info);
	      new=new->next;
	}while(new!=NULL);
}



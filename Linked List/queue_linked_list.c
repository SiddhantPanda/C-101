//Program to implement queue as a linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct data
{
	int info;
	struct data *next;
}node;

node *front,*rear;

void insert();
void display();
void delete();

main()
{
	int ch;
	while(1)
	{
	printf("\n Enter Your Choice \n 1. Insert \n 2.Traverse \n 3. Delete \n");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1: insert();
			break;
		case 2: display();
			break;
		case 3: delete();
			break;
		default :exit(0);
	}
	}
}

void insert()
{
	if(front==NULL)
	{
		front=(node *)malloc(sizeof(node));
		printf("\n Enter number \n");
		scanf("%d",&(front->info));
		rear=front;
	}

	else
	{
		rear->next=(node *)malloc(sizeof(node));
		rear=rear->next;
		printf("\n Enter the number \n");
		scanf("%d",&(rear->info));
	}
}

void display()
{
	node *temp;
	temp=front;
	while(temp!=NULL)
	{
		printf("%d \n",temp->info);
		temp=temp->next;
	}
}


void delete()
{
	if(front!=NULL)
	{
	if(front!=rear)
	{
	printf("\n Deleted %d \n",front->info);
	front=front->next;
	}

	else
	{
		printf("\n Deleted %d \n",front->info);
		front=front->next;
		rear=rear->next;
	}
	}
	else
	{
		printf("\n Under-Flow \n");
	}
}

		


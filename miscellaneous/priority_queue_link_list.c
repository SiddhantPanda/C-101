//Program to implement priority queue using linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct data
{
	int val;
	int prio;
	struct data *next;
}node;

node *start,*temp;

void insert();
void delete();
void display();

main()
{
	int ch;
	while(1)
	{
		printf("\n Enter your choice \n 1. Insert \n 2. Delete \n 3. Display the squence \n Other to exit\n ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : insert();
				 break;
			case 2 : delete();
				 break;
			case 3 : display();
				 break;
			default : exit(0);
		}
	}
}

void insert()
{
	if(start==NULL)
	{
		start=(node *)malloc(sizeof(node));
		printf("\n Enter the number \n");
		scanf("%d",&(start->val));
		printf("\n Enter its priority \n");
		scanf("%d",&(start->prio));
	}
	else
	{
		temp=(node *)malloc(sizeof(node));
		printf("\n Enter the number \n");
		scanf("%d",&(temp->val));
		printf("\n Enter the priority \n");
		scanf("%d",&(temp->prio));

		node *temp1;
		temp1=start;
		if(temp1->next!=NULL)
		{
		if((temp->prio)>(temp1->prio))
		{
			temp->next=start;
			start=temp;
		}
		else
		{
			if((temp1->next->prio)<(temp->prio))
			{
				temp->next=temp1->next;
				temp1->next=temp;
			}
			else
			{
				temp1=temp1->next;
			}
		}
		}
		else
		{
			temp1->next=temp;
		}
	}
	
}

void delete()
{
	printf("\n %d is deleted of priority %d \n",(start->val),(start->prio));
	temp=start;
	start=start->next;
	temp->next=NULL;
	free(temp);
}

void display()
{
	printf("\n The jobs in queue with priority are as follow \n");
	temp=start;
	do
	{
		printf("\n %d-> %d ",temp->val,temp->prio);
		temp=temp->next;
	}while(temp!=NULL);
}





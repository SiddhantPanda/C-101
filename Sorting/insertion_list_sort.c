//Program to perform insertion sort in a linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct data
{
	int info;
	struct data *next;
	struct data *prev;
}node;

node *start,*temp,*temp1;
void insert();
void display();
void sort();


main()
{
	printf("\n Create link list \n");
	insert();

	printf("\n Your created list is \n");
	display();

	sort();

	printf("\n Sorted list is \n");
	display();
}


void insert()
{
	char ch='y';
	while(ch=='Y'||ch=='y')
	{
	if(start==NULL)
	{
		temp=(node *)malloc(sizeof(node));
		printf("\n Enter the number \n");
		scanf("%d",&(temp->info));
		start=temp;
	}
	else
	{
		temp1=(node *)malloc(sizeof(node));
		temp->next=temp1;
		temp1->prev=temp;
		printf("\n Enter the number \n");
		scanf("%d",&(temp1->info));
		temp=temp1;
		temp1=NULL;
	}
	printf("\n Want to enter more (y/n) \n");
	scanf(" %c",&ch);
	}
}


void display()
{
	temp=start;
	do
	{
		printf("%d \n",temp->info);
		temp=temp->next;
	}while(temp!=NULL);
}

void sort()
{
	node *key;
	temp=start->next;
	while(temp!=NULL)
	{
		key=temp;
		temp1=temp->prev;
		while((temp1!=NULL)&&((temp1->info)>(key->info)))
		{
			temp1->next->info=temp1->info;
			temp1=temp1->prev;
		}
		if(temp==NULL)
			temp=start;

		temp1->info=key->info;
		temp=temp->next;
	}
}



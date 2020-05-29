//Program to create and travers e adouble link list
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


main()
{
	char ch='y';
	while(ch=='y'||ch=='Y')
	{
		insert();
		printf("\n Want to insert more??? (y?n)\n");
		scanf(" %c",&ch);
	}

	printf("\n Your Double linked list is \n");
	display();
}

void insert()
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



//Programto implerment selection sort in a linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct data
{
	int info;
	struct data *next;
}node;

node *start;
void insert();
void display();
void sort();


main()
{
	printf("\n Create  your node \n");
	insert();

	printf("\n Your list is \n");
	display();

	sort();

	printf("\n Your sorted list is \n");
	display();
}

void insert()
{
	char ch='y';
	node *temp;

	while(ch=='y'||ch=='Y')
	{
		printf("\n Enter the number \n");
		if(start==NULL)
		{
			start=(node *)malloc(sizeof(node));
			scanf("%d",&(start->info));
			temp=start;
		}
		else
		{
			temp->next=(node *)malloc(sizeof(node));
			temp=temp->next;
			scanf("%d",&(temp->info));
		}
		printf("\n Want to Enter more (y/n)");
		scanf(" %c",&ch);
	}
}

void display()
{
	node *temp;
	temp=start;
	do
	{
		printf("%d \n",temp->info);
		temp=temp->next;
	}while(temp!=NULL);
}

void sort()
{
	node *temp,*temp1;
	temp=start;
	while(temp!=NULL)
	{
		temp1=temp->next;
		while(temp1!=NULL)
		{
			if((temp1->info)<(temp->info))
			{
				int t;
				t=temp1->info;
				temp1->info=temp->info;
				temp->info=t;
			}
			temp1=temp1->next;
		}
		temp=temp->next;
	}
}

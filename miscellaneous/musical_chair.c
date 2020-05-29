//Program to implement musical chair using circular link list
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct musical_chair
{
	int cno;
	struct musical_chair *next;
}node;

node *start,*temp;
void insert();
void remove();
void sort();

main()
{
	char ch='y';
	clock_t start;

	printf("\n Lets put the chairs \n")
	while(ch=='y'||ch=='Y')
	{
		insert();
		printf("\n Want to put more chairs \n");
		scanf(" %c",&ch);
	}
	temp->next=start;

	printf("\n Wait arranging the chairs in order \n");
	sort();
	printf("\n Lets Begin The Game \n");


	while(start!=NULL)
	{
		printf("\n Music Starts \n");
		start=clock();
		while((this_time-start)<10000000.0);
		printf("\n Stop \n");
		delete();
	}
}

void insert()
{
	if(start==NULL)
	{
		start=(node *)malloc(sizeof(node));
		printf("\n Enter the chair number \n");
		scanf("%d",&(start->cno));
		temp=start;
	}

	else
	{
		temp->next=(node *)malloc(sizeof(node));
		temp=temp->next;
		printf("\n Enter the chair number \n");
		scanf("%d",&(temp->cno));
	}
}

void delete()
{
	int cn;
	if(start->next==NULL)
	{
		printf("\n %d is the winner \n",start->cno);
		free(start);
	}
	else
	{
		printf("\n Enter the chair number that will be removed \n");
		scanf("%d",&cn);
		node *temp1;
		temp1=start;
		while(temp1!=NULL)
		{
			if(start->cno==cn)
			{
				temp->next=start->next;
				temp2=start;
				start=start->next;
				temp2->next=NULL;
				free(temp2);
			}

			else
			{
				while(temp1->next!=start)
				{
					if(temp1->next==cn)
			



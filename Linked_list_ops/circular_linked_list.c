//Program to implement a circular linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct data
{
	int info;
	struct data *next;
}node;

node *start,*temp;

void read();
void sort();
void display();

main()
{
	char ch='Y';
	while(ch=='Y'||ch=='y')
	{
		read();
		printf("\n Wanna Enter more \n");
		scanf(" %c",&ch);
	}
         temp->next=start;

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
	}while(temp!=start);
}



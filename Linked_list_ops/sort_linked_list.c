//Program to sort a linked list
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

	display();

	sort();

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
	}while(temp!=NULL);
}


void sort()
{
	node *temp1;
	int t,n,i,j;
	temp=start;
	for(n=0;temp!=NULL;n++)
	{
		temp=temp->next;
	}

	for(i=0;i<n-1;i++)
	{
		temp=start;
		temp1=start->next;
		for(j=0;j<n-i-1;j++)
		{
			if((temp->info)>(temp1->info))
			{
				t=temp->info;
				temp->info=temp1->info;
				temp1->info=t;
			}
			temp=temp->next;
			temp1=temp1->next;
		}
	}
}





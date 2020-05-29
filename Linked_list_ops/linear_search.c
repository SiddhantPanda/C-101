//Program to implement linear search in a linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct data
{
	int info;
	struct data *next;
}node;

node *start,*temp;

void read();
void search(int);
void display();

main()
{
	char ch='Y';
	int ele;
	while(ch=='Y'||ch=='y')
	{
		read();
		printf("\n Wanna Enter more \n");
		scanf(" %c",&ch);
	}

	display();
	ch='Y';


	while(ch=='y'||ch=='Y')
	{
	printf("\n Enter the element u want to search \n");
	scanf("%d",&ele);
	search(ele);

	printf("\n Wanna search More \n");
	scanf(" %c",&ch);
	}

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

void search(int ele)
{
	temp=start;
	int i,n=0;
	for(i=0;temp!=NULL;i++)
	{
		if((temp->info)==ele)
		{
			printf("\n Element found at %d node \n",i+1);
			n++;
		}
		temp=temp->next;
	}

	if(n==0)
		printf("\n Element Not Found \n");
}







//Program to perform menu driven operation on linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct data
{
	int info;
	struct data *next;
}node;
node *start,*temp;

void insert();

void beg_insert();
void last_insert();
void i_insert();

void beg_del();
void last_del();
void i_del();

void display();

main()
{
	int n,t=1;
	char ch='y';
	printf("\n Create the node \n");
	while(ch=='y'||ch=='Y')
	{
		insert();
		printf("\n WANT TO ENTER MORE (y/Y) ");
		scanf(" %c",&ch);
	}

	printf("\n Your Linked List is :- \n");
	display();

	while(t==1)
	{
		printf("\n Enter your choice \n");
		printf("\n 1.Insert at beginning ");
		printf("\n 2.Insert at last ");
		printf("\n 3.Insert at ith node ");
		printf("\n 4.Delete first node ");
		printf("\n 5.Delete last node ");
		printf("\n 6.Delete ith node ");
		printf("\n 7. Dispaly ");
		scanf("%d",&n);
		switch(n)
		{
			case 1: beg_insert();
				break;
			case 2: last_insert();
				break;
			case 3: i_insert();
				break;
			case 4: beg_del();
				break;
			case 5: last_del();
				break;
			case 6: i_del();
				break;
			case 7: display();
				break;
			default : t=0;
		}
	}

		printf("\n Your latest linked list looks like :- \n");
		display();
	
}

void insert()
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

void beg_insert()
{
	temp=(node *)malloc(sizeof(node));
	printf("\n Enter number \n");
	scanf("%d",&(temp->info));
	temp->next=start;
	start=temp;
}

void beg_del()
{
	temp=start;
	start=start->next;
	temp->next=NULL;
	free(temp);
}


void last_insert()
{
	node *temp1;
	int i;
	temp=start;
	for(i=0;temp->next!=NULL;i++)
	{
		temp=temp->next;
	}

	temp1=(node *)malloc(sizeof(node));
	printf("\n Enter the number \n");
	scanf("%d",&(temp1->info));
	temp->next=temp1;
}

void last_del()
{
	node *temp1;
	int i,j;
	temp=start;
	temp1=start;
	for(i=1;temp->next!=NULL;i++)
	{
		temp=temp->next;
	}

	for(j=1;j<i-1;j++)
	{
		temp1=temp1->next;
	}

	temp1->next=NULL;
	free(temp);
}

void i_insert()
{
	int n,i;
	printf("\n Enter the node number u want to Enter \n");
	scanf("%d",&n);
	temp=start;
	for(i=1;i<n;i++)
	{
		temp=temp->next;
	}

	node *temp1;
	temp1=(node *)malloc(sizeof(node));
	printf("\n Enter the number \n");
	scanf("%d",&(temp1->info));
	temp1->next=temp->next;
	temp->next=temp1;
}

void i_del()
{
	int n,i;
	node *temp1;
	printf("\n Enter the node number u want to delete \n");
	scanf("%d",&n);
	temp=start;
	temp1=start;
	for(i=1;i<n-1;i++)
	{
		temp1=temp1->next;
	}

	for(i=1;i<n;i++)
	{
		temp=temp->next;
	}

	temp1->next=temp->next;

	temp->next=NULL;

	free(temp);
}
//Program Ends HERE


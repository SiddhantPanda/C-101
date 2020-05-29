//Prgoram to perform operation doble linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct data
{
	int info;
	struct data *next;
	struct data *prev;
}node;

node *start,*temp,*temp1;
void read();
void display();
void sort();

void beg_ins();
void last_ins();
void n_ins();

void beg_del();
void last_del();
void n_del();



main()
{
	printf("\n Lets have some fun .......  :) :) ;) :( \n");
	printf("\n First let's create a double linked list \n");

	char ch='Y';
	int c;

	while(ch=='y'||ch=='Y')
	{
		read();
		printf("\n Wanna Enter more nodes\n");
		printf(" Don't Lie ..... Replay in (Y/N) \n");
		scanf(" %c",&ch);
	}

	printf("\n Now Lets Play with the list \n");

	while(1)
	{
		printf("\n Choices To work on the list \n ");
		printf("\n 1. Insert at begning\n 2. Insert at last \n 3. Insert at random place \n");
	        printf("\n 4. Delete begning \n 5. Delete last \n 6. Delete random node \n");
                printf("\n 7. Display \n 8. sort and display \n");
                printf("\n Enter Your Choice....Wrong Input leads to termination\n");
		scanf("%d",&c);

		switch(c)
		{
			case 1: beg_ins();
				break;
			case 2: last_ins();
				break;
			case 3: n_ins();
				break;
			case 4: beg_del();
				break;
			case 5: last_del();
				break;
			case 6: n_del();
				break;
			case 7: display();
				break;
			case 8: sort();
				printf("\n Sorted list is \n");
				display();
				break;
			default : exit(0);
		}
	}
}

void read()
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

void beg_ins()
{
	temp=(node *)malloc(sizeof(node));
	printf("\n Enter number \n");
	scanf("%d",&(temp->info));
	temp->next=start;
	start->prev=temp;
	start=temp;
	temp->prev=NULL;
}

void beg_del()
{
	temp=start;
	start=start->next;
	temp->next=NULL;
	free(temp);
}


void last_ins()
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
	temp1->prev=temp;
	temp1->next=NULL;
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
	temp->prev=NULL;
	free(temp);
}

void n_ins()
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
	temp1->prev=temp;
	temp->next->prev=temp1;
	temp->next=temp1;
}

void n_del()
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
	temp->prev=temp1;

	temp->next=NULL;
	temp->prev=NULL;

	free(temp);
}


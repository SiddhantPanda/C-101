//Program to merge two sorted link list
#include<stdio.h>
#include<stdlib.h>

typedef struct data
{
	int info;
	struct data *next;
}node;

void insert1();
void insert2();
void display1();
void display2();
void display3();
void sort1();
void sort2();
void merge();
node *start1,*start2,*start3,*temp1,*temp2,*temp3,*temp;

main()
{
	char ch='Y';
	
	printf("\n Lets create our 1st link list \n");
	while(ch=='y'||ch=='Y')
	{
		insert1();
		printf("\n Wanna insert more?(y/n)\n");
		scanf(" %c",&ch);
	}

	printf("\n Lets create our 2nd link list \n");
	ch='y';
	temp1=NULL;

	while(ch=='y'||ch=='Y')
	{
		insert2();
		printf("\n Wanna insert more ?(y/n) \n");
		scanf(" %c",&ch);
	
	}


	printf("\n 1st list is \n");
	display1();
	printf("\n 2nd list is \n");
	display2();

	sort1();
	sort2();

	printf("\n 1st sorted list is \n");
	display1();
	printf("\n 2nd sorted list is \n");
	display2();

	merge();

	printf("\n The merged sorted list is \n");
	display3();

}

void insert1()
{
	if(start1==NULL)
	{
		temp1=(node *)malloc(sizeof(node));
		printf("\n Enter the number \n");
		scanf("%d",&(temp1->info));
		start1=temp1;
	}
	else
	{
		temp1->next=(node *)malloc(sizeof(node));
		temp1=temp1->next;
		printf("\n Enter the number \n");
		scanf("%d",&(temp1->info));
	}
}

void insert2()
{
	if(start2==NULL)
	{
		temp2=(node *)malloc(sizeof(node));
		printf("\n Enter the number \n");
		scanf("%d",&(temp2->info));
		start2=temp2;
	}
	else
	{
		temp2->next=(node *)malloc(sizeof(node));
		temp2=temp2->next;
		printf("\n Enter the number \n");
		scanf("%d",&(temp2->info));
	}
}

void display1()
{
	temp1=start1;
	do
	{
		printf("%d \n",temp1->info);
		temp1=temp1->next;
	}while(temp1!=NULL);
}
void display2()
{
	temp2=start2;
	do
	{
		printf("%d \n",temp2->info);
		temp2=temp2->next;
	}while(temp2!=NULL);
}
void display3()
{
	temp3=start3;
	do
	{
		printf("%d \n",temp3->info);
		temp3=temp3->next;
	}while(temp3!=NULL);
}

void sort1()
{
	int t,n,i,j;
	temp=start1;
	for(n=0;temp!=NULL;n++)
	{
		temp=temp->next;
	}

	for(i=0;i<n-1;i++)
	{
		temp=start1;
		temp1=start1->next;
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

void sort2()
{
	int t,n,i,j;
	temp=start2;
	for(n=0;temp!=NULL;n++)
	{
		temp=temp->next;
	}

	for(i=0;i<n-1;i++)
	{
		temp=start2;
		temp2=start2->next;
		for(j=0;j<n-i-1;j++)
		{
			if((temp->info)>(temp1->info))
			{
				t=temp->info;
				temp->info=temp2->info;
				temp2->info=t;
			}
			temp=temp->next;
			temp2=temp2->next;
		}
	}
}


void merge()
{
	temp1=start1;
	temp2=start2;
	while((temp1!=NULL)&&(temp2!=NULL))
	{
	if(start3==NULL)
	{
		if((temp1->info)>(temp2->info))
		{
			start3=start2;
			temp2=temp2->next;
		}
		else
		{
			start3=start1;
			temp1=temp1->next;
		}
		temp3=start3;
	}
	else
	{
		if((temp1->info)>(temp2->info))
		{
			temp3->next=temp2;
			temp2=temp2->next;
			temp3=temp3->next;
		}

		else
		{
			temp3->next=temp1;
			temp1=temp1->next;
			temp3=temp3->next;
		}
	}
	}

	if(temp1==NULL)
	{
		while(temp2!=NULL)
		{
			temp3->next=temp2;
			temp2=temp2->next;
			temp3=temp3->next;
		}
	}

	else
	{
		while(temp1!=NULL)
		{
			temp3->next=temp1;
			temp1=temp1->next;
			temp3=temp3->next;
		}
	}
}

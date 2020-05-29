//Program to implement queue
#include<stdio.h>
#include<stdlib.h>
int front=-1;
int rear=-1;
#define size 50
void enqueue(int queue[size],int ele);
void traverse(int queue[size]);
int dequeue(int queue[size]);

main()
{
	int queue[size],ele,ch;
	while(1)
	{
		printf("\n Enter your choice \n 1. Insertion \n 2. Deletion \n 3. Display \n Other to exit \n");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1: printf("\n Enter the element to insert \n");
				scanf("%d",&ele);
				enqueue(queue,ele);
				break;

			case 2: ele=dequeue(queue);
				if(ele!=-1)
					printf("\n %d deleted \n",ele);
				break;

			case 3: traverse(queue);
				break;
				
			default : exit(0);
		}
	}
}

void enqueue(int queue[size],int ele)
{
	if(rear==size-1)
		printf("\n Overflow \n");

	else
	{
		if(front==-1)
		{
			front++;
			rear++;
			queue[rear]=ele;
		}
		else
		{
			rear++;
			queue[rear]=ele;
		}
	}
}


int dequeue(int queue[size])
{
	int ele;
	if(front==-1)
	{
		printf("\n Underflow \n");
		return -1;
	}

	else
	{
		if(front==rear)
		{
			ele=queue[front];
			front=-1;
			rear=-1;
		}
		else
		{
			ele=queue[front];
			front++;
		}
	}
	return ele;
}

void traverse(int queue[size])
{
	int i;
	if(front!=rear)
	{

	printf("\n %d <---Front \n",queue[front]);
	for(i=front+1;i<rear;i++)
	{
		printf("%d \n",queue[i]);
	}

	printf(" %d <---Rear \n",queue[rear]);
	}
	else
	{
		printf("Rear---> %d <---Front\n",queue[front]);
	}
}





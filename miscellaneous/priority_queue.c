//Program to implement priority queue
#include<stdio.h>
#include<stdlib.h>
int front=-1;
int rear=-1;
#define size 50
typedef struct priority
{
	int value;
	int priority;
}prio;

void enqueue(prio queue[size],int ele,int prior);
void traverse(prio queue[size]);
int dequeue(prio queue[size]);
void arrange(prio queue[size]);

main()
{
	int ch,ele,prior;
	prio queue[size];
	while(1)
	{
		printf("\n Enter your choice \n 1. Insertion \n 2. Deletion \n 3. Display \n Other to exit \n");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1: printf("\n Enter the element to insert \n");
				scanf("%d",&ele);
				printf("\n Enter its priority\n");
				scanf("%d",&prior);
				enqueue(queue,ele,prior);
				arrange(queue);
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

void enqueue(prio queue[size],int ele,int prior)
{
	if(rear==size-1)
		printf("\n Overflow \n");

	else
	{
		if(front==-1)
		{
			front++;
			rear++;
			queue[rear].value=ele;
			queue[rear].priority=prior;
		}
		else
		{
			rear++;
			queue[rear].value=ele;
			queue[rear].priority=prior;
		}
	}
}


int dequeue(prio queue[size])
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
			ele=queue[front].value;
			front=-1;
			rear=-1;
		}
		else
		{
			ele=queue[front].value;
			front++;
		}
	}
	return ele;
}

void traverse(prio queue[size])
{
	int i;
	if(front!=rear)
	{

	printf("\n %d <---Front \n",queue[front].value);
	for(i=front+1;i<rear;i++)
	{
		printf("%d \n",queue[i].value);
	}

	printf(" %d <---Rear \n",queue[rear].value);
	}
	else
	{
		printf("Rear---> %d <---Front\n",queue[front].value);
	}
}

void arrange(prio queue[size])
{
	int i,j,s;
	prio array[size],temp;
	s=(rear-front)+1;
	j=front;
	for(i=0;i<s;i++)
	{
		array[i].value=queue[j].value;
		array[i].priority=queue[j].priority;
			j++;
	}

	for(i=0;i<s-1;i++)
	{
		for(j=0;j<(s-1)-i;j++)
		{
			if(array[j].priority<array[j+1].priority)
			{
				temp.value=array[j+1].value;
				temp.priority=array[j+1].priority;
				array[j+1].value=array[j].value;
				array[j+1].priority=array[j].priority;
				array[j].value=temp.value;
				array[j].priority=temp.priority;
			}
		}
	}
	j=0;

	for(i=front;i<=rear;i++)
	{
		queue[i].value=array[j].value;
		queue[i].priority=array[j].priority;
		j++;
	}
}



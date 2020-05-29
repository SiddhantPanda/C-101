//Progra to implement circular queueas ADT
//Program to implement circular queue
#include<stdio.h>
#include<stdlib.h>
#define size 5
typedef struct cir_que
{
	int queue[size];
	int front;
	int rear;
}queue;
void enqueue(queue *que,int ele);
void traverse(queue *que);
int dequeue(queue *que);

main()
{
	queue que;
	que.front=-1;
	que.rear=-1;
	int ele,ch;
	while(1)
	{
		printf("\n Enter your choice \n 1. Insertion \n 2. Deletion \n 3. Display \n Other to exit \n");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1: printf("\n Enter the element to insert \n");
				scanf("%d",&ele);
				enqueue(&que,ele);
				break;

			case 2: ele=dequeue(&que);
				if(ele!=-1)
					printf("\n %d deleted \n",ele);
				break;

			case 3: traverse(&que);
				break;
				
			default : exit(0);
		}
	}
}

void enqueue(queue *que,int ele)
{
	if((que->rear==size-1&&que->front==0)||(que->rear==(que->front)-1))
		printf("\n Overflow \n");

	else
	{
		
		if(que->front==-1)
		{
			que->front++;
			que->rear++;
			que->queue[que->rear]=ele;
		}
		
		else
		{
			if(que->rear==size-1)
			{
				que->rear=0;
				que->queue[que->rear]=ele;
			}
			else
			{
				que->rear++;
				que->queue[que->rear]=ele;
		        }
	       }
      }
}	


int dequeue(queue *que)
{
	int ele;
	if(que->front==-1)
	{
		printf("\n Underflow \n");
		return -1;
	}

	else
	{
		
		if(que->front==que->rear)
		{
			ele=que->queue[que->front];
			que->front=-1;
			que->rear=-1;
		}
		else
		{
			if(que->front<que->rear)
	       	        {
			      ele=que->queue[que->front];
			      que->front++;
		        }

			else
			{
				if(que->front==size-1)
				{
					ele=que->queue[que->front];
					que->front=0;
				}
				else
				{
					ele=que->queue[que->front];
					(que->front)++;
				}
	               }
		}
	}	
	return ele;
}

void traverse(queue *que)
{
	int i;
	if(que->front!=que->rear)
	{
		if(que->front<que->rear)
		{
	             printf("\n%d <---Front \n",que->queue[que->front]);
	             for(i=(que->front)+1;i<que->rear;i++)
	              {
		         printf("%d \n",que->queue[i]);
	              }  

	              printf("%d <---Rear \n",que->queue[que->rear]);
	        }
		else
		{
			printf("\n%d <---Front \n",que->queue[que->front]);
			for(i=(que->front)+1;i<size;i++)
				printf("%d \n",que->queue[i]);
			for(i=0;i<que->rear;i++)
				printf("%d \n",que->queue[i]);
			 printf("%d <---Rear \n",que->queue[que->rear]);
		}
	}
	else
	{
		printf("Rear---> %d <---Front\n",que->queue[que->front]);
	}
}





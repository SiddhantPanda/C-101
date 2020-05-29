//Program to perform selection sort
#include<stdio.h>
#include<stdlib.h>
int size=10;
void insert(int *A);
void display(int *A);
void sort(int *A);
main()
{
	int A[size];

	insert(A);

	printf("\n Your array is \n");
	display(A);

	sort(A);

	printf("\n Your sorted array is \n");
	display(A);
}

void insert(int *A)
{
	int i;

	printf("\n Enter %d elements to the array \n",size);

	for(i=0;i<size;i++)
	{
		scanf("%d",&(*(A+i)));
	}
}

void display(int *A)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d \n",*(A+i));
	}
}

void sort(int *A)
{
	int i,j,min,pos;
	for(i=0;i<size;i++)
	{
		min=*(A+i);
		pos=i;
		for(j=i;j<size;j++)
		{
			if(*(A+j)<min)
			{
				min=*(A+j);
				pos=j;
			}
		}
		if(pos!=i)
		{
			*(A+pos)=*(A+i);
			*(A+i)=min;
		}
	}
}


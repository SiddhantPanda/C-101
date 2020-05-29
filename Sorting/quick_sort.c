//Program to perform quick sorting
#include<stdio.h>
#include<stdlib.h>

unsigned long int size=1000000;



void input(int *);
void display(int *);
void quick_sort(int *,int,int);
int partition(int *,int,int);

main()
{
	int A[size];
	input(A);

	printf("\n your array is \n");
	display(A);

	quick_sort(A,0,size-1);

	printf("\n Your Sorted array is \n");
	display(A);
}

void input(int *A)
{
	unsigned long int num=200000,i;
	for(i=0;i<size;i++)
	{
		*(A+i)=num;
		num=num-2;
	}
}


void display(int *A)
{
	unsigned long int i;
	for(i=0;i<size;i++)
		printf("%u \n",*(A+i));
}

void quick_sort(int *A,int p,int r)
{
	int q;
	if(p<r)
	{
		q=partition(A,p,r);
		quick_sort(A,p,q-1);
		quick_sort(A,q+1,r);
	}
	else
		return;
}

int partition(int *A,int p,int r)
{
	int i,j,pivot,temp;
	i=p-1;
	pivot=A[r];
	for(j=p;j<r;j++)
	{
		if(A[j]<pivot)
		{
			i++;
			temp=A[j];
			A[j]=A[i];
			A[i]=temp;
		}
	}
	temp=A[i+1];
	A[i+1]=A[r];
	A[r]=temp;

	return (i+1);
}
			

//Program to merge two sorted array into a sorted array
#include<stdio.h>
#include<stdlib.h>
void input(int *p,int size)
{
	int i;
	printf("\n Enter elements in the array \n");
	for(i=0;i<size;i++)
		scanf("%d",(p+i));
}

void display(int *p,int size)
{
	int i;
	printf("\n Your array is \n");
	for(i=0;i<size;i++)
		printf("%d ",*(p+i));
}

void sort(int *p,int size)
{
	int i,j;
	int s,pos;
	for(i=0;i<size;i++)
	{
		s=*(p+i);
		pos=i;
		for(j=i;j<size;j++)
		{
		if(s>*(p+j))
		{
			s=*(p+j);
			pos=j;
		}
		}
		*(p+pos)=*(p+i);
		*(p+i)=s;
	}
}

void merge(int *a,int *b,int*c,int s1,int s2)
{
	int i,j,k=0;

	for(i=0,j=0;i<s1,j<s2;)
	{
		if(*(a+i)<=*(b+j))
		{
			*(c+k)=*(a+i);
			i++;
		}
		else
		{
			*(c+k)=*(b+j);
			j++;
		}
		k++;
	}

	if(i==s1)
	{
		while(j<s2)
		{
			*(c+k)=*(b+j);
			k++;
			j++;
		}
	}
	else
	{
		while(i<s1)
		{
			*(c+k)=*(a+i);
			k++;
			i++;
		}
	}
}

main()
{
	int *a,*b,*c;
	int s1,s2,s3;
	printf("\n Enter the number of elements u want in the first array \n");
	scanf("%d",&s1);
	a=(int *)malloc(s1*sizeof(int));
	input(a,s1);
	sort(a,s1);
	printf("\n Your array is \n ");
	display(a,s1);

	printf("\n Enter the number of elements u want in the first array \n");
	scanf("%d",&s2);
	b=(int *)malloc(s2*sizeof(int));
	input(b,s2);
	sort(b,s2);
	printf("\n Your array is \n");
	display(b,s2);
	s3=s1+s2;
	c=(int *)malloc(s3*sizeof(int));

	merge(a,b,c,s1,s2);
	printf("\n The merged array is \n");
	display(c,s3);

}


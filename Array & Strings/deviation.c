//Program to find the standard deviation of 15 real numbers
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void insert(int *p)
{
	int i;
	printf("\n Enter 15 real integers \n");
	for(i=0;i<15;i++)
		scanf("%d",(p+i));

}

float mean(int *p)
{
	int i;
	float sum=0.0;
	for(i=0;i<15;i++)
	{
		sum=sum+*(p+i);
	}
	return(sum/15.0);
}

float deviation(int *p,float m)
{
	int i;
	float sum=0.0;
	for(i=0;i<15;i++)
	{
		sum=sum+((m-*(p+i))*(m-*(p+i)));
	}
	return(sqrt(sum/15.0));
}


main()
{
	int *a;
	float m,dev;
	a=(int *)malloc(15*sizeof(int));
	insert(a);
	m=mean(a);
	dev=deviation(a,m);
	printf("\n The standard deviation of the 15 elements is %f \n",dev);
}




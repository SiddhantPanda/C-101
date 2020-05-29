//Program to find mean of an float array
#include<stdio.h>
#include<stdlib.h>
void input(float *p)
{
	int i;
	printf("\n Enter 15 float elements in the array \n");

	for(i=0;i<15;i++)
	{
		scanf("%f",(p+i));
	}
}

float mean(float *p)
{
	int i;
	float sum=0.0;
	for(i=0;i<15;i++)
		sum=sum+*(p+i);
	return (sum/15.0);
}

main()
{
	float *a,m;
	a=(float *)malloc(15*sizeof(float));
	input(a);
	m=mean(a);
	printf("\n Mean of the input array is %f \n",m);
}

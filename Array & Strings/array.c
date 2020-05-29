//Program to areate and dispaly array dynamically
#include<stdio.h>
#include<stdlib.h>
void input(int *p)
{
	int i;
	printf("\n Enter 10 elements into the array \n");
	        for(i=0;i<10;i++)
	        {
			  scanf("%d",(p+i));
		}
}

void display(int *p)
{
	int i;
	for(i=0;i<10;i++)
		printf("%d ",*(p+i));
}
main()
{
	int *a;

	a=(int *)malloc(10*sizeof(int));
	input(a);

	display(a);
}



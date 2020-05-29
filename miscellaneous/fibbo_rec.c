//program to print fibonacci series using recursive function
#include<stdio.h>
#include<time.h>
void series(long unsigned int,long unsigned int,int);
main()
{
	int n;
	clock_t end,start;
	double total;
	printf("\n Enter the number of terms \n");
	scanf("%d",&n);
	start=clock();
	series(0,1,n);
	end=clock();
	total=(double)(end-start);
	printf("\t %lf",total);
}

void series(long unsigned int a,long unsigned int b,int num)
{
	if(num!=0)
	{
		printf("%lu \t",a);
	       series(b,a+b,num-1);
	}
	
}	
  

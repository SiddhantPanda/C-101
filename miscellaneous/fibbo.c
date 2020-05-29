//Program to print first n fibbonacci number
#include<stdio.h>
#include<time.h>
main()
{
	long unsigned int a,b,c;
	clock_t start,end;
	double Total;
	    int n,i;
	a=0;
	b=1;
	printf("\n Enter the number of terms u wanna print the series \n");
	scanf("%d",&n);
	i=2;
	start=clock();
	printf("%lu \t %lu\t",a,b);
	while(i<n)
	{
		c=a+b;
		printf("%lu \t",c);
		a=b;
		b=c;
		i++;
	}
	end=clock();
	Total=(double)(end-start);
	printf("\t %lf",Total);
}

#include<stdio.h>
#include<stdlib.h>
#define w1 1
#define w2 1
#define b -1
#define k 1
int Func(int x1,int x2)
{
	int pro=0;
	pro=(w1*x1)+(w2*x2)+b;
	return pro;
}
main()
{
	int x1=0,x2=0,out=0;
	for(x1=0;x1<2;x1++)
	{
		for(x2=0;x2<2;x2++)
		{
			printf("%d  %d  ",x1,x2);
			out=Func(x1,x2);
			if(out>=k)
				printf(" %d \n",1);
			else
				printf(" %d \n",0);
		}
	}
}

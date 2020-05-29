//Program to short a 2 d array
#include<stdio.h>
#include<stdlib.h>
#define row 3
#define col 3
main()
{
	int (*A)[col];
	int i,j,k,l,s,r,c,m,n;
	A=(int (*)[col])malloc(row*col*sizeof(int));
	printf("\n Enter 9 elements \n");
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
		scanf("%d",(*(A+i)+j));
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",*(*(A+i)+j));
		}
		printf("\n");
	}
	printf("\n");


	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			s=*(*(A+i)+j);
			r=i;
			c=j;
			printf("%d \n",s);
			for(k=i;k<row;k++)
			{
				for(l=j;l<col;l++)
				{
					if(*(*(A+k)+l)<s)
					{
						s=*(*(A+k)+l);
						r=k;
						c=l;
					}
				}
			}
			printf("%d \n",s);
			*(*(A+r)+c)=*(*(A+i)+j);
			*(*(A+i)+j)=s;
		}
	}

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",*(*(A+i)+j));
		}
		printf("\n");
	}
}


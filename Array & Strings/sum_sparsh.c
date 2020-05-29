//Program to find the sum two sparsh matrix from the triplet of the matrix
//Program to find the triplet of a sparsh matrix
#include<stdio.h>
#include<stdlib.h>
#define row 4
#define col 4
void input(int (*sparsh)[col],int r,int c)
{
	int i,j;
	printf("\n Enter elements in the aparsh matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",(*(sparsh+i)+j));
		}
	}
}
void display(int (*mat)[col],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",*(*(mat+i)+j));
		}
		printf("\n");
	}
}

int non_zero(int (*mat)[col],int r,int c)
{
	int i,j,count=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			
		{
			if(*(*(mat+i)+j)!=0)
				count++;
		}
	}
	return count;

}
void displaytrip(int (*mat)[3],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",*(*(mat+i)+j));
		}
		printf("\n");
	}
}

void triplet(int (*mat)[col],int (*trip)[3],int r,int c,int non)
{
	int i,j,k=1;
	*(*(trip+0)+0)=r;
	*(*(trip+0)+1)=c;
	*(*(trip+0)+2)=non;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(*(*(mat+i)+j)!=0)
			{
				*(*(trip+k)+0)=i;
				*(*(trip+k)+1)=j;
				*(*(trip+k)+2)=*(*(mat+i)+j);
				k++;
			}
		}
	}
}
void sum_trip(int (*trip1)[3],int (*trip2)[3],int (*sum)[col])
{
	int t1=1,t2=1,j,i;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(((*(*(trip1+t1)+0)==i)&&(*(*(trip1+t1)+1)==j))||((*(*(trip2+t2)+0)==i)&&(*(*(trip2+t2)+1)==j)))
			{
				if(((*(*(trip2+t2)+0)==i)&&(*(*(trip2+t2)+1)==j))&&((*(*(trip1+t1)+0)==i)&&(*(*(trip1+t1)+1)==j)))
				{
					*(*(sum+i)+j)=*(*(trip1+t1)+2)+*(*(trip2+t2)+2);
					t1++;
					t2++;
				}
				else
				{
					if((*(*(trip2+t2)+0)==i)&&(*(*(trip2+t2)+1)==j))
							{
							*(*(sum+i)+j)=*(*(trip2+t2)+2);
							t2++;							
							}
					else
					{
						*(*(sum+i)+j)=*(*(trip1+t1)+2);
						t1++;

					}
				}
			}
			else
			{
				*(*(sum+i)+j)=0;
			}
		}
	}
}

	
main()
{
	int n1,n2;

	int (*ary)[col];
	int (*ary2)[col];
	int (*sum)[col];
	int (*trip)[3];
	int (*trip2)[3];
	ary=(int(*)[col])malloc(row*col*sizeof(int));
	ary2=(int(*)[col])malloc(row*col*sizeof(int));
	sum=(int(*)[col])malloc(row*col*sizeof(int));
	input(ary,row,col);
	input(ary2,row,col);
	n1=non_zero(ary,row,col);
	n2=non_zero(ary2,row,col);
	trip=(int(*)[3])malloc((n1+1)*3*sizeof(int));
	trip2=(int(*)[3])malloc((n2+1)*3*sizeof(int));
	triplet(ary,trip,row,col,n1);
	triplet(ary2,trip2,row,col,n2);
	display(ary,row,col);
	printf("\n");
	display(ary2,row,col);
	printf("\n");
	displaytrip(trip,n1+1,3);
	printf("\n");
	displaytrip(trip2,n2+1,3);
	sum_trip(trip,trip2,sum);
	printf("\n");
	display(sum,row,col);
}


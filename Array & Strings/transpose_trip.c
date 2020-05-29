//Program to find the triplet of transpose of a sparch matrix from the triplet of the matrix
#include<stdio.h>
#include<stdlib.h>
void input(int (*sparsh)[50],int r,int c)
{
	int i,j;
	printf("\n Enter elements in the sparsh matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",(*(sparsh+i)+j));
		}
	}
}
void display(int (*mat)[50],int r,int c)
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

int non_zero(int (*mat)[50],int r,int c)
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

void triplet(int (*mat)[50],int (*trip)[3],int r,int c,int non)
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

void transpose_trip(int (*trip)[3],int (*trans_trip)[3],int row,int col,int non)
{
	int i,j,k=1;
	*(*(trans_trip+0)+0)=col;
	*(*(trans_trip+0)+1)=row;
	*(*(trans_trip+0)+2)=non;
	for(i=0;i<col;i++)
	{
		for(j=1;j<=non;j++)
		{
			if(*(*(trip+j)+1)==i)
			{
				*(*(trans_trip+k)+0)=*(*(trip+j)+1);
				*(*(trans_trip+k)+1)=*(*(trip+j)+0);
				*(*(trans_trip+k)+2)=*(*(trip+j)+2);
				k++;
			}
		}
	}
}



main()
{
	int row,col,n;
	printf("\n Enter the number of rows and coloums of the matrix \n");
	scanf("%d",&row);
	scanf("%d",&col);
	int (*ary)[col];
	int (*trip)[3];
	ary=(int(*)[col])malloc(row*col*sizeof(int));
	input(ary,row,col);
	n=non_zero(ary,row,col);
	trip=(int(*)[3])malloc((n+1)*3*sizeof(int));
	triplet(ary,trip,row,col,n);
	display(ary,row,col);
	printf("\n");
	displaytrip(trip,n+1,3);
	int (*trans_trip)[3];
	trans_trip=(int (*)[3])malloc((n+1)*3*sizeof(int));
	printf("\n");
	transpose_trip(trip,trans_trip,row,col,n);
	displaytrip(trans_trip,n+1,3);
}

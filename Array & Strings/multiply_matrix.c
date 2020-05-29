//Program to multiply two matrices
#include<stdio.h>
#include<stdlib.h>
int multiply(int (*mat1)[50],int (*mat2)[50],int r1,int r2,int c1,int c2,int (*mat3)[50])
{
	int i,j,k;
	if(c1==r2)
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				*(*(mat3+i)+j)=0;
				for(k=0;k<r2;k++)
				{
					*(*(mat3+i)+j)+=*(*(mat1+i)+k)*(*(*(mat2+k)+j));
				}
			}
		}
	return 1;
	}
	else
		return 0;
}
void input(int (*mat)[50],int r,int c)
{
	int i,j;
	printf("\n Enter a elements into the matrix \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",(*(mat+i)+j));
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

void main()
{
	int (*mat1)[50],(*mat2)[50],(*mat3)[50];
	int r1,r2,c1,c2;
	int check;
	printf("\n Enter the number of rows and colomns of 1st matrix\n");
	scanf("%d%d",&r1,&c1);

	mat1=(int (*)[c1])malloc(r1*c1*sizeof(int));
	input(mat1,r1,c1);
	display(mat1,r1,c1);

	printf("\n Enter the number of rows and colomns of 2nd matrix\n");
	scanf("%d%d",&r2,&c2);

	mat2=(int (*)[c2])malloc(r2*c2*sizeof(int));
	input(mat2,r2,c2);
	display(mat2,r2,c2);

	 mat3=(int (*)[c2])malloc(r1*c2*sizeof(int));


	check=multiply(mat1,mat2,r1,r2,c1,c2,mat3);
	if(check==1)
	{
		printf("\n Your multiplied matrix is \n ");
		display(mat3,r1,c2);
	}
	else
	{
		printf("\n Matrix multiplication not possible \n");
	}
}








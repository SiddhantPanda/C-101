#include<stdio.h>
#define max 20
int main()
{
	int i,j,n;
	int a[max][max];
	printf("\n Enter the size of the array:\n");
	scanf("%d",&n);
	printf("\n Enter the elements: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n The elements are:\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			printf("%d \t",a[i][j]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]%2==0)
			{
				printf("\n EVEN : %d\n",a[i][j]);
			}
			else
			{
				printf("\n ODD: %d\n",a[i][j]);
			}
		}
	}
	printf("\n");
	return 0;
}

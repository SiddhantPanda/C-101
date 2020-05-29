//Program to do bubble sort
#include<stdio.h>
#include<stdlib.h>

void input(int *p,int size)
{
	int i;
	printf("\n Enter elements in the array \n");
	for(i=0;i<size;i++)
		scanf("%d",(p+i));
}

void display(int *p,int size)
{
	int i;
	printf("\n Your array is \n");
	for(i=0;i<size;i++)
		printf("%d ",*(p+i));
}

int search(int *p,int size,int e)
{
	int l,f,mid;
	l=size-1;
	f=0;
	while(f<=l)
	{
		mid=(f+l)/2;
		if(*(p+mid)==e)
			return 1;
		else
			if(*(p+mid)>e)
				l=mid-1;
			else
				f=mid+1;
	}
	return 0;
}


void sort(int *p,int size)
{
	int i,j;
	int s,pos;
	for(i=0;i<size;i++)
	{
		s=*(p+i);
		pos=i;
		for(j=i;j<size;j++)
		{
		if(s>*(p+j))
		{
			s=*(p+j);
			pos=j;
		}
		}
		*(p+pos)=*(p+i);
		*(p+i)=s;
	}
}




main()
{
	int *a;
	int s;
	printf("\n Enter the number of elements u want in the array \n");
	scanf("%d",&s);
	a=(int *)malloc(s*sizeof(int));

	input(a,s);
	sort(a,s);
	int ele,sea;
	display(a,s);

	printf("\n Enter a element to search in the array\n");
	scanf("%d",&ele);
	sea=search(a,s,ele);

	if(sea==1)
		printf("\n Element found \n");
	else
		printf("\n Element not found \n");
}


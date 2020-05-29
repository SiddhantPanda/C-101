//Program to change the word formate
#include<stdio.h>
#include<stdlib.h>
void insert(char *c)
{
	scanf("%[^\n]",c);
}

int count(char *a)
{
	int c,i;
	if(*(a+0)==' ')
		c=0;
	else
		c=1;
	for(i=0;*(a+i)!='\0';i++)
	{
		if(*(a+i)==' ')
		{
			if(*(a+i+1)!=' '||*(a+i+1)!='\0')
				c++;
		}
	}
		return c;

}
void formate(char *c,char *a,int w)
{
	int i,count,k=0;
	if(*(c+0)==' ')
		count=0;
	else
	{
		count=1;
		if(count!=w)
		{
		*(a+k)=*(c+0);
		k++;
		*(a+k)='.';
		k++;
	}
	}
	for(i=0;*(c+i)!='\0';i++)
	{
		if(*(c+i)==' ')
		{
			if(*(c+i+1)!=' ')
				count++;
		}
		if(*(c+i-1)==' '&&count!=w)
		{
			*(a+k)=*(c+i);
			k++;
			*(a+k)='.';
			k++;
		}
		if(count==w)
		{
			*(a+k)=*(c+i);
			k++;
		}
	}
}
		
void print(char *a)
{
	printf("%s",a);
}






main()
{
	char *c,*a;
	int w;
	c=(char *)malloc(50*sizeof(char));
	a=(char *)malloc(50*sizeof(char));
	insert(c);
	w=count(c);
	formate(c,a,w);
	print(a);
}

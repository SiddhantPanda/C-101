//Program to count the number of words in astring
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
main()
{
	char *c;
	int w;
	c=(char *)malloc(50*sizeof(char));
	insert(c);
	w=count(c);
	printf("\n Number of words are %d ",w);
}

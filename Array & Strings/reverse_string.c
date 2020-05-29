//Program to reverse a string
#include<stdio.h>
#include<stdlib.h>
void insert(char *c)
{
	scanf("%[^\n]",c);
}

void reverse(char *c)
{
	int i,j;
	char temp;
	for(i=0;*(c+i)!='\0';i++);

	for(j=0;j<i/2;j++)
	{
		temp=*(c+(i-j-1));
		*(c+(i-j))=*(c+j);
		*(c+j)=temp;
	}
}
void display(char *c)
{
	printf("%s",c);
}

main()
{
	char *c;
	c=(char *)malloc(50*sizeof(char));
	insert(c);
	reverse(c);
	display(c);
}

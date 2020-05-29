//Program to dynamically create an string and read it and display it
#include<stdio.h>
#include<stdlib.h>
int i;
void input(char *c)
{
	scanf("%[^\n]",c);
}
void display(char *c)
{
		printf("%s",c);
}
main()
{
	char *c;
	c=(char *)malloc(50*sizeof(char));

	input(c);
	display(c);
}

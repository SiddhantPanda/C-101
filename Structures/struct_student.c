//Program to create a structure to enter student profile
#include<stdio.h>
#include<string.h>
#define size 3
struct student
{
	char name[50];
	int roll;
	int SIC;
	double SGPA;
};

void read(struct student *stu,int index);
void print(struct student *stu,int index);

main()
{
	struct student stu[size];
	int i;
	printf("\n Enter the data of %d student \n",size);

	for(i=0;i<size;i++)
	{
		read(&stu[i],i);
	}

	printf("\n The record of size students are as follow \n");
	for(i=0;i<size;i++)
	{
		print(&stu[i],i);
	}
}


void read(struct student *stu,int index)
{
	printf("\n Enter the details of student %d \n Enter the name \n",index+1);
	scanf(" %[^\n]",stu->name);
	printf("\n Enter the roll number \n");
	scanf("%d",&(stu->roll));
	printf("\n Enter SIC \n");
	scanf("%d",&(stu->SIC));	
        printf("\n Enter your CGPA\n");
        scanf("%lf",&(stu->SGPA));
}

void print(struct student *stu,int index)
{
        printf("\nThe details of student %d \n Name \n",index+1);
	printf("%s",stu->name);
	printf("\n roll number \n");
	printf("%d",stu->roll);
	printf("\n  SIC \n");
	printf("%d",stu->SIC);	
        printf("\n CGPA\n");
        printf("%lf",stu->SGPA);
}


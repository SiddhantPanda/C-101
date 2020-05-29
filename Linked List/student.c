//Program to dynamically assign a nested structure
#include<stdio.h>
#include<stdlib.h>

typedef struct address
{
	int hou_no;
	char str[30];
	char dist[30];
	char state[30];
}add;

typedef struct student 
{
	char name[30];
	char sic[10];
	int roll;
	double cgpa;
	add addr;
}stu;

main()
{
	stu *s1;
	s1=(stu *)malloc(sizeof(stu));
	//Input

	printf("\n Enter Name \n");
	scanf(" %[^\n]",s1->name);
	printf("\n Enter S.I.C \n");
	scanf(" %s",s1->sic);
	printf("\n Enter Roll Number \n");
	scanf("%d",&s1->roll);
	printf("\n Enter C.G.P.A \n");
	scanf("%lf",&(s1->cgpa));
	printf("\n Enter House Number \n");
	scanf("%d",&(s1->addr.hou_no));
	printf("\n Enter Street \n");
	scanf(" %s",s1->addr.str);
	printf("\n Enter District \n");
	scanf(" %s",s1->addr.dist);
	printf("\n Enter State \n");
	scanf(" %s",(s1->addr.state));

	//Output
	printf("\n The details of Student is \n");
	printf("\n Name :- %s \n",s1->name);
	printf(" S.I.C %s \n",s1->sic);
	printf(" Roll Number %d \n",s1->roll);
	printf(" C.G.P.A %lf \n",s1->cgpa);
	printf("Address :- \n");
	printf(" House Number %d \n",s1->addr.hou_no);
	printf(" Street %s \n",s1->addr.str);
	printf(" District %s \n",s1->addr.dist);
	printf(" State %s \n",s1->addr.state);

}

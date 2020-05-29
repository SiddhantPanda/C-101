//Program to create a structure to enter student profilr and sort it according to respective SGPA
#include<stdio.h>
#include<string.h>
#define size 3
struct employee
{
	char name[50];
	char SIC[30];
	char dep[5];
	double salary;
	char desg[30];
};

void read(struct employee *emp,int index);
void print(struct employee *emp);
int search(struct employee *emp,char SIC[30]);

main()
{
	struct employee emp[size];
	int i,ser=0;
	char sic[30];
	printf("\n Enter the data of %d employee \n",size);

	for(i=0;i<size;i++)
	{
		read(&emp[i],i);
	}


	printf("\n Enter the SIC of the employee u want to search for \n");

	scanf("%s",sic);
	for(i=0;i<size;i++)
	{
		ser=search(&emp[i],sic);
		if(ser==1)
		{
			print(&emp[i]);
			break;
		}
	}

	if(ser==0)
		printf("\n Record not found SORRY :( \n");
}


void read(struct employee *emp,int index)
{
	printf("\n Enter the details of employee %d \n Enter the name \n",index+1);
	scanf(" %[^\n]",emp->name);
	printf("\n Enter SIC \n");
	scanf("%s",(emp->SIC));
	printf("\n Enter deparment \n");
        scanf(" %[^\n]",emp->dep);	
        printf("\n Enter your Salary\n");
        scanf("%lf",&(emp->salary));
	printf("\n Enter your designation\n");
	scanf(" %[^\n]",(emp->desg));
}

void print(struct employee *emp)
{
        printf("\nThe details of employee  \n Name \n");
	printf("%s",emp->name);
	printf("\n  SIC \n");
	printf("%s",emp->SIC);
	printf("\n Department \n");
        printf(" %s",emp->dep);	
        printf("\n Salary\n");
        printf("%lf",emp->salary);
	printf("\n Designation \n");
	printf("%s",emp->desg);
}

int search(struct employee *emp,char sic[30])
{
	if(!strcmp(emp->SIC,sic))
		return 1;
	else
		return 0;
}

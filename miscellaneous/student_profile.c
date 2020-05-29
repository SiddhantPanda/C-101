//Program to create a structure to enter student profilr and sort it according to respective SGPA
#include<stdio.h>
#include<string.h>
struct student
{
	char name[50];
	int roll;
	int SIC;
	char branch[5];
	float SGPA;
};

void read(struct student *stu,int index);
void print(struct student *stu,int index);
void sort(struct student stu[10]);

main()
{
	struct student stu[10];
	int i;
	printf("\n Enter the data of 10 student \n");

	for(i=0;i<10;i++)
	{
		read(&stu[i],i);
	}

	printf("\n The record of 10 students are as follow \n");
	for(i=0;i<10;i++)
	{
		print(&stu[i],i);
	}

	sort(stu);

	printf("\n The sorted record of 10 students are \n");
	for(i=0;i<10;i++)
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
	printf("\n Enter branch \n");
        scanf(" %[^\n]",stu->branch);	
        printf("\n Enter your SGPA\n");
        scanf("%f",&(stu->SGPA));
}

void print(struct student *stu,int index)
{
        printf("\nThe details of student %d \n Name \n",index+1);
	printf("%s",stu->name);
	printf("\n roll number \n");
	printf("%d",stu->roll);
	printf("\n  SIC \n");
	printf("%d",stu->SIC);
	printf("\n Branch \n");
        printf(" %s",stu->branch);	
        printf("\n SGPA\n");
        printf("%f",stu->SGPA);
}

void sort(struct student stu[10])
{
	int i,ind,j;
	struct student small;
	for(i=0;i<10;i++)
	{
		strcpy(small.name,stu[i].name);
		small.roll=stu[i].roll;
		small.SIC=stu[i].SIC;
		strcpy(small.branch,stu[i].branch);
		small.SGPA=stu[i].SGPA;
		ind=i;

		for(j=i;j<10;j++)
		{
			if(stu[j].SGPA<small.SGPA)
			{
				ind=j;
			}
		}

		strcpy(stu[i].name,stu[ind].name);
                stu[i].roll=stu[ind].roll;
		stu[i].SIC=stu[ind].SIC;
		strcpy(stu[i].branch,stu[ind].branch);
		stu[i].SGPA=stu[ind].SGPA;
           
                strcpy(stu[ind].name,small.name);
                stu[ind].roll=small.roll;
		stu[ind].SIC=small.SIC;
		strcpy(stu[ind].branch,small.branch);
		stu[ind].SGPA=small.SGPA;
         }

}

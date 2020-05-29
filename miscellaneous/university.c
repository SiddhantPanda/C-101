//Program to make nested mixed link list
#include<stdio.h>
#include<stdlib.h>
int size 30;
typedef struct student
{
	char name[30];
	char batch[10];
	char branch[10];
	char section[3];
	char sic[30];

	sub *next;
}stu;

typedef struct subject
{
	char course[20];
	struct subject *next;
	stu *last_s;
	stu *next_s;
	cor *last_c;

}sub;

typedef struct course
{
	char course[20];
	stu *next;
}cor;

stu student[size];
cor subject[size];

void display_student();
void display_courses();
void display_enrolled();

void enter_courses(int );
void enter_students(int);
void link(int, int);

void update_course(int,int);
void update_student(int,int);
void link_update(int,int,int,int);



main()
{
	char password[30],pass[30];
	password="qwerty12345";

	int stud,sub,ch;
	stu=0;
	sub=0;

	while(1)
	{
		printf("\n 1.Admin \n 2. User \n Other to exit \n");
		scanf("%d",&ch);

	switch(ch)
	{
		case 1: printf("\n Enter the password \n");
			scanf(" %s",password);
			if(strcmp(pass,password)==0)
			{
				if(stud==0&&sub==0)
				{
				printf("\n Enter the number of student \n");
				scanf("%d",&stud);
				printf("\n Enter the number of courses \n");
				scanf("%d",&sub);


				printf("\n Enter the details of courses available \n");
				enter_couses(sub);

				printf("\n Enter the details of student \n");
				enter_students(stud);
				

				link(sub,stu);
				}
				else
				{
					int upst,upsu;
					printf("\n Enter the number of student u want to add \n");
					scanf("%d",&upst);
					printf("\n Enter the number of courses u want to add \n");
					scanf("%d",&upsu);

					printf("\n Enter the details of new courses \n");
					update_course(sub,upsu);

					printf("\n Enter the details of new students \n");
					update_student(stud,upst);

					link_update(stud,upst,sub,upsu);
				}
			}
			else
				printf("\n Wrong Passowrd Entered \n")
				
			break;

		case 2: if(stud==0||sub==0)
				printf("\n No data available for display \n");

			else
			{
				int cho;
				printf("\n Enter the details you want to see \n 1. Student \n 2. Courses \n 3. Students Enrolled in each couses");
				scanf("%d",&cho);
				switch(cho)
				{
					case 1: display_student();
						break;
					case 2: display_courses();
						break;
					case 3: display_enrolled();
						break;
					default:printf("\n Wrong Choice \n"); 
						break;
				}
			}
			break;
		default: printf("\n Wrong Choice \n");
			 exit(0);
	}
	}
}

void display_student()
{
}

void display_courses()
{
}

void display_enrolled()
{
}

void enter_courses(int )
{
}

void enter_students(int)
{
}
 void link(int, int)
{
}


void update_course(int,int)
{
}

void update_student(int,int)
{
}

void link_update(int,int,int,int)
{
}


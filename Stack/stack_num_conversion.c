//Program to implement stack using array
#include<stdio.h>
#include<stdlib.h>
int top=-1;
void Push(char stack[50],char ele);
void display(char stack[50]);
char Pop(char stack[50]);

main()
{
	char bin_ary[50],oct_ary[50],hex_ary[50],ele;
        unsigned int num,cpy;
        int n;
	 printf("\n Enter a number \n");
        scanf("%u",&num);
        cpy=num;
        while(cpy!=0)
        {
            n=cpy%2;
              switch(n)
                {
                        case 0: ele='0';
				 break;
		        case 1: ele='1';
				 break;
               }
            cpy=cpy/2;
        Push(bin_ary,ele);
        }
	printf("\n Binary \n");
        display(bin_ary);
        top=-1;
        cpy=num;
        while(cpy!=0)
        {
            n=cpy%8;
            switch(n)
                {
                        case 0: ele='0';
				 break;
		        case 1: ele='1';
				 break;
			case 2: ele='2';
				 break;
			case 3: ele='3';
				 break;
                        case 4: ele='4';
				 break;
		        case 5: ele='5';
				 break;
			case 6: ele='6';
				 break;
			case 7: ele='7';
				 break;
               }
            cpy=cpy/8;
        Push(oct_ary,ele);
        }
	printf("\n Octal \n");

        display(oct_ary);
        top=-1;
        cpy=num;
        while(cpy!=0)
        {
            n=cpy%16;
            
            cpy=cpy/16;
                switch(n)
		{
                        case 0: ele='0';
				 break;
		        case 1: ele='1';
				 break;
			case 2: ele='2';
				 break;
			case 3: ele='3';
				 break;
                        case 4: ele='4';
				 break;
		        case 5: ele='5';
				 break;
			case 6: ele='6';
				 break;
			case 7: ele='7';
				 break;
			case 8: ele='8';
				 break;
			case 9: ele='9';
				 break;
			case 10: ele='A';
				 break;
		        case 11: ele='B';
				 break;
			case 12: ele='C';
				 break;
			case 13: ele='D';
				 break;
			case 14: ele='E';
				 break;
			case 15: ele='F';
				 break;
		}
            

        Push(hex_ary,ele);
        }
	printf("\n Hexa Decimal \n");

        display(hex_ary);
}

void Push(char stack[50],char ele)
{
top++;
stack[top]=ele;

}

void display(char stack[50])
{
	int i;
	printf("\n Top ---> %c \n",stack[top]);
	for(i=top-1;i>=0;i--)
	{
		printf("%c \n",stack[i]);
	}
}


char Pop(char stack[50])
{
    char ele;
	if(top==-1)
		return -1;
	else
	{
		if(top==0)
		{
			ele=stack[top];
			top=-1;
		}
		else
		{
			ele=stack[top];
			top--;
		}
	return ele;
	}
}





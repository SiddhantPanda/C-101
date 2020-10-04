#include<stdio.h>
int main()
{


    int n,reverse=0,original,remainder;
    printf("enter the number\n");
    scanf("%d",&n);
    original=n;
    while (n!=0)
    {remainder=n%10;
     reverse=reverse*10+remainder;
     n=n/10;
    }
    if(original==reverse)
    {
        printf("the no is palindrome");
    
    }
    else
    {
        printf("the no is not palindrome");
    }
    return 0;
    



}
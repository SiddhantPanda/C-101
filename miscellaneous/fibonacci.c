#include<stdio.h>
int main()
{
    int x1=0,x2=1,n,i,next;
    printf("enter the no. of terms");
    scanf("%d",&n);
    printf("first %d terms of fibonacci series:\n",n);
    for(i=0;i<n;i++)
    {
        if(i<=1)
        next=i;
        else
        {
            next=x1+x2;
            x1=x2;
            x2=next;

        }
        printf("%d\n",next);
        

    }
    return 0;

}    
//wap to print nth term of fibbonacci series
#include<stdio.h>
int main()
{
    int i,n,f1=0,f2=1,f3;
    printf("enter the nth term of f");
    scanf("%d",&n);
    if (n<0)
    {
        printf("enter number is invalid");
    }
    else
    {
        if(n==1)
        {
            printf("the entered term is %d",f1);
        }
        else
        {
            if(n==2)
           {
            printf("the entered term is %d",f2);
           }
        }
    }
    for(i=3;i<=n;i++)
    {
        f3=f2+f1;
        f1=f2;
        f2=f3;
    }
    printf("the entered nth term is %d",f3);
    return 0;
}
//wap to print a number is in fibbonacci series or not
#include<stdio.h>
int main()
{
    int n,f1=-1,f2=1,f3;
    printf("enter any  number");
    scanf("%d",&n);
    if (n<0)
    {
        printf("enter number is invalid");
    }
    else if(n==f1 || n==f2)
    {
        printf("the element is in fibonacci series");
    }
    while(f3<n)
    {
        f1=f2;
        f2=f3;
        f3=f2+f1;
    }
    if(f3==n)
    {
        printf("the number is in fibnocci series");
    }
    else
    {
        printf("the number is not in fibnocci series");
    }
    return 0;
}
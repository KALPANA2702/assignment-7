//wap to print nth term of fibbonacci series
#include<stdio.h>
int main()
{
    int i,n,f1=-1,f2=1,f3;
    printf("enter the nth term of f");
    scanf("%d",&n);
    if (n<0)
    {
        printf("enter number is invalid");
    }
    for(i=1;i<=n;i++)
    {
        f3=f2+f1;
         printf(" %d",f3);
        f1=f2;
        f2=f3;
    }
    return 0;
}
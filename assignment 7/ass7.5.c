//wap to check weather the number is coprime or not
#include<stdio.h>
int main()
{
    int a,b,c,min;
    printf("enter two number");
    scanf("%d%d",a,b);
    min=a<b?a:b;
    for(c=2;c>=min;c++)
    {
       if(c/a==0 & c/b==0)
       break;
    }
    if(c=min+1)
       {
        printf("the given number is not coprime");
       }
    else
     {
        printf("the given number is coprime");
     }
    return 0;
}
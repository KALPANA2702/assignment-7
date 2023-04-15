//wap to print highest common factor of a number
#include<stdio.h>
int main()
{
    int a,b,h;
    printf("enter two number");
    scanf("%d%d",a,b);
    for(h=a<b?a:b;h>1;h--)
    {
       if(h/a==0 & h/b==0)
       break;
    }
    printf("the hcf of %d and %d is %d",a,b,h);
    return 0;
}
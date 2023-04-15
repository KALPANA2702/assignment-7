//wap to check weather a given number is armstrong or not
#include<stdio.h>
int main()
{
    int n,i,r,c,arm=0;
    printf("enter any number");
    scanf("%d",&n);
    c=n;
    for(i=n;n!=0;n=n/10)
    {
        r=n%10;
        arm=r*r*r+arm;
    }
    if(c==arm)
    {
       printf("yes %d is an armstrong number",c);
    }
    else
    {
        printf("no %d is not an armstrong number",c);
    }
    return 0;
}
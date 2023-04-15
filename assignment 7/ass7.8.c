//wap tp print next prime number of a given number
#include<stdio.h>
int main()
{
    int i,n,j;
    printf("enter a number");
    scanf("%d",n);
    for(i=n+1; ;i++)
    {
        for(j=2;j<=n+1;j++)
        {
            if(i%j==0)
             break;
        }
        if(i==x)
        break;
    }
    printf("the next prime number of %d is %d",n,i);
    return 0;
    
}
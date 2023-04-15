//wap to print prime number btw two given number
#include<stdio.h>
int main()
{
    int i,j,n,f;
    printf("enter number");
    scanf("%d %d",n);
    for(i=n;;i++)
     {
        for(j=2;j<=i;j++)
         {
            if(i%j==0)
            break;
         }
               if(i==j)
                 {
                   printf("\n%d",i);
                  }
          }
   return 0;
}
     
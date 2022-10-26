#include<stdio.h>
int main()
{
    int n,i=2,s;
    printf("enter a number");
    scanf("%d",&n);
    while(i<=n)
    {
     s=n;
     if(s%i==0)
         {
         printf("%d",i);
         s=s/i;
         }
         else if(s/i==0)
         {
         //continue;
         }
         else
         {
         i++;
         }
     }
    }

#include<stdio.h>
int main()
{
    int n,i,a=-1,b=1,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    
    printf("%d",sum);
  
}
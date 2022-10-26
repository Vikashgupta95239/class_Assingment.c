#include<stdio.h>
int main()
{
    int n,i,sum=0,a=-1,b=1;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=a+b;
        printf(" %d  ",sum);
        a=b;
        b=sum;
    }
    
}

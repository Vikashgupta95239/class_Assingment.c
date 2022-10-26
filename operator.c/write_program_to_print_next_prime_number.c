#include<stdio.h>
int main()
{
     int n,i,j;
    printf("enter a number");
    scanf("%d",&n);
    for(i=n+1;i<=2*n;i++)
    {
        for(j=2;j<=n/2;j++)
        {
            if(i%j==0)
            break;
        }
        if(j>n/2)
        break;
    }
    if(i==4)
    printf("5");
    else
    printf("%d",i);
}
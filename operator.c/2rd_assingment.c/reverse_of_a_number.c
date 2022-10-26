#include<stdio.h>
#include<conio.h>
int main()
{
    int n,m,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        n=n/10;
        sum=sum*10+m;


        
    }
    printf("%d",sum);
}
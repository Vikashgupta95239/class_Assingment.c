#include<stdio.h>
#include<conio.h>
int main()
{
    int n,count=0,m;
    printf("enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        n=n/10;
        count++;

    }
//m=n%10;
printf("%d",count);
}
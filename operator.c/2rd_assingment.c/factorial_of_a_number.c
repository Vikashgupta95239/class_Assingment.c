#include<stdio.h>
#include<conio.h>
int main()
{
    int n,s=1;
    printf("enter a number ");
    scanf("%d",&n);
    while(n>0)
    {
        s=s*n;
        n--;

    }
    printf("%d",s);
}
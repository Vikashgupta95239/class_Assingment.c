#include<stdio.h>
int Sum(int);
int main()
{
    int n,s=0;
    printf("Enter a number to calculate sum 1 to n number");
    scanf("%d",&n);
    s=Sum(n);
    printf("sum=%d",s);
    return 0;
}
int Sum(int n)
{  
    if(n>=1)
    {
    return (n+Sum(n-1));
    }
}

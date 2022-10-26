#include<stdio.h>
int Prime(int n);
int Prime(int n)
{int i;
    for(i=2;i<=n/2;i++)
    {
    if(n%i==0)
    break;
    }
    return i;
}
int main()
{
    int m,s;
    printf("enter a nubmer to check prime or not ");
    scanf("%d",&m);
    s=Prime(m);
    if(s>m/2)
printf("prime");
else
printf("not prime");
}
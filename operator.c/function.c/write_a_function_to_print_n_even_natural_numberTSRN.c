#include<stdio.h>
int Evan(int n);
int Evan(int n)
{
for(int i=1;i<=n;i++)
{
printf("%d ",2*i);
}
}
int main()
{   int m;
    printf("enter a number");
    scanf("%d",&m);
    Evan(m);
    printf("even number");
}
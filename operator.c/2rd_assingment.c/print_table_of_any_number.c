#include<stdio.h>
#include<conio.h>
int main()
{
    int n,m,i=1;
    printf("enter a number");
    scanf("%d",&n);
    while(i<=10)
{
    m=n*i;
    printf("%d*%d=%d\t",n,i,m);
     i++;
}
}
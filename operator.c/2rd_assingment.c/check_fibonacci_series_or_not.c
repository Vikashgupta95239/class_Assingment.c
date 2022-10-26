#include<stdio.h>
int main()
{
    int n,a,b,sum;
    p:
    printf("Enter three number");
    scanf("%d%d%d",&a,&b,&sum);
    if(a+b==sum)
    printf("fibonacci series\n");
    else
    printf("not fibonacci series\n");
    goto p;
}
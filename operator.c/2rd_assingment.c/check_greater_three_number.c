#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("a is greater");

    }
    else if(b>a&&b>c)
    {
        printf("b is greater");
    }
    else if(a==b&&b==c)
    {
        printf("all are equal");
    }
    else{
        printf("c is grater");
    }
}
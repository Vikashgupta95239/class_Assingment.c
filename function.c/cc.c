#include<stdio.h>
int main()
{
    int n;
    g:
    printf("enter the number\n2");
    scanf("%d",&n);
    if(n%11==0&&n%5==0)
        printf("number divisible by both 5 and 11");
    else if(n%11==0)
    printf("only divisible by 11");
    else if(n%5==0)
    printf("number divisible by 5");
    else
    printf("try again");
    goto g;
    return 0;
}
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number to check divisinle by 5 or not");
    scanf("%d",&n);
    printf(n%5==0 ? "divisible by 5 ":" not divisible by 5 ");
}
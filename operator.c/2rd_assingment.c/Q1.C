#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    //printf(n>0?"positive number":"non positive number");
    if(n>0)
    {
        printf("positive number");
    }
   // else
   if(n<=0)
    {
        printf("non positive");
    }
}
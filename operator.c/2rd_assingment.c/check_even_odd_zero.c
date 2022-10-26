#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    a:
    printf("enter a number");
    scanf("%d",&n);
    if(n>0)
    {
    printf("positive number");
    }
    else if(n<0)
    
    printf("negative number");
    else
    printf("zero\n");
      goto a;
    
}
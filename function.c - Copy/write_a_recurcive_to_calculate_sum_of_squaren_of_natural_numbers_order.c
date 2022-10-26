#include<stdio.h>
int Square(int n);
int main()
{ int n,k;
    printf("Enter a number to calculate sum of square of n nautural number");
    scanf("%d",&n);
    k=Square(n);
    printf("%d",k);
}
int Square(int n)
{
if(n>=1)
return(n*n+Square(n-1));
}
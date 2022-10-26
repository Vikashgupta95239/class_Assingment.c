#include<stdio.h>
void odd(int);
int main()
{
    int n;
    printf("Enter a number upto print odd ");
    scanf("%d",&n);
    odd(n);
}
void odd(int n)
{
    if(n>=1)
    {     odd(n-1);
        if(n%2)
          printf("%d ",n); 
         
        }
    
}
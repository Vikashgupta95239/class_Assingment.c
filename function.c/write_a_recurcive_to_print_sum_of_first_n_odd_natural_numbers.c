#include<stdio.h>
int odd(int);
int main()
{
    int n,k;
    printf("Enter a number upto print odd ");
    scanf("%d",&n);
    k=odd(n);
    printf("%d ",k);
}
int odd(int n)
{
    if(n>=1)
    { 
          return ((2*n-1)+odd(n-1));
        
    }
}

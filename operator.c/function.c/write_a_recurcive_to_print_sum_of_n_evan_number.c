#include<stdio.h>
int Sum(int n);
int main()
{
    int n,s=0;
    printf("Enter a number to calculate sum 1 to n number");
    scanf("%d",&n);
    s=Sum(n);
    printf("sum=%d",s);
   
}
int Sum(int n)
{  int p;
    if(n>=1)
    { 
        p=2*n+Sum(n-1);
        return p;
        
    }
}

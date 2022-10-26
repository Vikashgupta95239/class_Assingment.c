#include<stdio.h>
int Fibonacci(int n);
int a=1,b=-1,sum=0;
int main()
{
int n;
printf("Enter a number to find fibonacci series");
scanf("%d",&n);
Fibonacci(n);
}
int Fibonacci(int n)
{  
    if(n==0)
    return 0;
        sum=a+b;
         printf("%d  ",sum);
         b=a;
        a=sum;
       Fibonacci(n-1);   
}

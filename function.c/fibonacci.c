#include<stdio.h>
//int Fibonacci(int n);
int main()
{
int n,a=1,b=-1,sum=0;
printf("Enter a number to find fibonacci series");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
sum=a+b;
printf("%d",sum);
b=a;
a=sum;

}





}
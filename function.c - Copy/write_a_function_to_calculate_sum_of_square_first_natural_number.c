#include<stdio.h>
int Square(int n);
int Square(int n)
{
int sum=0;
{
    for(int i=1;i<=n;i++)
    sum=sum+i*i;
}
return sum;
}
int main()
{
    int m;
    printf("enter the number");
    scanf("%d",&m);
  printf("%d", Square(m));
}

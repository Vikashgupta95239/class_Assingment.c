#include<stdio.h>
int Nsum(int n);
int Nsum(int n)
{   int sum=0;
    for(int i=1;i<=n;i++)
    {
      
  sum=sum+i;
    }
    return sum;
}
int main()
{
    int m;
    printf("enter the number");
    scanf("%d",&m);
    printf("sum of natural number=%d",Nsum(m));
}
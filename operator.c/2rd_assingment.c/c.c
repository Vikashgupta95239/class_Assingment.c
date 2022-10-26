#include<stdio.h>
int main()
{
    float a=-1,b=1,c,i=0,n;
    printf("enter a number");
    scanf("%d",&n);
while (i<=n)
{
 c=a+b;
 printf(" %f ",c); 
  a=b;
  b=c;
 i++;  
}
}

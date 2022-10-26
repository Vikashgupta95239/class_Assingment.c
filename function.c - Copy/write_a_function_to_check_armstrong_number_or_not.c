#include<stdio.h>
void allArmstrog();
void Armstrog();
void Armstrog()
{
    int a,i,sum=0,m,n;
    printf("Enter a number to check Armstrong or not");
    scanf("%d",&n);
    a=n;
    while(a)
    {
     m=a%10;
      sum=sum+m*m*m;
     a=a/10;
    }
    if(sum==n)
    printf("armstron number");
    else
    printf("not armstrong number");
}
void allArmstrog()
{
    int a,i,sum=0,m,n;
    printf("Enter a number to print n armstrong number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    a=i;
    sum=0;
    while(a)
    {
        m=a%10;
        sum=sum+m*m*m;
         a=a/10;
    }
    if(sum==i)
    printf("%d  ",sum); 
}
}
int main()
{
   // Armstrog();
 allArmstrog();
}

// #include<stdio.h>
// int main()
// {
// int n,i=1,count=0;
// printf("enter a number");
// scanf("%d",&n);
// while (i<=n)
// {
//    if(n%i==0)
//    count++;
//    i++;
// }
// if(count==2)
// printf("prime number%d",n);
// else 
// printf("not prime number");
// }
//######################################################################
#include<stdio.h>
int main()
{
int n,i;
printf("enter a number");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
   if(n%i==0)
   break;
}
if(i>=n/2 && n>=2)
printf("prime number");
else
printf("not prime");
}
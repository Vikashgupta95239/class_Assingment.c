#include<stdio.h>
int fectorial(int n);
int fectorial(int n)
{ 
    int fect=1;
for(int i=1;i<=n;i++)
{
fect=fect*i;
}
return fect;
}
int main()
{
int m;
printf("enter a number");
scanf("%d",&m);
printf("fectorial=%d", fectorial(m));
}
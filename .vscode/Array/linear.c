#include<stdio.h>
int main()
{ int n,a[n],i,flag,x;
printf("Enter the size of array");
scanf("%d",&n);
printf("Enter the element of array");
for(i=1;i<=n;i++)
{
printf(" element no=%d\n",i);
scanf("%d",&a[i]);
}
printf("Enter element to serach");
scanf("%d",&x);
for(i=1;i<=n;i++)
{
    if(x==a[i])
    {
        flag=1;
    }
}
if(flag==1)
printf("element is present");
else
printf("element is not present");
}
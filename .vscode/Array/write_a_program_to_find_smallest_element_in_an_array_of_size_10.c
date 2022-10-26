#include<stdio.h>
int main()
{
    int a[10],i,small;
    printf("enter 10 element");
    for(i=0;i<=9;i++)
    { printf("element no =%d\n",i+1);
    scanf("%d",&a[i]);
    }
    small=a[0];
    for(i=1;i<=9;i++)
    {
    if(a[i]<small)
    small=a[i];
    }
    printf("smallest element =%d",small);
}

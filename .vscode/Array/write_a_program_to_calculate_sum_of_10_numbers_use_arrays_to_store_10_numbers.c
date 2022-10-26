#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    
    printf("Enter 10 number to calculate average");
    for ( i = 0; i <=9; i++)
    {
        printf("Element No=%d\n",i+1);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("sum=%d",sum);
    
}
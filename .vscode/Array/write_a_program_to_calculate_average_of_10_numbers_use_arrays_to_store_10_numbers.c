#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    float avg;
    printf("Enter 10 number to calculate average");
    for ( i = 0; i <=9; i++)
    {
        printf("Element No=%d\n",i+1);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/10.0;
    printf("average=%f",avg);
    
}
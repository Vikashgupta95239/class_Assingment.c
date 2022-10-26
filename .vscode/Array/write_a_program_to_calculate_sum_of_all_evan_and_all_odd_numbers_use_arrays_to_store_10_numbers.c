#include<stdio.h>
int main()
{
    int a[10],i,sumE=0,sumO=0;
    
    printf("Enter 10 number to calculate average");
    for ( i = 0; i <=9; i++)
    {
        printf("Element No=%d\n",i+1);
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        sumE=sumE+a[i];
        else
        sumO=sumO+a[i];
    }
    printf("sum of Evan=%d",sumE);
      printf("sum of odd=%d",sumO);
}
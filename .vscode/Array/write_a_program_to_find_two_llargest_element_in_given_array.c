#include<stdio.h>
int main()
{
    int a[10],i,m;
    
    printf("Enter 10 number to for find greatest number");
    for ( i = 0; i <=9; i++)
    {
        printf("Element No=%d\n",i+1);
        scanf("%d",&a[i]);  
    }
     m=a[0];
    for ( int j= 1; j <=9; j++)
    {
        if(a[j]>m)
        {
            m=a[j];
        }
    }
    printf("largest number is =%d",m);
    
    
}
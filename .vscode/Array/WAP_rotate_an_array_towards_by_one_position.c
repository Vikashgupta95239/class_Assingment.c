#include<stdio.h>
int main()
{
    int a[5],b[5],i;
    printf("Enter 5 element");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    
    
     b[0]=a[4];
     for(i=1;i<5;i++)
    {
      b[i]=a[i-1];
    }
    //  b[2]=a[1];
    //  b[3]=a[2];
    //   b[4]=a[3];
    // printf("%d ",b[0]);
    // printf("%d ",b[1]);
    //  printf("%d ",b[2]);
    //printf("%d ",b[3]);
    //printf("%d ",b[4]);
    for(i=0;i<5;i++)
    {
    printf("%d ",b[i]);
    }
}
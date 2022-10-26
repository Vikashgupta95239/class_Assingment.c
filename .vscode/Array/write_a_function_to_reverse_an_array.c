#include <stdio.h>
int main()
{   
    int n;
 printf("Enter the size of array");
      scanf("%d",&n);
      int a[n], i,b[n]; 
    for (i = 0; i <n; i++)
    {
        printf("Element no--->%d\n", i + 1);
        scanf("%d", &a[i]);
    }
    // for(i=0;i<n;i++)
    // {
    //  b[n-1-i]=a[i];
    // }
    // for(i=0;i<n;i++)
    // {
    // printf("%d ",b[i]);
    // }
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
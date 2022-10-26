// #include <stdio.h>
// void reverse()


#include<stdio.h>
void NSEL(int arr[],int n);
int main()
{
    int n,A[n],i,j;
    printf("Enter how many element you want");
    scanf("%d",&n);
    printf("Enter %d elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
NSEL(A,n);
}
void NSEL(int arr[],int n)
{
int i,j;
for(i=1;i<n;i++)
{ 
    
    for(j=i-1;j>=0;j--)
    {
        if(arr[i]<arr[j])
            {  
         printf("%d..",arr[j]);
          break;
    }
    }
    	if (j == -1)
     printf(".."); 
    }
}








// int main()

// {   
//     int n;
     
//  printf("Enter the size of array");
//       scanf("%d",&n);
//       int a[n], i,b[n]; 
//     for (i = 0; i <n; i++)
//     {
//         printf("Element no--->%d\n", i + 1);
//         scanf("%d", &a[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//      b[n-1-i]=a[i];
//     }
//     for(i=0;i<n;i++)
//     {
//     printf("%d ",b[i]);
//     }
// }
#include <stdio.h>
int main()
{
    int a[10], i, t, j;
    printf("enter the 10 element for sorting \n");
    for (i = 0; i <= 9; i++)
    {
        printf("Element no--->%d\n", i + 1);
        scanf("%d", &a[i]);
    }
    for (j = 1; j <=9; j++)
    {

        for (i = 0; i <= 9-j; i++)
        {
            if (a[i] <0)
            {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
        }

        printf("%d ", a[i]);
    }
}
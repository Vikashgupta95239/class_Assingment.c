#include<stdio.h>
void sort(int arr[],int n);
int main()
{
    int n,a[100],i,j;
    printf("Enter the size of an array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Elemet =%d   ",i+1);
        scanf("%d",&a[i]);
    }
    sort(a,n);
}
void sort(int arr[],int n)
{
    int i,j,t;
    for(j=1;j<=n;j++)
    {   
        for(i=0;i<n-j;i++)
        {
        if(arr[i]>arr[i+1])
        {
          t=arr[i];
          arr[i]=arr[i+1];
          arr[i+1]=t;
        }
        } 
         printf("%d ",arr[i]);
    }

}

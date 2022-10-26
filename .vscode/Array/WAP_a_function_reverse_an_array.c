#include<stdio.h>
void reverse(int arr[],int n);
int main()
{
    int n,a[n],i;
    printf("enter total element number do you want reverse ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    reverse(a,n);

}
void reverse(int arr[],int n)
{
    int i,ar[n];
    for(i=1;i<=n;i++)
    {
        ar[i]=arr[n-i+1];
    }
    for(i=1;i<=n;i++)
    {
    printf("%d ",ar[i]);
    }
}
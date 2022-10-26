#include<stdio.h>
void rotate(int arr[],int n);
int main()
{
    int n,A[n],i;
    printf("how many elemnt do you want to rotate right ny one position");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {  printf("element=%d   ",i);
        scanf("%d",&A[i]);
    }
rotate(A,n);
}
void rotate(int arr[],int n)
{
int B[n],i;
B[1]=arr[n];
// printf("%d",B[1]);
for(i=2;i<=n;i++)
{
   B[i]=arr[i-1];  
}
for(i=1;i<=n;i++)
{
printf("  %d",B[i]);
}
} 
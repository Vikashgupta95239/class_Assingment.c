#include<stdio.h>
void frequency(int arr[],int n);
int main()
{
    int n,A[n],i;
    printf("how many elemnt do you want count frequency of number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {  printf("element=%d   ",i);
        scanf("%d",&A[i]);
    }
frequency(A,n);
}
void frequency(int arr[],int n)
{
    int i,j,c;
    for(i=1;i<=n;i++)
    {   c=1;
        if(arr[i]!=-1)
        {  
        for(j=i+1;j<=n;j++)
        {
            if(arr[i]==arr[j]) 
            {
            c++;
            arr[j]=-1;
            }
        }
        printf("%d------->%d\n",arr[i],c);
        }
        
    }
}
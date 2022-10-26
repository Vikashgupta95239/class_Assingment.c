#include<stdio.h>
void print(int n);
int main()
{
    int n,k;
    printf("Enter a number upto print natural number");
    scanf("%d",&n);
    print(n);
}
void print(int n)
{
    if(n>=1)
    {
        print(n-1);
           if(n%2==0)
        printf("%d ",n);
        
    }
}
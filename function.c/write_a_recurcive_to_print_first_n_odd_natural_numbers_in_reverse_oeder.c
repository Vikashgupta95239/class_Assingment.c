#include<stdio.h>
int odd(int);
int main()
{
    int n;
    printf("Enter a number upto print odd ");
    scanf("%d",&n);
    odd(n);

}
int odd(int n)
{
    if(n==0)
    {   return 0;
        //if(n%2)
          } 
          printf("%d ",2*n-1);
          odd((n-1));
          
        
    
}

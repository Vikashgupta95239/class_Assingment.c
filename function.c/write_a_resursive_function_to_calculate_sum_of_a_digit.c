#include<stdio.h>
int DigitSum(int n);
int main()
{
    int n;
    printf("Enter a number for sum of all digit");
    scanf("%d",&n);
   printf("sum=%d",DigitSum(n));

}
int DigitSum(int n)
{  
  
if(n==0)
    return (0);
    
return(n%10+DigitSum(n/10));
}
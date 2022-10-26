#include <stdio.h>
int main()
{
    int a, b, i, n, m,count=0;
    printf("enter two number");
    scanf("%d%d", &a, &b);
    for (i=a<b?a:b;i>=1;i--)
    {
        if(a%i==0&&b%i==0)
        break;

    }
    printf("hcm is %d",i);

    // {

    //     if (a > b)
    //     {
    //         n = b * i; 
    //         if (n % a == 0)
    //       printf("  %d  ", n);
    //       //printf("  f");
            
    //     }
        
    //     else
    //     {
    //         m = a * i;
    //         if (m % b == 0)
    //         printf(" %d ", m);
    //         //6 printf("  m");
        
    //     }
        
    // }
}
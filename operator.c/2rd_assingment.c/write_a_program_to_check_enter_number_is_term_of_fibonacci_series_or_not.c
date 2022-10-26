#include <stdio.h>
int main()
{
    int n, i, a = 1, b = -1, sum = 0;
    printf("enter a number to check term of fibonacci series or not ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        sum = a + b;
        if (sum == n)
        {
            printf("yes this number is term of fibonacci series");
            break;
        }
        b = a;
        a = sum;
    }
    if (i > n)
    {
        printf("this number is not a term of fibonacci series");
    }
}

#include <stdio.h>
void Evan(int n);
int main()
{
    int n;
    printf("Enter a number to print even number in reverse order");
    scanf("%d", &n);
    Evan(n);
}
void Evan(int n)
{
    if (n >= 1)
    {
        //if(n%2==0)
        printf("%d ",  2*n);
        Evan(n - 1);
    }
}

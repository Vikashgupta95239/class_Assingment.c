#include <stdio.h>
#include <windows.h>
void print(int n);
int main()
{
    system("cls");
    int n, k;
    printf("Enter a number upto print natural number");
    scanf("%d", &n);
    print(n);
printf("j");
    // printf("%d",k);
}
void print(int n)
{
    if (n >= 1)
    {    
        print(n - 1);
        printf("%d  ", n);
        printf("jk");
    }
}
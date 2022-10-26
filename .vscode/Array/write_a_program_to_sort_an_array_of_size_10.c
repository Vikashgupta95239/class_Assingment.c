#include <stdio.h>
int main()
{
    int a[10], i, t, j;
    printf("enter the 10 element for sorting \n");
    for (i = 0; i <= 9; i++)
    {
        printf("Element no--->%d\n", i + 1);
        scanf("%d", &a[i]);
    }
    for (j = 1; j <=9; j++)
    {

        for (i = 0; i <= 9-j; i++)
        {
            if (a[i] > a[i + 1])
            {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
        }
        printf("%d ", a[i]);
    }
}
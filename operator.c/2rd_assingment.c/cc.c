#include <stdio.h>
int main()
{
    int n, i, count= 0, j;
    printf("enter a number");
    scanf("%d", &n);
    for (j = 2; j <n;j++ )
    {
        for (i = 2; i <j; i++)
        {
            if (j % i == 0)
                count++;
        }
        if (count == 0)
            printf("%d   ", j);
    }

}

//         else
//         printf("not prime number");
// }
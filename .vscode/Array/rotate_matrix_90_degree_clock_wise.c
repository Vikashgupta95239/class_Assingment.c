#include <stdio.h>
int main()
{
    int i, j, A[3][3], B[3][3];
    printf("enter the 9 element of the matrix");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            B[j][2 - i] = A[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
}


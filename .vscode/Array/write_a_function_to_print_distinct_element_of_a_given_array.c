#include <stdio.h>
void distinct(int arr[], int n);
int main()
{
    int n, A[n], i;
    printf("how many elemnt do want to enter");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("element=%d   ", i);
        scanf("%d", &A[i]);
    }
    distinct(A, n);
}
void distinct(int arr[], int n)
{
    // Ex 123345612
    // output 123456
    int i, j, c;
    for (i = 1; i <= n; i++)
    {
        if (arr[i] != -1)
        {

            for (j = i + 1; j <= n; j++)

            {

                if (arr[i] ==arr[j])
                {
                    arr[j] = -1;
                }
            }f
         printf("%d  ", arr[i]);
        }
    }
}
    
// * * * * *
//   * * *
//     *
//   * * *
// * * * * *


#include <stdio.h>
int main()
{
    int i, j, n = 3, k;
    for (i = 3; i >= n; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (j = 1; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }}
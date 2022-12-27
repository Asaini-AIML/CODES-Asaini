
#include <stdio.h>
int main()
{
    int i, n, x,sum = 1, fact = 1,power=1;
    printf("enter the no.\n");
    scanf("%d", &n);
    printf("enter the x\n");
    scanf("%d", &x) ;
    for(i = 1; i <= n; i++)
    {
        fact = fact *i;
        power = power * x;
        sum = sum + (power / fact);
    }
    printf("the sum of no. %d", sum);
    return 0;
}
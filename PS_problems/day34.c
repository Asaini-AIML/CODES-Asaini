
#include <stdio.h>
int main()
{
    int i, n, x,sum = 0, fact = 1,power=1,s=1;
    printf("enter the no.\n");
    scanf("%d", &n);
    printf("enter the x\n");
    scanf("%d", &x) ;
    for(i = 1; i <=2*(n-1) ; i=i++)
    {
        fact = fact *i;
        power = power * x;
     if(i%2!=0)
       { 
        sum = sum + ((power / fact)*s);
        s=s*(-1);
       }
    }

    printf("the sum of no. %d", sum);
    return 0;
}
//1!/1+2!/2+3!/3+...n!/n
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the no.\n");
    scanf("%d",&n);
    int sum=0;
    int fact=1;
    for ( i = 1; i <= n; i++)
    {
        fact=fact+i;
        sum=sum+(fact/i);
    }
    printf("the sum of no. %d",sum);
    return 0;
}
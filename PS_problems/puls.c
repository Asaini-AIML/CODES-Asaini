//1!+2!+3!........+n!
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the no.\n",n);
    scanf("%d",&n);
    int sum=0;
    int fact=1;
    for ( i = 0; i < n; i++)
    {
        fact=fact+i;
        sum=sum+fact;
    }
    printf("the sum of no. %d",sum);
    
}
// A
// BC
// CDE
// DEFG

#include<stdio.h>
int main()
{
    int i,j,n=4,k=0;
    for(i=1;i<=n;i++){
        k=64+i;
        for(j=1;j<=i;j++){
            printf("%c",k++);
        }
        printf("\n");
    }
    return 0;
}
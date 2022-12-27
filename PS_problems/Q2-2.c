#include<stdio.h>
int main()
{
    int i,j,n=3,k=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c",(char)(i+64));
        }
        printf("\n");
    }
    return 0;
}
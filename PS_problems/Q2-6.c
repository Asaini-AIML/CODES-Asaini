//    1
//   212
//  32123
// 4321234

#include<stdio.h>
int main()
{
    int i,j,n=4,k;
    for(i=1;i<=n;i++){
        k=i;
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",k--);
        }
        k=k+2;
        for(j=1;j<i;j++){
            printf("%d",k++);   
        }
        printf("\n");
    }
    return 0;
}
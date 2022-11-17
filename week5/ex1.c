
#include <stdio.h>

void main (void){
    int k,i,n;
    printf("Input the number of rows:");
    scanf("%d",&n);
    for (i=1;i<=n;++i)
        {
        for (k=1;k<=i;++k)
            printf("*");
        printf("\n");
        }
}
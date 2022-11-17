#include <stdio.h>

void main(void)
{
    int k,i,n;
    printf("Input the height of triangle:");
    scanf("%d",&n);
     for (i=1;i<=n;++i)
        {
        for (k=n-i;k>=0;--k)
            printf(" ");
        for (k=0;k<i;++k)
            printf("*");
        for (k=i-2;k>=0;--k)
            printf("*"); 
        printf("\n");            
        }

}
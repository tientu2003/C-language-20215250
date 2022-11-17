#include <stdio.h>

void main(void)
{   
    int i,k,n,c;
    printf("Input the number of rows:");
    scanf("%d",&n);

    for (i=1;i<=n;++i)
        {for (k=0;k<i;++k)
            printf("%c",'A'+ k);
        for (k=i-2;k>=0;--k)
            printf("%c",'A' + k); 
        printf("\n");            
            
        }
}
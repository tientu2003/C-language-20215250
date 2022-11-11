// Input date and calculate expressions
#include <stdio.h>
#include <math.h>
void main(void){
    int i=1,n,m,mul=1,sum=0;
    printf("Enter n: ");
    scanf("%d",&n);
    
    while (!(n>0))//check input
        {printf("Please input a positive integer\n");
        printf("Enter n:");
        scanf("%d",&n);}
    
    while (i<=n)
    {   
        mul = mul * i;
        ++i;
    }
     
    printf("\nF1(%d) = %d\n", n,mul);
    i=1;
    while (i<=n)
    {
        sum += i;
        ++i;
    }
    
    printf("\nF2(%d) = %d\n", n,sum);

    // calculuate n power m
    printf("\nEnter m: ");
    scanf("%d",&m);
    mul = pow(n,m);
    printf("\nResult: %d", mul);
}
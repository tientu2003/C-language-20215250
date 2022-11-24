#include <stdio.h>

void main(void)
{   
    int i;
    float n;
    float A[9]={4,5,5.5,6.5,7,8,8.5,9.5,10};
    char *B[9]={"F","D","D+","C","C+","B","B+","A","A+"};
    float C[9]={0,1,1.5,2.0,2.5,3.0,3.5,4.0,4.0};
    
    printf("Input your score:");
    scanf("%f",&n);
    i=0;
    while(n > A[i]) i++;

    printf("%s  %0.1f",B[i],C[i]);
    

}
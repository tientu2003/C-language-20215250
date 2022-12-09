#include <stdio.h>

void main(void)
{
    char A[100];
    int  N[100],m=0,i=1,n=1;
    
    char c = getchar();
    A[1] = c;
    for (i=1;i<=99;++i) N[i] = 0;
    do 
    {
        if ('a' <= c && c <= 'z')
        {
        for (i = 1,m=0; i<=n ;++i)
        {   
            if ( A[i] == c ) {N[i] += 1; m=1;} 
        }
        if (m != 1)
        {
        n += 1;
        A[n] = c;
        N[n] = 1;
        }
        } 
    }
    while((c = getchar()) != '\n');
    for (i=1; i<=n ;++i)
        printf(" The letter '%c' appears %d times\n",A[i],N[i]);
}
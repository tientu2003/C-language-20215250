// Create Fun and Foo funtion
#include <stdio.h>
#include <math.h>
int fun(int n){
    int i;
    for (i=2; i<=sqrt(n); ++i)
        if ( n%i == 0 ) return 0;
    return 1;
}



int foo(int c){
    int i, sum=0;
    for(i=0; i <= c; ++i )
        {sum = sum + i;
        if (sum > c) return i - 1;}
    return 1;

}


void main(void){
    int n;
    scanf("%d",&n);
    printf("fun(%d) = %d \n",n,fun(n));
    scanf("%d",&n);
    printf("foo(%d) = %d",n,foo(n));
}
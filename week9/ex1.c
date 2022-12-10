#include <stdio.h>

float nhapso()
{  
    float n;
    scanf("%f",&n);
    return n;
}

float max(int a, int b)
{
    if ( a < b ) return b;
    else return a;
}

void max3(int a, int b, int c){
    float tmp;
    tmp = max(a,b);
    tmp = max(tmp,c);
    printf("The max number: %.3f",tmp);
}
void main(void)
{
    max3(nhapso(),nhapso(),nhapso());
}
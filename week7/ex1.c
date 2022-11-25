#include <stdio.h>
#include <math.h>

void main (void)
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float delta;
    delta = b*b - 4*a*c;
    if (delta < 0 )
        printf("No solution");
    else if (delta == 0)
        printf("single root: %4.1f",-b/(2*a));
    else  printf("two roots: %4.1f and %4.1f",(sqrt(delta)-b)/(2*a),(-sqrt(delta)-b)/(2*a));
}
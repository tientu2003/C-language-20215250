//BANG CUU CHUONG
#include <stdio.h>


//create table part
void table(int n,int m){
    int i,a;
    for (i=1; i <=9; ++i)
        {printf("%c",186);
        for (a=n; a<=m; ++a)
            printf("%2d %c%2d %c %2d %c",
                    a  ,120, i,61,i*a,186);
        printf("\n");
        }    
}


//create line
void line(int c1, int c2, int c3){
    int a,s;    
    printf("%c",c1);
    for (a=1;a<=3;++a)
        {   if (a<=2)s = c2; 
            else s = c3;
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205,205,205,205,s);}
    printf("\n");
}


void main(void)
{   printf("----------- BANG CUU CHUONG ------------\n");

    line(201,203,187); // the first line

    table(1,3);        // the first part

    line(204,206,185); // the second line
    
    table(4,6);        // the second part

    line(204,206,185); // the third line

    table(7,9);        // the third part
    
    line(200,202,188); // the final line
}

#include <stdio.h>

//calculate  n!/(n-k)!
long long int downfactorial(int n)
{   long long int result = 1;
    for (int i = 1; i <= n; ++i )
        result *= i;
    return result;
}

//calculate  k!
long long int upfactorial(int n,int k)
{   long long int result = 1;
    for (int i = n - k + 1 ; i <= n; ++i )
        result *= i;
    return result;
}


//main 
void main(void)
{   char c;
    int i,n,k,count=1;
    long long int result;
    //open file
    FILE* fc = fopen("TOHOP.INP","r");
    //check if file exits
    if (fc == NULL) {
        printf("no such file.");
        return;
    }

    // count the number of the lines in TOHOP.INP
    for (c = getc(fc); c != EOF; c = getc(fc)) //EOF: End of file
        if (c == '\n') // Increment count if this character is newline
            count = count + 1;
    fclose(fc);


    //open file
    FILE* fp = fopen("TOHOP.INP","r");
    FILE* fo = fopen("TOHOP.OUT","w");


    // calculate the combination
    for (i=1;i<=count;++i)
    {
        fscanf(fp,"%d %d",&n,&k);
        result = upfactorial(n,k)/downfactorial(k);
        fprintf(fo,"%lld\n",result);
        
    }
    
    //close file
    fclose(fp);
    fclose(fo);
    
    
    
}
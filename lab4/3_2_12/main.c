#include <stdio.h>
#include <stdlib.h>

double* foo(int n){
    double * w = malloc(n*sizeof(double));
    return w;
}

int main()
{
    double * wsk = foo(1);
    printf("%p\n", wsk);
    return 0;
}

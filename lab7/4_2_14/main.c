#include <stdio.h>
#include <stdlib.h>

double * foo(int n){
    double *tab = (double*)malloc(n*sizeof(double));
    return (tab+1);
}

int main()
{
    int a = 8;
    printf("%p",foo(a));

    return 0;
}

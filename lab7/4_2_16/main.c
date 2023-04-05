#include <stdio.h>
#include <stdlib.h>

void foo(double * tab){
    free(tab);
}

int main()
{
    double *tab = (double*)malloc(5*sizeof(double));
    foo(tab);
    return 0;
}

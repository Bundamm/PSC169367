#include <stdio.h>
#include <stdlib.h>
double* foo(){
    return malloc(sizeof(double));
}

int main()
{
    double * wsk = foo();
    printf("%p\n", wsk);
    return 0;
}

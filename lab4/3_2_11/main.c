#include <stdio.h>
#include <stdlib.h>
int*foo(int n){
    return malloc(n*sizeof(int));
}

int main()
{

    int * wsk = foo(7);
    printf("%p\n", wsk);
    printf("%Iu\n", sizeof(wsk));
    return 0;
}

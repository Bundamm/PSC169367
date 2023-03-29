#include <stdio.h>
#include <stdlib.h>

int foo(int * const wsk1, int const * wsk2){
    return *wsk1 - *wsk2;
}

int main()
{
    int a = 8, b = 5;
    printf("%d", foo(&a,&b));
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
// ZAPAMIETAC malloc(sizeof(int));
int* foo(){
    return malloc(sizeof(int));
}

int main()
{
    int * wsk = foo();
    printf("%p\n", wsk);
    return 0;
}

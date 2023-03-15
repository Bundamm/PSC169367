#include <stdio.h>
#include <stdlib.h>

int foo(int const * a, int const * b){
    int sum = *a + *b;
    return sum;
}

int main()
{

    int x = 5, y = 7;
    printf("%d\n", foo(&x,&y));
    return 0;
}

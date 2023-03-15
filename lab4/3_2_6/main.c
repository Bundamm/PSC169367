#include <stdio.h>
#include <stdlib.h>

void foo(int n, int * w){
    *w = n;
}

int main()
{
    int x = 110, y = 8;
    foo(x, &y);
    printf("%d\n", y);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void foo(int * a, int * b){
    int tmp;
    if(*b < *a){
        tmp = *a;
        *a=*b;
        *b=tmp;
    }
}

int main()
{
    int x = 5, y = 2;
    int c = 3, d = 8;
    foo(&x,&y);
    foo(&c,&d);
    printf("%d %d\n", x,y);
    printf("%d %d\n", c,d);
    return 0;
}

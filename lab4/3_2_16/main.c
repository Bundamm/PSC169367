#include <stdio.h>
#include <stdlib.h>

void foo(int const * a, int * const b){
    *b=*a;
};

int main()
{
    int x, y;
    printf("Podaj 2 liczby: ");
    scanf("%d %d", &x, &y);
    foo(&x,&y);
    printf("%d", y);
    return 0;
}

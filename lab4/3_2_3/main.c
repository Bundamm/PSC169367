#include <stdio.h>
#include <stdlib.h>

void foo (int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;

}

int main()
{
    int x = 4, y = 7;
    foo(&x,&y);
    printf("zamienilo %d %d", x, y);
    return 0;
}

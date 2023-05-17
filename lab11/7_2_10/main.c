#include <stdio.h>
#include <stdlib.h>

union super_int{
    int i;
    unsigned int j;
};

int main()
{
    union super_int a;
    a.i = 3;
    printf("%d\n", a.i);
    return 0;
}

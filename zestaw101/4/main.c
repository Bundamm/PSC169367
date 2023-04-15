#include <stdio.h>
#include <stdlib.h>

int foo(unsigned int n){
    if(n == 0) return 1;
    if(n == 1) return 2;
    if(n % 2 == 0) return foo(n-2) + 1;
    return foo(n-2) * 3;

}

int main()
{
    int a = 5;
    printf("%d\n", foo(a));
    return 0;
}

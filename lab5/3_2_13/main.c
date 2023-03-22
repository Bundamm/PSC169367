#include <stdio.h>
#include <stdlib.h>

double fun(a) {
    return (double)(a+2);
}

double foo(double(*fun)(int arg), int a){
    return fun(a);
}

int main()
{
    printf("%lf\n",foo(fun, 3));
    return 0;
}

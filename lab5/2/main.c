#include <stdio.h>
#include <stdlib.h>

int foo(int(*wsk1)(int),int(*wsk2)(int), int n){
    return wsk1(n) + wsk2(n);
}

int fun1(int n){
    return n+2;
}

int fun2(int n){
    return n+3;
}

int main()
{
    printf("%d\n", foo(fun1,fun2,4));
    printf("%d\n", foo(fun1,fun2,8));
    return 0;
}

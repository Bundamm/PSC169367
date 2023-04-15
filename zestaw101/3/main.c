#include <stdio.h>
#include <stdlib.h>


int mfoo(int(*foo1)(int), int(* foo2)(int), int n){
    for(int i = 1;  i <= n; i++){
        if(foo1(i) == (foo2(i)*foo2(i))) return 2;
    }
    return -2;
}

int foo1(int n){
    return n*4;
}

int foo2(int n){
    return n;
}


int main()
{
    int a = 4;
    printf("%d\n", mfoo(foo1, foo2, a));
    int b = 3;
    printf("%d\n", mfoo(foo1, foo2, b));
    return 0;
}

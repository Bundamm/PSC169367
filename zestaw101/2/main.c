#include <stdio.h>
#include <stdlib.h>

int foo(int n, int m, int k){
    if(m % k == 0 && m % n == 0) return 2;
    if(m % k == 0 || m % n == 0) return 1;
    else return 0;

}

int main()
{
    int n = 5, m = 30, k = 6;
    printf("%d", foo(n,m,k));
    return 0;
}

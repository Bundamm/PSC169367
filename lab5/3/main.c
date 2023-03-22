#include <stdio.h>
#include <stdlib.h>

int foo(int n){
    if(n==0|| n==1)
        return 1;
    if(n%3==0)
        return foo(n/3);
    if(n%3==1)
        return foo((n-1)/3)+1;
    return foo(n-1)-1;//a 3k+2 = a3k+1 - 1 n = 3k+2 => k = n-2/3 an = a3k+2 = a3 * n -2/3+1 -1 = a_(n-1) -1
}

int main()
{
    printf("%d\n",foo(5));
    return 0;
}

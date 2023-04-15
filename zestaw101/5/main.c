#include <stdio.h>
#include <stdlib.h>

void foo(int (*tab), int n){
    int i = 0;
    int check = 0;
    for(i = 0; i < n; i++){
        if(*(tab+i) > 0 && check != *(tab+i)){
            check = *(tab+i);
            printf("%d\n", check);
        }
    }
}

int main()
{
    int n = 5;
    int * tab = malloc(sizeof(int)*n);
    *(tab) = 4;
    *(tab+1) = 5;
    *(tab+2) = -2;
    *(tab+3) = -4;
    *(tab+4) = 2;
    foo(tab, n);
    return 0;
}

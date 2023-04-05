#include <stdio.h>
#include <stdlib.h>

int * foo(unsigned int n, int * tab){
    int zera = 0;
    for(int i = 0; i < n; i++){
        if(*(tab+i) == 0){
            zera++;
        }
    }
    int x = n - zera;
    int * tab2 = malloc(x*sizeof(int));
    for(int i = 0; i < n; i++){
        if(*(tab+i) != 0){
            *(tab2+i) = *(tab+i);
        } else {
            continue;
        }
    }
    return (tab2);
}

int main()
{
    int n = 5;
    int *tab = malloc(n*sizeof(int));
    *(tab) = 1;
    *(tab+1) = 0;
    *(tab+2) = 3;
    *(tab+3) = 0;
    *(tab+4) = 4;
    int * tab2 = foo(5, tab);
    printf("%p\n", tab2);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void foo(int n, int * tab){
    for(int i = 0; i < n/2; i++){
        int x = *(tab+i);
        *(tab+i) = *(tab+n-i-1);
        *(tab+n-i-1) = x;
    }
}
void foo2(int n, int * tab){
    int x = *tab;
    for(int i = 0; i < n - 1; i++){
        *(tab+i) = *(tab+i+1);
    }
    *(tab+n-1) = x;
}
void foo3(int n, int * tab){
    int temp = *(tab+n-1);
    for(int i = n-1; i > 0; i--){
        *(tab+i) = *(tab+i-1);
    }
    *(tab) = temp;
}
void foo4(int n, int * tab){
    int temp;
    for(int i = 0; i < n - 1; i++){
        for(int j = i; j < n; j++){
            if(*(tab+i) > *(tab+j)){
                temp = *(tab+i);
                *(tab+i) = *(tab+j);
                *(tab+j) = temp;
            }
        }
    }
}

void foo5(int n, int * tab){
    int temp;
    for(int i = 0; i < n - 1; i++){
        for(int j = i; j < n; j++){
            if(*(tab+i) < *(tab+j)){
                temp = *(tab+i);
                *(tab+i) = *(tab+j);
                *(tab+j) = temp;
            }
        }
    }
}
void wyswietlTablice(int n, int * tab){
    for(int i = 0; i<n;i++){
        printf("[%d]=%d\n", i, *(tab+i));
    }
}

int main()
{
    int * tab = malloc(3*sizeof(int));

    *tab = 1;
    *(tab+1) = 2;
    *(tab+2) = 3;
    foo(3,tab);
    wyswietlTablice(3,tab);
    *tab = 1;
    *(tab+1) = 2;
    *(tab+2) = 3;
    foo2(3,tab);
    wyswietlTablice(3,tab);
    *tab = 0;
    *(tab+1) = 1;
    *(tab+2) = 2;
    foo3(3,tab);
    wyswietlTablice(3,tab);
    *tab = 5;
    *(tab+1) = 2;
    *(tab+2) = 4;
    *(tab+3) = 1;
    foo4(4,tab);
    wyswietlTablice(4,tab);
    foo5(4,tab);
    wyswietlTablice(4,tab);
    return 0;
}

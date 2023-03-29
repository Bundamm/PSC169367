#include <stdio.h>
#include <stdlib.h>

void foo(int n, int *tab){
    for(int i = 0; i<n; i++){
        //tab[i] = 0;
        *(tab+i) = 0;

    }
}
void wyswietlTablice(int n, int * tab){
    for(int i = 0; i<n;i++){
        printf("[%d]=%d\n", i, *(tab+i));
    }
}

void foo2(int n, int * tab){
    for(int i = 0; i < n; i++){
        *(tab+i) = i;
    }
}

void foo3(int n, int*tab){
    for(int i = 0; i<n;i++){
        *(tab+i) *= 2;
    }
}

void foo4(int n, int*tab){
    for(int i = 0; i<n; i++){
        if(*(tab+i) < 0){
            *(tab+i) *= -1;
        }
    }
}



int main()
{
    //int tab[] = {345,643,2};
    int * tab = malloc(10*sizeof(int));
    *tab = 3;
    *(tab+1) = 4;
    *(tab+2) = 5;
    int tab2[] = {3,5,6,7,4};
    int *tab3 = malloc(5*sizeof(int));

    foo(3,tab);
    wyswietlTablice(3,tab);
    foo2(5,tab2);
    wyswietlTablice(5,tab2);
    *tab = 10;
    *(tab+1) = 11;
    *(tab+2) = 123;
    foo3(3,tab);
    wyswietlTablice(3,tab);
    *tab3 = -1;
    *(tab3+1) = -10;
    *(tab3+2) = 20;
    foo4(3,tab3);
    wyswietlTablice(3,tab3);

    return 0;
}

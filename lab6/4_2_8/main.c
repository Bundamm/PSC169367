#include <stdio.h>
#include <stdlib.h>
void foo(int n, int * tab1, int * tab2, double * tab3){
    for(int i = 0; i < 2*n; i++){
        if(i < n){
            *(tab3+i) = *(tab1+i);
        } else if(i >= n) {
            int x = *(tab2+(i-n));
            *(tab3+i) = x;
        }
    }
}

void foo2(int n, int * tab1, int * tab2, double * tab3){
    for(int i = 0; i < 2*n; i++){
        if(i % 2 == 0){
            int x = i;
            if(x > n-1) x-=n;
            *(tab3+i) = *(tab1+x);
        } else if(i % 3){
            int x = i;
            if(x > n-1) x-=n;
            *(tab3+i) = *(tab2+x);
        }
    }
}

void wyswietlTablice(int n, double * tab){
    for(int i = 0; i<n;i++){
        printf("[%d]=%.2lf\n", i, *(tab+i));
    }
}

int main()
{
    int * tab = malloc(10*sizeof(int));
    for(int i = 0; i < 10; i++){
        *(tab+i) = i;
    }
    int * tab2 = malloc(10*sizeof(int));
    for(int i = 0; i < 10; i++){
        *(tab2+i) = i*2;
    }
    double * tab3 = malloc(20*sizeof(double));
    for(int i = 0; i < 20; i++){
        *(tab3+i) = i*1.5;
    }
    /*
    foo(10,tab,tab2,tab3);
    wyswietlTablice(20,tab3);
    */
    printf("\n");
    foo2(10,tab,tab2,tab3);
    wyswietlTablice(20,tab3);

    return 0;
}

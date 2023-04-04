#include <stdio.h>
#include <stdlib.h>
// Nie mam pojecia jak to zrobic z wektorem/tablic¹ wewn¹trz
double foo(int n, double * tab1, double * tab2){
    double skalar = 0, iloczyn = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                iloczyn = *(tab1+i) * *(tab2+j);
                skalar+=iloczyn;
            }
        }
    }
    return skalar;
}

void wyswietlTablice(int n, double * tab){
    for(int i = 0; i<n;i++){
        printf("[%d]=%.2lf\n", i, *(tab+i));
    }
}

int main()
{
    double * tab = malloc(10*sizeof(double));
    *tab = 1;
    *(tab+1) = 2;
    *(tab+2) = 3;
    double * tab2 = malloc(10*sizeof(double));
    *tab2 = 2;
    *(tab2+1) = 4;
    *(tab2+2) = 5;
    printf("Skalar = %.2lf", foo(3, tab, tab2));
    return 0;
}

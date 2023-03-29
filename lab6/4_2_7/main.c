#include <stdio.h>
#include <stdlib.h>

void foo(int n, int tab1[], int tab2[], int tab3[]){
    for(int i = 0; i < n; i++){
        tab3[i] = tab1[i] + tab2[i];
    }
}

void foo2(int n, int tab1[], int tab2[], int tab3[]){
    for(int i = 0; i < n; i++){
        if(tab1[i] > tab2[i]){
            tab3[i] = tab1[i];
        } else{
            tab3[i] = tab2[i];
        }
    }
}

void foo3(int n, int tab1[], int tab2[], int tab3[]){
    for(int i = 0; i < n; i++){
        tab2[i] = tab1[i];
        tab3[i] = tab2[i];
        tab1[i] = tab3[i];
    }
}


void wyswietlTablice(int n, int * tab){
    for(int i = 0; i<n;i++){
        printf("[%d]=%d\n", i, *(tab+i));
    }
}

int main()
{
    int tab1[] = {3,4,5};
    int tab2[] = {2,8,7};
    int tab3[] = {0,0,0};

    foo(3,tab1,tab2,tab3);
    wyswietlTablice(3,tab3);
    foo2(3,tab1,tab2,tab3);
    wyswietlTablice(3,tab3);
    foo3(3,tab1,tab2,tab3);
    wyswietlTablice(3,tab1);
    return 0;
}

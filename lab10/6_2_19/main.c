#include <stdio.h>
#include <stdlib.h>

void foo(int** tab, int** tab2, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            *(*(tab2+i)+j) = *(*(tab+i)+j);
        }
    }
}

void wyswietl(int ** tab, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", *(*(tab+i)+j));
        }
        printf("\n");
    }
}

int main()
{
    int n = 2, m = 3;
    int **tab = (int**)malloc(sizeof(int*)*n);
    tab[0] = (int*)malloc(sizeof(int)*m);
    tab[1] = (int*)malloc(sizeof(int)*m);
    *(*(tab)) = 1;
    *(*(tab)+1) = 2;
    *(*(tab)+2) = 3;
    *(*(tab+1)) = 1;
    *(*(tab+1)+1) = 5;
    *(*(tab+1)+2) = 3;
    int **tab2 = (int**)malloc(sizeof(int*)*n);
    tab2[0] = (int*)malloc(sizeof(int)*m);
    tab2[1] = (int*)malloc(sizeof(int)*m);
    foo(tab,tab2,n,m);
    wyswietl(tab2,n,m);
    return 0;
}

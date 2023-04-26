#include <stdio.h>
#include <stdlib.h>

void foo(int **tab, int n, int m){
    int * temp = tab[n-1];
    for(int i = n-1; i > 0; i--){
        tab[i] =tab[i-1];
    }
    tab[0] = temp;
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
    int n = 3, m = 3;
    int **tab = (int**)malloc(sizeof(int*)*n);
    tab[0] = (int*)malloc(sizeof(int)*m);
    tab[1] = (int*)malloc(sizeof(int)*m);
    tab[2] = (int*)malloc(sizeof(int)*m);
    *(*(tab)) = 5;
    *(*(tab)+1) = 2;
    *(*(tab)+2) = 3;
    *(*(tab+1)) = 1;
    *(*(tab+1)+1) = 5;
    *(*(tab+1)+2) = 3;
    *(*(tab+2)) = 7;
    *(*(tab+2)+1) = 5;
    *(*(tab+2)+2) = 6;
    foo(tab,n,m);
    wyswietl(tab,n,m);
    return 0;
}

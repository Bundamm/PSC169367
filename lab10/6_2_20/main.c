#include <stdio.h>
#include <stdlib.h>

void foo(int**tab, int**tab2, int n, int m){
    int temp = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            temp = tab[i][j];
            tab[i][j] = tab2[i][j];
            tab2[i][j] = temp;
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
    *(*(tab)) = 5;
    *(*(tab)+1) = 2;
    *(*(tab)+2) = 3;
    *(*(tab+1)) = 1;
    *(*(tab+1)+1) = 5;
    *(*(tab+1)+2) = 3;
    int **tab2 = (int**)malloc(sizeof(int*)*n);
    tab2[0] = (int*)malloc(sizeof(int)*m);
    tab2[1] = (int*)malloc(sizeof(int)*m);
    *(*(tab2)) = 3;
    *(*(tab2)+1) = 6;
    *(*(tab2)+2) = 7;
    *(*(tab2+1)) = 3;
    *(*(tab2+1)+1) = 2;
    *(*(tab2+1)+2) = 34;
    foo(tab,tab2,n,m);
    wyswietl(tab2,n,m);
    return 0;
    return 0;
}

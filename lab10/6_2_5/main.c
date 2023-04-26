#include <stdio.h>
#include <stdlib.h>

int*** foo(int n, int m, int z){
    int *** tab = malloc(n*sizeof(int**));
    int i = 0;
    for(i = 0; i < n; i++){
        tab[i] = malloc(m*sizeof(int*));
        for(int j = 0; j < m; j++){
            tab[i][j] = malloc(z * sizeof(int));
        }
    }
    return tab;
}

void zwolnij(int n, int m, int z, int ***tab){
    int i = 0;
    for(i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            free(tab[i][j]);
        }
        free(tab[i]);
    }
    free(tab);
}

int main()
{
    int n = 3, m = 3, z = 3;
    printf("%p\n", foo(n,m,z));

    int *** tablica = foo(n,m,z);
    zwolnij(n,m,z,tablica);

    return 0;
}

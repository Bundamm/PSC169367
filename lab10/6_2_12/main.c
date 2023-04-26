#include <stdio.h>
#include <stdlib.h>

int suma(int ** tab, int n, int m){
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            sum += tab[i][j];
        }
    }
    return sum;
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
    *(*(tab+1)+1) = 2;
    *(*(tab+1)+2) = 3;

    printf("%d\n", suma(tab,n,m));
    return 0;
}

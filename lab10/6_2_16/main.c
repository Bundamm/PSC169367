#include <stdio.h>
#include <stdlib.h>

int foo(int ** tab, int n, int m){
    int max = 1;
    double wart = 1;
    int i = 0;
    for(i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
            sum += tab[i][j];
        }
        if(sum/m>wart || i== 0){
            max = i;
            wart = sum/m;
        }
    }
    return max;
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
    printf("[%d]\n", foo(tab,n,m));
    return 0;
}

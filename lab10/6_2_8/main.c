#include <stdio.h>
#include <stdlib.h>

void zero(int tab[][100], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 100; j++){
            tab[i][j] = 0;
        }
    }
}

int main()
{
    int n = 5;
    int tab[n][100];
    zero(tab, n);
    /*
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 100; j++){
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    */
    return 0;
}

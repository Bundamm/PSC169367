#include <stdio.h>
#include <stdlib.h>

void rozklad(int n){
    int s = n;
    int x, y;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            s = i*i + j*j;
            if(s==n){
                printf("Rozklad %d wynosi: %d^2 + %d^2 \n", s, i, j);
            }
        }
    }
}

int main()
{
    int n;
    printf("Podaj dodatnia liczbe calkowita: ");
    scanf("%d", &n);
    rozklad(n);
    return 0;
}

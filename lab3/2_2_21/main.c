#include <stdio.h>
#include <stdlib.h>

int rek(int n){
    if(n == 0){
        return 1;
    } else{
        return 2 * rek(n-1) + 5;
    }
}

int main()
{
    int n;
    printf("Podaj nieujemna liczbe rzeczywista: ");
    scanf("%d", &n);
    if(n < 0){
        printf("Niepoprawna liczba.");
    }
    printf("Element ciagu = %d", rek(n));
    return 0;
}

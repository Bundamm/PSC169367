#include <stdio.h>
#include <stdlib.h>

int rek(int n){
    if(n == 0 || n == 1){
        return 1;
    } else if(n % 2 == 0){
        return rek(n-1) + n;
    } else {
        return rek(n-1) * n;
    }
}

int main()
{
    int n;
    printf("Podaj liczbe calkowita nieujemna: ");
    scanf("%d", &n);
    if(n < 0){
        printf("Nie wolno liczb ujemnych.");
    }
    printf("Element ciagu: %d", rek(n));
    return 0;
}

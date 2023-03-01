#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, wynik;
    printf("Podaj liczbe calkowita wieksza od 2: ");
    scanf("%i", &n);
    if(n <= 2){
        printf("Tak nie wolno.");
    }

    else{
        int i;
        wynik = 2;
        for(i = 4; i <= n; i+=2){
            wynik *= i;
        }
    }
    printf("Wynik: %i", wynik);
    return 0;
}

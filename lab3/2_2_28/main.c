#include <stdio.h>
#include <stdlib.h>

int rek(int n, int m){
    if(m == 0){
        return n;
    } else if(n >= m && m > 0){
        return n - m + rek(n-1,m) + rek(n,m-1);
    } else {
        return rek(n,m) = rek(m,n);
    }
}

int main()
{
    int n,m;
    printf("Podaj dwie liczby calkowite nieujemne: ");
    scanf("%d %d", &n,&m);
    if(n < 0 || m < 0){
        printf("Nie wolno ujemnych.");
    }
    printf("Wynik funkcji: %d", rek(n,m));

    return 0;
}

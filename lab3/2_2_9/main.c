#include <stdio.h>
#include <stdlib.h>
int pow(int arg, int m){
    int x = arg;
    for(int i = 1; i < m;i++){
        x*=arg;
    }
    return x;
}


int calk(int n, int m){

    int pierw;
    for(int i = 0; pow(i,m) <= n; i++){
        pierw = i;
    }
    return pierw;
}

int main()
{
    int n,m;
    printf("Podaj liczby calkowite n i m: ");
    scanf("%d %d", &n, &m);
    if(m <= 1 || n < 0){
        printf("\nNieprawidlowa wartosc.\n");
    } else{
    printf("Czesc calkowita pierwiastka %d o stopniu %d jest rowna: %d", n, m, calk(n,m));
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int absolute(int n){
    if(n < 0){
        n*=-1;
    }
    return n;

}

int main()
{
    int n;
    printf("Podaj liczbe calkowita\n");
    scanf("%d", &n);
    printf("Wartosc calkowita %d to: %d", n, absolute(n));
    return 0;
}

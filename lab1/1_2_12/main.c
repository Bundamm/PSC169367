#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("Podaj liczbe wymierna: ");
    scanf("%f", &x);
    printf("Notacja wykladnicza: %.1e", x);
    return 0;
}

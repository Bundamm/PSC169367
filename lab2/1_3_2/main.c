#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    scanf("%i %i", &x, &y);
    if(x > y){
        printf("Wieksza jest liczba: %i", x);
    } else if(x < y){
        printf("Wieksza jest liczba: %i", y);
    } else {
        printf("Liczby sa rowne: %i", x);
    }
    return 0;
}

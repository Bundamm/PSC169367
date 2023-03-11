#include <stdio.h>
#include <stdlib.h>

int zliczaj(){
    static int n = 0;
    n++;
    return n;
}

int main()
{
    printf("Liczba wywolan: %d\n", zliczaj());
    printf("Liczba wywolan: %d\n", zliczaj());
    printf("Liczba wywolan: %d\n", zliczaj());
    printf("Liczba wywolan: %d\n", zliczaj());
    printf("Liczba wywolan: %d\n", zliczaj());
    printf("Liczba wywolan: %d\n", zliczaj());
    printf("Liczba wywolan: %d\n", zliczaj());
    printf("Liczba wywolan: %d\n", zliczaj());
    return 0;
}

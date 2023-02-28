#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a, b, c;
    printf("Podaj wspolczynniki rownania kwadratowego: ");
    scanf("%i %i %i", &a, &b, &c);
    float del = pow(b,2) - 4 * a * c;
    if(del == 0){
        float wyn = (-b + sqrtf(del))/2*a;
        printf("Rozwiazanie to: %.2f", wyn);
    }
    if(del > 0){
        float wyn1 = (-b + sqrtf(del))/2*a;
        float wyn2 = (-b - sqrtf(del))/2*a;
        printf("x1 = %.2f x2 = %.2f", wyn1, wyn2);
    }
    if(del < 0){
        printf("Nie ma rozwiazan rzeczywistych.");
    }
    return 0;
}

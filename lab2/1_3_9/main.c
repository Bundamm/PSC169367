#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int c;
    printf("Podaj operacje arytmetyczna: \n1.+\n2.-\n3.*\n4./\n5.^\n6.sqrt\n");
    scanf("%i", &c);
    float a, b;
    if(c == 1){
        printf("Podaj dwie liczby: ");
        scanf("%f %f", &a, &b);
        printf("%f", a+b);
    }
    if(c == 2){
        printf("Podaj dwie liczby: ");
        scanf("%f %f", &a, &b);
        printf("%f", a-b);
    }
    if(c == 3){
        printf("Podaj dwie liczby: ");
        scanf("%f %f", &a, &b);
        printf("%f", a*b);
    }
    if(c == 4){
        printf("Podaj dwie liczby: ");
        scanf("%f %f", &a, &b);
        printf("%f", a/b);
    }
    if(c == 5){
        printf("Podaj dwie liczby: ");
        scanf("%f %f", &a, &b);
        printf("%f", pow(a,b));
    }
    if(c == 6){
        printf("Podaj liczbe: ");
        scanf("%f", &a);
        printf("%f", sqrt(a));
    }
    return 0;
}

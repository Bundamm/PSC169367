#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    printf("Wybierz figure:\n1.Kwadrat\n2.Prostokat\n3.Trojkat\n");
    scanf("%i", &c);
    if(c == 1){
        float a;
        printf("Podaj sciane kwadratu: ");
        scanf("%f", &a);
        float pole = a * a;
        printf("Pole kwadratu: %.2f", pole);
    }
    if(c == 2){
        float a,b;
        printf("Podaj wymiary prostokata: ");
        scanf("%f %f", &a, &b);
        float pole = a * b;
        printf("Pole prostokata: %.2f", pole);
    }
    if(c == 3){
        printf("Jaka wersja pola? (1/2) \n 1.Wysokosc i podstawa \n 2.Boki \n");
        int choice;
        scanf("%i", &choice);
        if(choice == 1){
            float wys, podst;
            printf("Wpisz wysokosc i podstawe (w tej kolejnosci): ");
            scanf("%f %f", &wys, &podst);
            float pole;
            pole =  (wys * podst)/2;
            printf("Pole: %f", pole);
        } else if(choice == 2){
            float a,b,c;
            printf("Podaj boki trojkata: ");
            scanf("%f %f %f", &a, &b, &c);
            float p = (a+b+c)/2;
            float x = p * (p - a) * (p - b) * (p - c);
            float pole = sqrtf(x);
            printf("Pole: %f", pole);
        } else {
            printf("Niewlasciwa liczba.");
        }
    }
    else{
        printf("Nieprawidlowa liczba.");
    }

    return 0;
}

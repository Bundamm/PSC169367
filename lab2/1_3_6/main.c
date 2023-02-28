#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // x1 * y1 = r1
    // x2 * y2 = r2

    int x1, y1, x2, y2, r1, r2;
    printf("Wprowadz pierwsze rownanie: ");
    scanf("%i %i %i", &x1, &y1, &r1);
    printf("Wprowadz drugie rownanie: ");
    scanf("%i %i %i", &x2, &y2, &r2);
    float W = (x1 * y2) - (y1 * x2);
    if(W == 0){
        printf("Nieskonczenie wiele rozw.");
    } else{
        float w1 = (r1 * y2) - (y1 * r2);
        float w2 = (x1 * r2) - (r1 * x2);
        float wynik1 = w1/W;
        float wynik2 = w2/W;
        printf("Wyniki to x = %.2f i y = %.2f", wynik1, wynik2);
    }
    return 0;
}

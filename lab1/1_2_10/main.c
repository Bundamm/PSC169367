#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, result;
    printf("Podaj liczbe: ");
    scanf("%f", &x);
    result = fabs(x);
    printf("|%.2f| = %.2lf\n", x, result);
    return 0;
}

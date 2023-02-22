#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x, pierwiastek;

    scanf("%lf", &x);
    pierwiastek = sqrt(x);
    printf("Pierwiastek z liczby %.2lf to %.2lf\n", x, pierwiastek);
    return 0;
}

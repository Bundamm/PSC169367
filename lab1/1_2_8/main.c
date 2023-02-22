#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%i %i %i", &a, &b, &c);
    printf("Srednia: %.2f\n", (double)(a + b + c)/3);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    scanf("%i %i %i", &x, &y, &z);
    if(x >= y && x >= z){
        printf("Najwieksza jest: %i", x);
    }
    else if(y >= x && y >= z){
        printf("Najwieksza jest: %i", y);
    }
    else {
        printf("Najwieksza jest: %i", z);
    }
    return 0;
}

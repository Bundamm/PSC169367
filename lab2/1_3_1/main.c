#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%i", &n);
    if(n < 0){
        n = n * -1;
        printf("Liczba calkowita to: %i", n);
    } else{
        printf("Liczba calkowita to: %i", n);
    }
    return 0;
}

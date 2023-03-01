#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj liczbe calkowita nieujemna: ");
    scanf("%i", &n);
    if(n < 0){
        printf("Takich nie wolno.");
    }
    int i;
    for(i = n-1; i > 0; i--){
        n = n * i;
    }
    printf("%i", n);

    return 0;
}

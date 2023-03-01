#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    printf("Podaj dwie liczby calkowite dodatnie: ");
    scanf("%i %i", &n, &m);
    if(n <= 0 || m <= 0){
        printf("To nie sa liczby calkowite dodatnie.");
    }
    for(int i = 1; i <= m; i++){
        printf("%i * %i = %i\n", n, i, n*i);
    }
    return 0;
}

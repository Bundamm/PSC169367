#include <stdio.h>
#include <stdlib.h>

int power(int n){
    int dwa = 2;
    for(int i = 1; i < n; i++){
        dwa*=2;
    }
    return dwa;

}

int main()
{
    int n;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &n);
    printf("2 do potegi %d wynosi: %d", n, power(n));
    return 0;
}

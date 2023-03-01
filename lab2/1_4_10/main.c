#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj nieujemna liczbe n: ");
    scanf("%i", &n);
    if(n < 0){
        printf("Tak nie wolno.");
    } else{
        int r;
        for(int i = 0; i*i <= n; i++){
            r = i;
        }
        printf("%i", r);
    }

    return 0;
}

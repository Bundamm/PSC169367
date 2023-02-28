#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("Podaj dwie liczby: ");
    scanf("%i %i",&x,&y);
    /*
    int xbez, ybez;
    if(x < 0){
        xbez = x * -1;
    }
    if(y < 0){
        ybez = y * -1;
    }
    if(xbez > ybez) printf("Liczba o najw. wart. bezwzgl. to: %i", x);
    else if(ybez > xbez) printf("Liczba o najw. wart. bezwzgl. to: %i", y);
    else printf("Sa sobie rowne", x);
    */

    if(abs(x) > abs(y)){
        printf("Liczba o najw. wart. bezwzgl. to: %i", x);
    } else if(abs(y) > abs(x)){
        printf("Liczba o najw. wart. bezwzgl. to: %i", y);
    } else {
        printf("Wartosci bezwz sa rowne");
    }
    return 0;
}

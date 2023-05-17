#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Ksiazka{
    char * tytul;
    int liczba_stron;
};

struct Ksiazka *initKsiazka(char * t, int ls){
    struct Ksiazka *k = malloc(sizeof(struct Ksiazka));
    k->tytul = t;
    k->liczba_stron = ls;
    if(strlen(k->tytul) < 5 || k->liczba_stron < 50) return NULL;
    return k;

}

void pokazKsiazka(struct Ksiazka * k){
    printf("Tytul: %s, Liczba stron: %d\n", k->tytul, k->liczba_stron);
    return;
}

void dodajStrony(struct Ksiazka * k){
    k->liczba_stron+=10;
}

int main()
{
    struct Ksiazka *k1 = initKsiazka("Wiedz", 50);
    pokazKsiazka(k1);
    dodajStrony(k1);
    pokazKsiazka(k1);
    free(k1);
    return 0;
}

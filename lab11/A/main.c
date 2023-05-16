#include <stdio.h>
#include <stdlib.h>

struct Osoba{
    char imie[20];
    int wiek;
};

int length(char s[20]){
    int i = 0;
    while(s[i] != '\0'){
        i++;
    }
    return i;
}

struct Osoba initOsoba(char s[20], int w){
    struct Osoba o;
    //strcpy(o.imie, i);
    //strlen(s)
    for(int i = 0; i <= length(s); i++){
        o.imie[i] = s[i];
    }
    o.wiek = w;
    return o;
}

void pokazOsoba(struct Osoba zm){
    printf("%s %d\n", zm.imie, zm.wiek);
}

void urodziny(struct Osoba * wsk){
    wsk->wiek++;
}


int main()
{
    struct Osoba p = initOsoba("xd", 10);
    printf("%s\n", p.imie);
    struct Osoba p2 = {"Tomasz", 21};
    pokazOsoba(p2);
    struct Osoba p3 = {"Lukasz", 20};
    urodziny(&p3);
    pokazOsoba(p3);
    return 0;
}

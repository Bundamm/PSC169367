#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
void kopiuj(char* napis, char* tablica, int n){
    int i;
    for(i = 0; napis != 0 && i < n; i++){
        tablica[i] = napis[i];
    }
    tablica[i] = 0;
}

void kopiuj2(wchar_t* napis, wchar_t* tablica, int n) {
    int i;
    for (i = 0; napis[i] != 0 && i < n; i++) {
        tablica[i] = napis[i];
    }
    tablica[i] = L'\0';
}

int main()
{
    char nap[] = "XD";
    char tab[] = "";
    int n = 2;

    wchar_t nap2[2] = L"XD";
    wchar_t tab2[2] = L"";

    kopiuj(nap,tab,n);
    kopiuj2(nap2,tab2,n);
    printf("%s\n", tab);
    printf("%ls\n", tab2);
    return 0;
}

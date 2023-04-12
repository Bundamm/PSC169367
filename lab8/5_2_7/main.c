#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
void sklej(char* tab1, char* tab2, char* tab3){
    int i, j;
    for(i = 0; tab1[i]!= 0; i++){
        tab3[i] = tab1[i];
    }
    for(j = 0; tab2[j] != 0; j++,i++){
        tab3[i] = tab2[j];
    }
    tab3[i] = 0;
}

void sklej2(wchar_t* tab1, wchar_t* tab2, wchar_t* tab3){
    int i, j;
    for(i = 0; tab1[i]!= 0; i++){
        tab3[i] = tab1[i];
    }
    for(j = 0; tab2[j] != 0; j++,i++){
        tab3[i] = tab2[j];
    }
    tab3[i] = 0;
}

int main()
{
    char napis[6] = "Ala m";
    char napis2[7] = "a kota";
    char napis3[14] = "";
    sklej(napis,napis2,napis3);
    printf("%s\n", napis3);
    wchar_t napis4[6] = L"Ola m";
    wchar_t napis5[6] = L"a psa";
    wchar_t napis6[13] = L"";
    sklej2(napis4,napis5,napis6);
    printf("%ls\n", napis6);

    return 0;
}

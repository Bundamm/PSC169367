#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <stdbool.h>
bool czywyst(wchar_t z, wchar_t * nap){
    int i;
    for(i = 0; nap[i]!= 0; i++){
        if(nap[i] == z){
            return true;
        }
    }
    return false;
}

void wytnijzn(char * nap1, char * nap2){
    char wystepuje[256] = {};
    for(int i = 0; nap2[i] != '\0'; i++){
        wystepuje[nap2[i]] = 1;
    }
    int i = 0;
    int j = 0;
    while(nap1[i] != '\0'){
        if(wystepuje[nap1[i]] == 1){
            nap1[j++] = nap1[i++];
        } else{
            i++;
        }
    }
    nap1[j] = 0;
}

void wytnijzn2(wchar_t * nap1, wchar_t * nap2){
    int i = 0;
    int j = 0;
    for(i = 0, j = 0; nap1[i]!= 0; i++){
        if(czywyst(nap1[i], nap2) == true){
            if(j < i){
                nap1[j] = nap1[i];
            }
            j++;
        }
    }
    nap1[j] = 0;
}


int main()
{
    char nap1[] = "Luamp";
    char nap2[] = "Leapp";
    wchar_t nap3[] = L"Luamp";
    wchar_t nap4[] = L"Leapp";
    wytnijzn(nap1,nap2);
    wytnijzn2(nap3,nap4);
    printf("%s\n",nap1);
    printf("%ls\n", nap3);
    return 0;
}

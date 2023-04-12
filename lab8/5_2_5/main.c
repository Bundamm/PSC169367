#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
void przepisz(char * tab1, char * tab2){
    int i;
    for(i=0;tab1[i]!=0;i++){
        tab2[i] = tab1[i];
    }
    tab2[i]=0;
}

void przepisz2(wchar_t * tab1, wchar_t * tab2){
    int i;
    for(i=0;tab1[i]!=0;i++){
        tab2[i] = tab1[i];
    }
    tab2[i]=0;
}

int main()
{
    char napis[20] = "asd";
    char napis2[20] = "gh";
    przepisz(napis,napis2);
    printf("%s\n", napis2);
    wchar_t napis3[] = L"aasfsd";
    wchar_t napis4[] = L"ghs";
    przepisz2(napis3,napis4);
    printf("%ls\n",napis4);
    return 0;
}

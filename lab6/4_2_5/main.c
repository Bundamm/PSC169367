#include <stdio.h>
#include <stdlib.h>
//#include <stdbool.h>
/*
int prim(unsigned int n){
    int temp;
    bool sito[n];
    for(int i = 0; i < n; i++){
        sito[i] = true;
    }
    for(int i = 2; i <n; i++){
        if(sito[i]){
            temp = i;
            for(int j=2*i;j<n;j+=i){
                sito[j]=false;
            }
        }
    }
    return temp;
}
*/
// n - 10
// tab [ 0 1 2 ... 9 ]
// tab2 [ 0 0 0 0 0 0 0 ]
// 0 - co nie jest pierwsze
// 1 - liczba pierwsza
// int tab[n]  = {[0] = 0};

void wyswietlTablice(int n, int * tab){
    for(int i = 0; i<n;i++){
        printf("[%d]=%d\n", i, *(tab+i));
    }
}


int prim2(int n)
{
    int tab2[n];
    for(int i=0;i<n;i++)
    {
        tab2[i]=1;
    }
    tab2[0]=0;
    tab2[1]=0;
    for(int i=2;i<n;i++)
    {
        if (tab2[i] == 1)
        {
            for(int j=2;j*i<n;j++)
            {
                tab2[j*i] =0;
            }
        }
    }
    int indeks =3;
    for(int k=indeks;k<n;k++)
    {
        if (tab2[k] == 1)
        {
            indeks =k;
        }
    }
    wyswietlTablice(n,tab2);
    return indeks;
}

int main()
{
    //printf("%d\n", prim(25));
    printf("%d\n", prim2(10));
    return 0;
}

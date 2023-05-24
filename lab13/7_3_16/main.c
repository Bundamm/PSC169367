#include <stdio.h>
#include <stdlib.h>

struct element{
    int i;
    struct element * next;
};

struct element * znajdzp(struct element * lista, int a){
    struct element*wsk = lista;
    while((wsk->next!=NULL) && (wsk->next->i!=a)){
        wsk=wsk->next;
    }
    return wsk;

};

int main()
{
    struct element * lista = malloc(sizeof(struct element));
    lista->next = malloc(sizeof(struct element));
    lista->next->i = 5;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i = 7;
    lista->next->next->next = malloc(sizeof(struct element));
    lista->next->next->next->i = -4;
    lista->next->next->next->next = NULL;

    struct element * wsk = lista->next;

    while(wsk!=NULL){
        printf("%d, %p\n",wsk->i, wsk);
        wsk = wsk->next;
    }

    struct element* wsk2 = znajdzp(lista,-4);
    printf("%p\n", wsk2);


    return 0;
}

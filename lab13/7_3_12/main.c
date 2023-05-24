#include <stdio.h>
#include <stdlib.h>

struct element{
    int i;
    struct element * next;
};

void dodaj(struct element * lista, int a){
    struct element *wsk = malloc(sizeof(struct element));
    wsk -> i = a;
    wsk -> next = lista->next;
    lista->next = wsk;
}

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
        printf("%d\n",wsk->i);
        wsk = wsk->next;
    }

    dodaj(lista,10);
    printf("---\n");
    struct element * wsk2 = lista->next;

    while(wsk2!=NULL){
        printf("%d\n",wsk2->i);
        wsk2 = wsk2->next;
    }
    return 0;
}

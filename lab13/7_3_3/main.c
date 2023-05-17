#include <stdio.h>
#include <stdlib.h>

struct element{
    int i;
    struct element * next;
};

struct element * dodaj(struct element* lista, int a){
    struct element * wsk = malloc(sizeof(struct element));
    wsk->i=a;
    wsk->next=lista;
    return wsk;
}


int main()
{
    struct element * lista = malloc(sizeof(struct element));
    lista->i = 5;
    lista->next  = malloc(sizeof(struct element));
    lista-> next -> i = 7;
    lista -> next -> next = malloc(sizeof(struct element));
    lista -> next -> next -> i = -3;
    lista->next->next->next = NULL;
    struct element * wsk = dodaj(lista, 100);
    while(wsk != NULL)
    {
        printf("%d\n", wsk->i);
        wsk = wsk->next;
    }
    return 0;
}

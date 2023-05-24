#include <stdio.h>
#include <stdlib.h>

struct element{
    int i;
    struct element * next;
};

struct element * usun(struct element* lista, int a){
    struct element *wsk, *wsk2;
    if(lista == NULL){
        return lista;
    }
    wsk = lista;
    if(lista->i==a){
        lista=lista->next;
        free(wsk);
    }
    else {
        while((wsk->next!=NULL)&&(wsk->next->i!=a)){
            wsk = wsk->next;
        }
        if(wsk -> next!=NULL){
            wsk2 = wsk->next;
            wsk->next=wsk2->next;
            free(wsk2);
        }
    }
    return lista;
};


int main()
{
    struct element * lista = malloc(sizeof(struct element));
    lista->i = 5;
    lista->next  = malloc(sizeof(struct element));
    lista-> next -> i = 7;
    lista -> next -> next = malloc(sizeof(struct element));
    lista -> next -> next -> i = -3;
    lista->next->next->next = NULL;
    struct element * wsk = usun(lista, 5);
    while(wsk != NULL)
    {
        printf("%d\n", wsk->i);
        wsk = wsk->next;
    }
    return 0;
}

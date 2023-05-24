#include <stdio.h>
#include <stdlib.h>

struct element{
    int i;
    struct element * next;
};

int suma(struct element * lista){
    int sum = 0;
    struct element * wsk = lista;
    if(lista==NULL){
        return 0;
    }
    while(wsk!=NULL){
        sum += wsk->i;
        wsk = wsk->next;
    }
    return sum;
}

int sumag(struct element * lista){
    int sum = 0;
    lista=lista->next;
    if(lista == NULL){
        return 0;
    }
    while(lista!=NULL){
        sum+=lista->i;
        lista=lista->next;
    }
    return sum;
}

int main()
{
    struct element * lista = malloc(sizeof(struct element));
    lista = malloc(sizeof(struct element));
    lista->i = 5;
    lista->next = malloc(sizeof(struct element));
    lista->next->i = 7;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i = -4;
    lista->next->next->next = NULL;

    struct element * listag = malloc(sizeof(struct element));
    listag->next = malloc(sizeof(struct element));
    listag->next->i = 5;
    listag->next->next = malloc(sizeof(struct element));
    listag->next->next->i = 7;
    listag->next->next->next = malloc(sizeof(struct element));
    listag->next->next->next->i = -4;
    listag->next->next->next->next = NULL;

    struct element * wsk2 = lista;
    while(wsk2!=NULL){
        printf("%d, %p\n",wsk2->i, wsk2);
        wsk2 = wsk2->next;
    }
    printf("---\n");
    printf("%d\n", suma(lista));
    printf("---\n");
    struct element * wsk = listag->next;
    while(wsk!=NULL){
        printf("%d, %p\n",wsk->i, wsk);
        wsk = wsk->next;
    }
    printf("---\n");
    printf("%d\n", sumag(listag));


    return 0;
}

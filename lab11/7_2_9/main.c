#include <stdio.h>
#include <stdlib.h>

struct lista{
    int i;
    struct lista * wsk;
};

int main()
{
    struct lista* element1 = malloc(sizeof(struct lista));
    struct lista* element2 = malloc(sizeof(struct lista));
    struct lista* element3 = malloc(sizeof(struct lista));

    element1->i = 1;
    element2->i = 2;
    element3->i = 3;

    element1->wsk = element2;
    element2->wsk = element3;
    element3->wsk = NULL;

    struct lista* aktualny = element1;
    while (aktualny != NULL) {
        printf("%d ", aktualny->i);
        aktualny = aktualny->wsk;
    }
    printf("\n");

    return 0;
}

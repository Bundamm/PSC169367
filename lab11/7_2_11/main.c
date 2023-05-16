#include <stdio.h>
#include <stdlib.h>

union Liczba{
    float f;
    int i;
};

struct Dane{
    int tp;
    union Liczba zaw;
};

struct Dane foo(){
    int a;
    struct Dane d;
    printf("Float czy Int?(0/1)\n");
    scanf("%d", &a);
    d.tp = a;
    if(a == 0){
        printf("Wpisz float.\n");
        scanf("%f", &d.zaw.f);
    }
    else if(a==1){
        printf("Wpisz Int.\n");
        scanf("%d", &d.zaw.i);
    } else{
        printf("Nie\n");
        return d;
    }
    return d;
}

int main()
{
    struct Dane a = foo();
    if(a.tp == 1){
        printf("%d\n",a.zaw.i);
    }
    if(a.tp == 0){
        printf("%f\n",a.zaw.f);
    }

    return 0;
}

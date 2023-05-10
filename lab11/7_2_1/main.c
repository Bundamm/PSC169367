#include <stdio.h>
#include <stdlib.h>

struct trojkat{
    double a,b,c;
};

double obwod(struct trojkat t){
    return t.a + t.b + t.c;
}

int main()
{
    struct trojkat t;
    t.a = 3;
    t.b = 5;
    t.c = 6;
    printf("%.2f\n", obwod(t));
    return 0;
}

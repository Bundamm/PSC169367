#include <stdio.h>
#include <stdlib.h>

struct trojkat{
    double a,b,c;
};

void foo(struct trojkat troj1, struct trojkat *troj2){
    *troj2=troj1;
}

int main()
{
    struct trojkat troj1 = {3,5,6};
    struct trojkat *troj2 = (struct trojkat *)malloc(sizeof(struct trojkat));
    foo(troj1, troj2);
    printf("a = %.2f, b = %.2f, c = %.2f \n", troj2->a, troj2->b,troj2->c);
    return 0;
}

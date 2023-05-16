#include <stdio.h>
#include <stdlib.h>

enum zwierzak{
    pies, kot, papuga, krowa, kurczak, wilk
};

int main()
{
    enum zwierzak dom;
    dom = kot;
    printf("%d", dom);
    return 0;
}

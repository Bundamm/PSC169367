#include <stdio.h>
#include <stdlib.h>

struct zespolone{
    double im;
    double re;
};

struct zespolone dodaj(struct zespolone a, struct zespolone b){
    struct zespolone g;
    g.im = a.im + b.im;
    g.re = a.re + b.re;
    return g;
};

int main()
{
    struct zespolone i = {7.6, 5.6};
    struct zespolone j = {7.4, 3.6};
    struct zespolone g = dodaj(i,j);
    printf("%.2f + %.2f\n", g.im, g.re);

    return 0;
}

/*
Druga wersja bo nie jestem pewien czy o to tu chodzi³o
struct zespolone{
    double im;
    double re;
};

double dodaj(struct zespolone a, struct zespolone b){
    return (a.im + a.re) + (b.im + b.re);
};

int main()
{
    struct zespolone i = {7.6, 5.6};
    struct zespolone j = {7.4, 3.6};
    printf("%.2f\n", dodaj(i,j));

    return 0;
}


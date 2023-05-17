#include <stdio.h>
#include <stdlib.h>

struct punktn {
    int w;
    double *t;
};

void przepisz(struct punktn tab1[], struct punktn tab2[], int n){
    for(int i = 0; i < n; i++){
        tab2[i].t=malloc(tab1[i].w*sizeof(double));
        for(int j = 0; j < tab1[i].w; j++){
            tab2[i].t[j] = tab1[i].t[j];
        }
    }
}

void wyswietl(struct punktn tab[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < tab[i].w;j++){
            printf("%.2f ", tab[i].t[j]);
        }
        printf("\n");
    }
}

int main()
{

    struct punktn p;
    p.w = 2;
    p.t = malloc(p.w*sizeof(double));
    struct punktn p2;
    p2.w = 2;
    p2.t = malloc(p2.w*sizeof(double));
    struct punktn tab[] = {p,p2};
    p.t = (double[]) {8,9};
    p2.t[0] = 3;
    p2.t[1] = 4;

    struct punktn p3;
    p3.w = 2;
    p3.t = malloc(p3.w*sizeof(double));
    struct punktn p4;
    p4.w = 2;
    p4.t = malloc(p4.w*sizeof(double));
    struct punktn tab2[] = {p3,p4};

    przepisz(tab,tab2,2);
    wyswietl(tab2, 2);
    return 0;
}

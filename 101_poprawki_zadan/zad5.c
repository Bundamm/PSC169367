#include <stdio.h>
#include <stdlib.h>

void foo(int (*tab), int n){
    int i = 0;
    for(i = 0; i < n; i++){
        int j = 0;
        while(*(tab+i) != *(tab+j)){
            j++;

        }
        if(i==j&&*(tab+i) > 0){
            printf("%d\n", *(tab+i));
        }
    }

}

int main()
{
    int n = 10;
    int * tab = malloc(sizeof(int)*n);
    *(tab) = 4;
    *(tab+1) = 5;
    *(tab+2) = -2;
    *(tab+3) = -4;
    *(tab+4) = 5;
    *(tab+5) = 4;
    *(tab+6) = 5;
    *(tab+7) = 4;
    *(tab+8) = 78;
    *(tab+9) = -2;

    foo(tab, n);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c,d;
    printf("Podaj 4 liczby calkowite: \n");
    scanf("%d %d %d %d", &a,&b,&c,&d);
    float x;

    //a
    if(a < 0){
        a *= -1;
    }
    if(c > d){
        printf("0\n");
    } else {
        int temp=0;
        for(int i; a*i*i +b*i + c <= d; i++){
            temp=i;
        }
        printf("%d\n",temp+1);
    }
    //b



    //c



    return 0;
}

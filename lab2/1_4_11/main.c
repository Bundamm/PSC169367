#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c,d;
    printf("Podaj 4 liczby calkowite: \n");
    scanf("%d %d %d %d", &a,&b,&c,&d);

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
     int x = 0;
     while(((5 * x * x) + (a * x) + b)<c){
        x++;
     }
     printf("%d\n",x-1);


    //c
    int x2 = 0;
    while(((5 * x2 * x2)+ (a*x2) + b) <= c){
        x2++;
    }
    printf("%d\n", x2-1);


    return 0;
}

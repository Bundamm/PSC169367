#include <stdio.h>
#include <stdlib.h>

void wytnij(char *nap, int n, int m){
    int dl,i;
    for(dl = 0; nap[dl]!= 0;dl++);
    if(dl+1 > m){
        for(i = 0; i+m < dl; i++){
            nap[n+i] = nap[i+m+1];
        }
    }
    else{
        if((n<dl)&&(dl+1<=m)){
            nap[n] = 0;
        }
    }
}

int main()
{
    char co[] = "Olsztyn";
    wytnij(co,2,4);
    printf("%s\n",co);
    return 0;
}

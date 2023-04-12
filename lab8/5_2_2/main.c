#include <stdio.h>
#include <stdlib.h>

int dlugosc(char *nap){
    int i = 0;
    while(nap[i]!=0) i++;
    return i;
}

int main()
{
    printf("Dlugosc: %d", dlugosc("aw0f"));
    return 0;
}

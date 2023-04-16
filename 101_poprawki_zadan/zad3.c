#include <stdio.h>
#include <stdlib.h>

float * foo(){
    float * p = (*float)malloc(2*sizeof(float));
    *p = -3.4f;
    *(p+1) = 1.1f;
    return p+1;
}

int main()
{
    float * wsk = foo();
    printf("%.1f %.1f\n", *wsk, *(wsk-1));
    return 0;
}

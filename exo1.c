#include <stdio.h>
#include "exo1.h"

int main(){
    int a;
    float b;

    printf("\nAvant \n");
    printf(" a = %d", a);
    printf(" b = %f", b);

    initialize(&a, &b);

    printf("\nApres \n");
    printf(" a = %d", a);
    printf(" b = %f", b);

    return 0;
}

void initialize(int* a, float* b){
    *a = 0;
    *b = 0;
}
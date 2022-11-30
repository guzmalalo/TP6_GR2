#include <stdio.h>
#include "exo1.h"


void initialize(int* pa, float* pb){

    *pa = 0;
    *pb = 0;

}

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

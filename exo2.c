#include <stdio.h>
#include "exo2.h"

int main(){
    // déclaration des variables
    int a = 5;
    int b = 2;
    int q = 0;
    int r = 0;

    // procedure
    pQR(a,b,&q,&r);

    printf("quotient 5/2 = %d \n", q);
    printf("reste 5/2 = %d \n", r);

    scanf("%d", &a);
    // fonction
    r = fQR(a,b,q);

    printf("quotient 5/2 = %d \n", q);
    printf("reste 5/2 = %d \n", r);

    return 0;
}

void pQR(const int a, const int b, int* q, int* r){
    *q = a/b;
    *r = a%b;

}

int fQR(int a, int b, int* q){
    int r;
    *q = a/b;
    r = a%b;

    return r;
}
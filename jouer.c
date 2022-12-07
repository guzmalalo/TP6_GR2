#include <stdio.h>
#include "exo1.h"


struct Jouer{
    int pv;
    int mana;
};

void prendDegat(struct Jouer* Player, int damage){

     Player->pv = Player->pv - damage;
}

int main(){
    int a;
    float b;
    struct Jouer Player1 = {100, 10};

    int* pInt = &a;
    float* pFloat = &b;
    struct Jouer* pJouer = &Player1;

    printf("La valeur de int est %d \n", *pInt);
    printf("La valeur de float est %f \n", *pFloat);

    printf("Les points de vie de mon jouer sont : %d\n", pJouer->pv );
    printf("Les points de mana de mon jouer sont : %d\n", pJouer->mana);

    prendDegat(&Player1, 10);

    printf("Les points de vie apres degat sont : %d\n", pJouer->pv );

    return 0;
}
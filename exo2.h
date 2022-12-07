//
// Created by Eduardo Guzman Maldonado on 07/12/2022.
//

#ifndef TP6_EXO2_H
#define TP6_EXO2_H

/**
 *  Procedure qui retourne le quotient et le
 *  reste de a/b
 * @param a [entrée] entier
 * @param b [entrée] entier
 * @param q [entrée/sortie] pointeur vers un entier
 * @param r [entrée/sortie] pointeur vers un entier
 */
void pQR(int a, int b, int* q, int* r);

/**
 *  Fonction qui retourne le quotient et le
 *  reste de a/b
 * @param a [entrée] entier
 * @param b [entrée] entier
 * @param q [entrée/sortie] pointeur vers un entier
 * @return r [sortie] reste de a/b (entier)
 */
int fQR(int a, int b, int* q);



#endif //TP6_EXO2_H

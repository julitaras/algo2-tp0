#include "tp0.h"
#include <stdio.h>

/* *****************************************************************
 *                     FUNCIONES A COMPLETAR                       *
 *         (ver en tp0.h la documentación de cada función)         *
 * *****************************************************************/

void swap (int *x, int *y) {
    int aux = *x;
    *x = *y;
    *y = aux;
}


int maximo(int vector[], int n) {
    int pos = 0;

    if(n == 0){
        return -1;
    }
    for(int i = 0; i < n; i++){
        if(vector[i] > vector[pos]){
            pos = i;
        }
    }
    return pos;
}

int comparar(int vector1[], int n1, int vector2[], int n2) {
    for(int i = 0; i < n1 && i < n2; i ++){
        if(vector1[i]< vector2[i]){
            return -1;
            }else{
                if(vector1[i] > vector2[i]){
                    return 1;
                 }
            }
        }
    if(n1 < n2){
        return -1;
    }
    if(n1 > n2){
        return 1;
    }
    return 0;
}

void seleccion(int vector[], int n) {
    int i;
    for(i = 0; i < n; i++){
        int cotaMayor = n - i;
        int maxRestante = maximo(vector, cotaMayor);
        swap(&vector[maxRestante], &vector[cotaMayor - 1]);
    }
}
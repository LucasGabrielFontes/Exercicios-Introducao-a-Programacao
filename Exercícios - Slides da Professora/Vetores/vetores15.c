#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho 10

void inicializavetores(int A[], int B[], int t) {
    srand((unsigned)time(NULL));
    for (int i = 0; i < t; i++) {
        A[i] = 0 + rand()%10;
        B[i] = 0 + rand()%10;
    }
}

void determinaintersecao (int A[], int B[], int t) {
    int iguais = 0, inter[tamanho], teste = 0, guardatemp, ii;
    for (int i = 0; i < t; i++) {
        for (ii = 0; ii < t; ii++) {
            if (A[i] == B[ii]) {
                if (iguais == 0) {
                    inter[iguais] = A[i];
                    iguais++;
                    break;
                } else {
                    guardatemp = A[i];
                    teste = 0;
                    for (int in = 0; in < iguais; in++) {
                        if (guardatemp == inter[in]) {
                            teste++;
                        }
                    }
                    if (teste == 0) {
                        iguais++;
                        inter[iguais - 1] = A[i];
                        break;
                    }
                }
            }
        }
    }
    int interfinal[iguais];
    for (int i = 0; i < iguais; i++) {
        interfinal[i] = inter[i];
    }
    for (int i = 0; i < iguais; i++) {
        for (int ii = i; ii < iguais; ii++) {
            int aux;
            if (interfinal[i] > interfinal[ii]) {
                aux = interfinal[i];
                interfinal[i] = interfinal[ii];
                interfinal[ii] = aux;
            }
        }
        
    }
    printf("\nConjunto intersecao: ");
    for (int i = 0; i < iguais; i++) {
        if (i == 0) {
            printf("{%d, ", interfinal[i]);
        } else if ( i == iguais - 1) {
            printf("%d}", interfinal[i]);
        } else {
            printf("%d, ", interfinal[i]);
        }
    }
}

void mostravetor (int X[], int t) {
    for (int i = 0; i < t; i++) {
        if (i == 0) {
            printf("{%d, ", X[i]);
        } else if  (i == t - 1) {
            printf("%d}", X[i]);
        } else {
            printf("%d, ", X[i]);
        }
    }
    printf("\n");
}

int main () {
    int A[tamanho], B[tamanho];
    inicializavetores(A, B, tamanho);
    printf("Conjunto 1: ");
    mostravetor(A, tamanho);
    printf("\nConjunto 2: ");
    mostravetor(B, tamanho);
    determinaintersecao(A, B, tamanho);
    return 0;
}
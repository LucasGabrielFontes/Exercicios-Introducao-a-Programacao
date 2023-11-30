#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

void preenchematriz(int i, int j, int M[][j]) {
    srand((unsigned)time(NULL));
    for (int l = 0; l < i; l++) {
        for (int c = 0; c < j; c++) {
            M[l][c] = (rand()%(10 + 1));
        }
    }
}

void mostramatriz(int i, int j, int M[][j]) {
    for (int l = 0; l < i; l++) {
        for (int c = 0; c < j; c++) {
            printf("%d ", M[l][c]);
        }
        printf("\n");
    }
}

void somalinhas(int i, int j, int M[][j], int somadaslinhas[]) {
    for (int l = 0; l < i; l++) {
        for (int c = 0; c < j; c++) {
            somadaslinhas[l] += M[l][c];
        }
    }
}

void inicializavetor0 (int vetor[], int t) {
    for (int i = 0; i < t; i++) {
        vetor[i] = 0;
    }
}

void mostravetor(int vetor[], int t) {
    for (int i = 0; i < t; i++) {
        printf("%d ", vetor[i]);
    }
}

void multm (int i, int j, int M[][j], int Mresult[][j], int somas[]) {
    for (int l = 0; l < i; l++) {
        for (int c = 0; c < j; c++) {
            Mresult[l][c] = M[l][c] * somas[l];
        }
    }
}

int main () {
    int M[8][8], Mresult[8][8],somadaslinhas[8];
    inicializavetor0(somadaslinhas, 8);
    preenchematriz(8, 8, M);
    mostramatriz(8, 8, M);
    printf("\n");
    somalinhas(8, 8, M, somadaslinhas);
    mostravetor(somadaslinhas, 8);
    multm(8, 8, M, Mresult, somadaslinhas);
    printf("\n\n");
    mostramatriz(8, 8, Mresult);
    return 0;
}
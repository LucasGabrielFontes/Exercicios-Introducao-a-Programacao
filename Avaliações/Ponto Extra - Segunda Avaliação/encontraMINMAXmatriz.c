#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define li 4
#define co 7

void preenchematriz (int i, int j, int M[][j]) {
    srand((unsigned)time(NULL));
    for (int l = 0; l < i; l++) {
        for (int c = 0; c < j; c++) { // Preenche a matriz com valores aleatórios entre 10 e 99, inclusive.
            M[l][c] = rand() % (99 - 9) + 10;
        }
    }
}

void mostramatriz (int i, int j, int M[][j]) {
    for (int l = 0; l < i; l++) {
        for (int c = 0; c < j; c++) {
            printf("%d ", M[l][c]);
        }
        printf("\n");
    }
}

void retornaMINMAX (int *mm, int *linhamm, int *colunamm, int i, int j, int M[][j]){
    int menor = M[0][0], linhamenor;
    for (int l = 0; l < i; l++) {
        for (int c = 0; c < j; c++) { // Armazena a linha do menor elemento da matriz.
            if (M[l][c] < menor) {
                menor = M[l][c];
                linhamenor = l;
            }
        }
    }
    *linhamm = linhamenor; // A linha do menor elemento é a linha do MINMAX.
    *mm = M[*linhamm][0]; 
    for (int c = 1; c < j; c++) {
        if (M[*linhamm][c] > *mm) { // Armazena o maior elemento da linha que contém o menor elemento da matriz, assim como sua coluna.
            *mm = M[*linhamm][c];
            *colunamm = c;
        }
    }
}

int main () {
    int matriz[li][co], MINMAX, linha, coluna;
    preenchematriz(li, co, matriz);
    mostramatriz(li, co, matriz);
    retornaMINMAX(&MINMAX, &linha, &coluna, li, co, matriz);
    printf("\nMINMAX da matriz: %d.\nPosicao no MINMAX na matriz: M[%d][%d].", MINMAX, linha, coluna);
    return 0;
}
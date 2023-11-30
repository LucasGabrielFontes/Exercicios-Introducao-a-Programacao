#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenchematriz(int i, int j, int M[][j]) {
    srand((unsigned)time(NULL));
    for (int l = 0; l < i; l++) {
        for (int c = 0; c < j; c++) {
            M[l][c] = (rand()%(35 - 25 + 1))+25;
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

int teste30(int i, int j, int M[][j], int M2[][j]) {
    int maiorque30 = 0;
    for (int l = 0; l < i; l++) {
        for (int c = 0; c < j; c++) {
            if (M[l][c] > 30) {
                maiorque30++;
            }
            if (M[l][c] != 30) {
                M2[l][c] = M[l][c];
            } else {
                M2[l][c] = 0;
            }
        }
    }
    return maiorque30;
}

int main () {
    int M[6][4], M2[6][4], maioresque30;
    preenchematriz(6, 4, M);
    mostramatriz(6, 4, M);
    maioresque30 = teste30(6, 4, M, M2);
    printf("\nNa matriz, ha %d elementos maiores que 30.\nMatriz formada pelos elementos diferentes de 30 e com 0 no lugar daqueles que eram iguais a 30:\n", maioresque30);
    printf("\n");
    mostramatriz(6, 4, M2);
    return 0;
}
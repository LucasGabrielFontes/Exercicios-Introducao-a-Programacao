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
            if (M[l][c] < 10) {
                printf(" %d ", M[l][c]);
            } else {
                printf(" %d", M[l][c]);
            }
            
        }
        printf("\n");
    }
}

void trocalinhas(int i, int j, int M[][j], int Mresult[][j]) {
    for (int l = 0; l < i; l++) {
        for (int c = 0; c < j; c++) {
            if (l == 1) {
                Mresult[l][c] = M[7][c];
                Mresult[7][c] = M[l][c];
            } else if (l != 7){
                Mresult[l][c] = M[l][c];
            }
        }
    }
    for (int c = 0; c < j; c++) {
        for (int l = 0; l < i; l++) {
            if (c == 3) {
                Mresult[l][c] = M[l][9];
                Mresult[l][9] = M[l][c];
            }
        }
    }
}

int main() {
    int M[10][10], Mresult[10][10];
    preenchematriz(10, 10, M);
    mostramatriz(10, 10, M);
    trocalinhas(10, 10, M, Mresult);
    printf("\n");
    printf("Matriz apos as seguintes modificacoes: troca da segunda linha pela oitava linha, e troca da quarta coluna pela decima coluna:\n\n");
    mostramatriz(10, 10, Mresult);
    return 0;
}
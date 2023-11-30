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

void inicializavetor0 (int vetor[], int t) {
    for (int i = 0; i < t; i++) {
        vetor[i] = 0;
    }
}

void inicializavetorf0 (float vetor[], int t) {
    for (int i = 0; i < t; i++) {
        vetor[i] = 0.0;
    }
}

void mostravetor(int vetor[], int t, char a) {
    if (a == 'l') {
        for (int i = 0; i < t; i++) {
        printf("Linha %d: %d\n", i + 1, vetor[i]);
        }
    } else {
        for (int i = 0; i < t; i++) {
        printf("Coluna %d: %d\n", i + 1, vetor[i]);
        }
    }
    
}

void mostravetorf(float vetor[], int t) {
    for (int i = 0; i < t; i++) {
        printf("Linha %d: %.2f \n", i + 1, vetor[i]);
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

void calcula0linhas(int i, int j, int M[][j], int linhas0[]) {
    for (int l = 0; l < i; l++) {
        for (int c = 0; c < j; c++) {
            if (M[l][c] == 0) {
                linhas0[l]++;
            }
        }
    }
}

void calcula0colunas (int i, int j, int M[][j], int colunas0[]) {
    for (int c = 0; c < j; c++) {
        for (int l = 0; l < i; l++) {
            if (M[l][c] == 0) {
                colunas0[c]++;
            }
        }
    }
}

void calculapareslinha (int j, int M[][j], int *lipares, int linha){
    for (int l = linha - 1; l < linha; l++) {
        for (int c = 0; c < j; c++) {
            if (M[l][c] % 2 == 0) {
                *lipares += 1;
            }
        }
    }
}

void calculaparescoluna (int i, int j, int M[][j], int *colpares, int coluna) {
    for (int c = coluna - 1; c < coluna; c++) {
        for (int l = 0; l < i; l++) {
            if (M[l][c] % 2 == 0) {
                *colpares += 1;
            }
        }
    }
}

void calculamedialinhas(int i, int j, int M[][j], float medlinhas[]) {
    for (int l = 0; l < i; l++) {
        float somalinha = 0.0;
        for (int c = 0; c < j; c++) {
            somalinha += M[l][c];
        }
        medlinhas[l] = somalinha/j;
    }
}

void vemaiormedia (float medialinhas[], int t, int *linha) {
    int maiormedia = medialinhas[0];
    *linha = 1;
    for (int i = 1; i < t; i++) {
        if (medialinhas[i] > maiormedia) {
            maiormedia = medialinhas[i];
            *linha = i + 1;
        }
    }
}

int main() {
    int i, j, linhapares = 0, colunapares = 0, linha, coluna, linhamaiormedia;
    scanf("%d %d", &i, &j);
    int M[i][j], linhas0[i], colunas0[j];
    float medialinhas[i];
    preenchematriz(i, j, M);
    inicializavetor0(linhas0, i);
    inicializavetor0(colunas0, j);
    inicializavetorf0(medialinhas, i);
    calcula0linhas(i, j, M, linhas0);
    calcula0colunas(i, j, M, colunas0);
    calculamedialinhas(i, j, M, medialinhas);
    vemaiormedia(medialinhas, i, &linhamaiormedia);
    mostramatriz(i, j, M);
    printf("\n");
    printf("Qual linha voce deseja ver quantos elementos pares existem nela? ");
    scanf("%d", &linha);
    printf("Qual coluna voce deseja ver quantos elementos pares existem nela? ");
    scanf("%d", &coluna);
    calculaparescoluna(i, j, M, &colunapares, coluna);
    printf("\n");
    calculapareslinha(j, M, &linhapares, linha);
    if (linhapares == 1) {
        printf("Existe %d elemento par na linha %d", linhapares, linha);
    } else if (linhapares == 0) {
        printf("Nao existem elementos pares na linha %d", linha);
    } else {
        printf("Existem %d elementos pares na linha %d", linhapares, linha);
    }
    printf("\n");
    if (colunapares == 1) {
        printf("Existe %d elemento par na coluna %d\n", linhapares, coluna);
    } else if (colunapares == 0) {
        printf("Nao existem elementos pares na coluna %d\n", coluna);
    } else {
        printf("Existem %d elementos pares na coluna %d\n", colunapares, coluna);
    }
    printf("\n");
    printf("Media dos elementos de cada uma das linhas: \n");
    mostravetorf(medialinhas, i);
    printf("\n");
    printf("A linha %d possui a maior media de elementos\n", linhamaiormedia);
    printf("\n");
    printf("Quantidade de elementos 0 em cada uma das linhas:\n");
    mostravetor(linhas0, i, 'l');
    printf("\n");
    printf("Quantidade de elementos 0 em cada uma das colunas:\n");
    mostravetor(colunas0, j, 'c');
    return 0;
}
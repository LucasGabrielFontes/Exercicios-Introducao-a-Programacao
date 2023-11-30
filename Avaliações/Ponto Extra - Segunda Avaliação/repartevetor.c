#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

void preenchevetor (int vetor[], int t) {
    srand((unsigned)time(NULL));
    for (int i = 0; i < t; i++) {
        vetor[i] = rand() % 100;
    }
}

void mostravetor (int vetor[], int t) {
    for (int i = 0; i < t; i++) {
        printf("%d ", vetor[i]);
    }
}

void calculamediavetor (int vetor[], int t, double *m) {
    double soma = 0;
    for (int i = 0; i < t; i++) {
        soma += vetor[i];
    }
    *m = soma/t;
}

void calculatamanhovetores (int vetor[], int t, double m, int *quantmenores, int *quantmaioresig) {
    for (int i = 0; i < t; i++) {
        if (vetor[i] >= m) {
            *quantmaioresig += 1;
        } else {
            *quantmenores += 1;
        }
    }
}

void particionavetor (int vinicial[], int tvinicial, double media, int vmenores[], int vmaioresig[]) {
    int a = 0, b = 0;
    for (int i = 0; i < tvinicial; i++) {
        if (vinicial[i] >= media) {
            vmaioresig[a] = vinicial[i];
            a += 1;
        } else {
            vmenores[b] = vinicial[i];
            b += 1;
        }
    }
}

int main () {
    int V[MAX], tmenores = 0, tmaioresig = 0;
    double media;
    preenchevetor(V, MAX);
    printf("Vetor inicial: \n");
    mostravetor(V, MAX);
    printf("\n\n");
    calculamediavetor(V, MAX, &media);
    calculatamanhovetores(V, MAX, media, &tmenores, &tmaioresig);
    int menores[tmenores], maioresig[tmaioresig];
    particionavetor(V, MAX, media, menores, maioresig);
    printf("Vetor composto pelos elementos maiores que a media (%.2f) dos elementos do vetor inicial:\n", media);
    mostravetor(maioresig, tmaioresig);
    printf("\n\n");
    printf("Vetor composto pelos elementos menores que a media (%.2f) dos elementos do vetor inicial:\n", media);
    mostravetor(menores, tmenores);
    return 0;
}
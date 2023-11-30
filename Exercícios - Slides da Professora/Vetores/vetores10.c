#include <stdio.h>

void levetor (int A[], int t) {
    for (int i = 0; i < t; i++) {
        scanf("%d", &A[i]);
    }
}

void trocaposicoes (int V[], int t) {
    int aux[16], ii = 0;
    for (int i = 8; i < t; i++) {
        aux[i] = V[ii];
        ii++;
    }
    ii = 8;
    for (int i = 0; i < 8; i++) {
        aux[i] = V[ii];
        ii++;
    }
    for (int i = 0; i < t; i++) {
        V[i] = aux[i];
    }
}

void mostravettrocado (int V[], int t) {
    for (int i = 0; i < t; i++) {
        printf("%d ", V[i]);
    }
}

int main () {
    int V[16];
    levetor(V, 16);
    trocaposicoes(V, 16);
    mostravettrocado(V, 16);
    return 0;
}
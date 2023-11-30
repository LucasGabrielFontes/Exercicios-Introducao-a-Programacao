#include <stdio.h>
#include <stdlib.h>

void mostravetor (int V[], int tv) {
    for (int i = 0; i < tv; i++) {
        printf("%d ", V[i]);
    }
    printf("\n");
}

void descobrirvalor(int V[], int tv) {
    int valor, indice[tv], ii = 0, total = 0;
    scanf("%d", &valor);
    for (int i = 0; i < tv; i++) {
        if (V[i] == valor) {
            indice[ii] = i;
            ii++;
            total += 1;
        }
    }
    if (total == 0) {
        printf("Nao encontramos o valor %d no vetor.", valor);
    } else if (total == 1) {
        printf("Encontramos um valor %d no indice %d do vetor.", valor, indice[0]);
    } else {
        printf("Encontramos %d valores %d nos indices, mostrados abaixo, do vetor:\n", total, valor);
        for (int i = 0; i < total; i++) {
            printf("%d ", indice[i]);
        }
    }
}  

int main () {
    int V[10];
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; i++) {
        V[i] = 1 + rand()%100;
    }
    mostravetor(V, 10);
    descobrirvalor(V, 10);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void preenchevetor (int V[], int t) {
    srand((unsigned)time(NULL));
    for (int i = 0; i < t; i++) { // Preenche o vetor com valores aleatórios entre 0 e 100.
        V[i] = rand() % 100;
    }
}

void mostravetor (int V[], int t) {
    for (int i = 0; i < t; i++) {
        printf("%d ", V[i]);
    }
}

int ordenadoounao (int V[], int t) {
    for (int i = 0; i < t - 1; i++) { // Compara todos os elementos sucessivos do vetor. Se houver um valor que é maior que o seu sucessor, o vetor não está ordenado e a função retorna -1. O 1 será retornado se todo o vetor for testado, e a função não retornar -1 antes.
        if (V[i] > V[i + 1]) {
            return -1;
        }
    }
    return 1;
}

int main() {
    int N;
    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &N);
    while ((N < 0) || (N > 100)) {
        scanf("%d", &N);
    }
    int vetor[N];
    preenchevetor(vetor, N);
    mostravetor(vetor, N);
    if (ordenadoounao(vetor, N) == 1) {
        printf("\nVETOR ORDENADO");
    } else {
        printf("\nVETOR NAO ORDENADO");
    }
    return 0;
}
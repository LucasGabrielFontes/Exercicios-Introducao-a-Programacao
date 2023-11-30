#include <stdio.h>

int CalculaSomaPrimos(int N, int K);
int PrimoOuNao(int auxiliar);

int main () {
    int N, K, aux, somaprimos;
    scanf("%d %d", &N, &K);
    while ((N < 0) || (K < 0)) {
        scanf("%d %d", &N, &K);
    }
    if (K < N) {
        aux = N;
        N = K;
        K = aux;
    }
    somaprimos = CalculaSomaPrimos(N, K);
    printf("Soma dos numeros primos entre %d e %d: %d.", N, K, somaprimos);
    return 0;
}

int CalculaSomaPrimos(int N, int K) {
    int auxiliar = N + 1, soma = 0;
    for (; auxiliar < K; auxiliar++) {
        if (PrimoOuNao(auxiliar)) {
            soma = soma + auxiliar;
        }
    }
    return soma;
}

int PrimoOuNao (int auxiliar) {
    int i = 1, primalidade = 0;
    for (; i <= auxiliar; i++) {
        if (auxiliar%i == 0) {
            primalidade = primalidade + 1;
        }
    }
    if (primalidade == 2) {
        return 1;
    } else {
        return 0;
    }
}
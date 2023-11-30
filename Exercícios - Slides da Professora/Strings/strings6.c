#include <stdio.h>
#include <string.h>

#define N 50

void primeirapalavra (char *palavra, int t) {
    for (int i = 0; i < t; i++) {
        if (palavra[i] == ' ') {
            palavra[i] = '\0';
            break;
        }
    }
}

void definetvetor (const char *palavra, const char letra, int *tamanho) {
    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == letra) {
            *tamanho += 1;
        }
    }
    *tamanho += 1;
}

void formavetor (const char *palavra, const char letra, int vetor[]) {
    int a = 0;
    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == letra) {
            vetor[a] = i;
            a += 1;
        }
    }
    vetor[a] = -1;
}

void mostravetor (const int vetor[], int t) {
    for (int i = 0; i < t; i++) {
        printf("%d ", vetor[i]);
    }
}

int main() {
    char palavra[N], letra;
    int tOC = 0;
    fgets(palavra, N, stdin);
    fflush(stdin);
    letra = getchar();
    primeirapalavra(palavra, N);
    definetvetor(palavra, letra, &tOC);
    int OC[tOC];
    formavetor(palavra, letra, OC);
    mostravetor(OC, tOC);
    return 0;
}
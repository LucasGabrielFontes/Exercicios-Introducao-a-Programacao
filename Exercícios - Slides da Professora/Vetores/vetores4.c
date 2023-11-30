#include <stdio.h>

void levetores (int numeros[]);
void inimpar15 (int numeros[]);
void mostravetor (int numeros[]);

int main () {
    int numeros[10];
    levetores(numeros);
    inimpar15(numeros);
    mostravetor(numeros);
    return 0;
}

void levetores (int numeros[]) {
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }
}

void inimpar15 (int numeros[]) {
    for (int i = 1; i < 10; i += 2) {
        numeros[i] *= 15;
    }
}

void mostravetor (int numeros[]) {
    printf("\nVetor apos ser modificado (todos os valores que eram acessados com indice impar foram multiplicados por 15):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n", numeros[i]);
    }
}
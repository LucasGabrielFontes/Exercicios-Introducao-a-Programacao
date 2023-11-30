#include <stdio.h>

int operacao (int a, int b, int c);

int main () {
    int a, b, c, soma;
    scanf("%d %d %d", &a, &b, &c);
    while (a <= 1) {
        scanf("%d %d %d", &a, &b, &c);
    }
    soma = operacao (a, b, c);
    printf("Soma dos numeros entre %d e %d divisiveis por %d: %d.", b, c, a, soma);
    return 0;
}


int operacao (int a, int b, int c) {
    int aux = b, soma = 0;
    for (; aux <= c; aux++) {
        if (aux%a == 0) {
            soma = soma + aux;
        }
    }
    return soma;
}
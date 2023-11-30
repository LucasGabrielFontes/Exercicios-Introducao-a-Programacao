#include <stdio.h>

int main (void) {
    int n0 = 1, n = 1, n1, quant;
    printf("Quantos numeros da sequencia de Fibonacci voce deseja ver? ");
    scanf("%d", &quant);
    for (int contador = 1; contador <= quant-1; contador++) {
        if (contador == 1) {
            printf("\n1");
            printf("\n1");
        } else {
            n1 = n0 + n;
            printf("\n%d", n1);
            n0 = n;
            n = n1;
        }
    }
    return 0;
}

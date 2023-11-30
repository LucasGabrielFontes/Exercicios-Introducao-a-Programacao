#include <stdio.h>

int main (void) {
    float a = 480.0, b = 10.0, soma;
    int contador = 1, nseq;
    printf("Digite quantos termos da sequencia voce quer calcular: ");
    scanf("%d", &nseq);
    for (; contador <= (nseq - 1); contador++) {
        if (contador == 1) {
            printf("\n%.0f/%.0f", a, b);
            printf(" - %.0f/%.0f", a-5, b+1);
            soma = (a/b)-((a-5)/(b+1));
            a = a - 10;
            b = b + 2;
        } else {
            if (contador%2 == 0) {
                printf(" + %.0f/%.0f", a, b);
                soma = soma + (a/b);
                a = a - 5;
                b = b + 1;
            } else {
                printf(" - %.0f/%.0f", a, b);
                soma = soma - (a/b);
                a = a - 5;
                b = b + 1;
            }
        }
    }
    printf("\n\nSoma de todos: %f", soma);
    return 0;
}

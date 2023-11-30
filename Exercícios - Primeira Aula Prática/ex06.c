#include <stdio.h>

int main (void) {
    float a = 480, b = 10, soma;
    int contador = 1;
    for (contador; contador <= 29; contador++) {
        if (contador == 1) {
            printf("%.0f/%.0f", a, b);
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

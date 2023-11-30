#include <stdio.h>

int main (void) {
    float soma, a = 1.0, b = 1.0;
    for (int contador = 1; contador <= 49; contador++) {
        if (contador == 1) {
            soma = (a/b) + (a+2)/(b+1);
            a = a + 4;
            b = b + 2;
        } else {
            soma = soma + (a/b);
            a = a + 2;
            b = b + 1;
        }
    }
    printf("Soma: %.2f.", soma);
    return 0;
}

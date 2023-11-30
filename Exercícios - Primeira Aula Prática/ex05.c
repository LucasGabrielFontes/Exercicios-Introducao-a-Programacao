#include <stdio.h>

int main (void) {
    int aux = 1;
    float soma = 0.0, a = 2.0, b = 10.0;
    while (aux <= 9) {
        if (aux == 1) {
            soma = ((a/b)+(a*2/(b-1)));
            a = a*2*2;
            b = b-2;
        } else {
            soma = soma + (a/b);
            a = a*2;
            b = b - 1;
        }  
        aux = aux + 1;
    }
    printf("%f", soma);
    return 0;
}

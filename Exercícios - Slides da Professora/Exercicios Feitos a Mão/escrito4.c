#include <stdio.h>

int main (void) {
    int n0 = 2, n1 = 7, n2 = 3, quant, contador;
    printf("Quantos grupos de três termos da sequencia voce deseja ver? ");
    scanf("%d", &quant);
    for (contador = 1; contador <= quant; contador++) {
        if (contador == 1) {
            printf("%d - %d - %d", n0, n1, n2);
        } else {
            printf(" - %d - %d - %d", n0, n1, n2);
        }
        n0 = n0*2;
        n1 = n1*3;
        n2 = n2*4;
    }
    return 0;
}

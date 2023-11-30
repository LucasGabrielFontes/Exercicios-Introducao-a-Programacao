#include <stdio.h>

int main (void) {
    int anos = 0;
    float altchico = 1.70, altjuca = 1.10;
    while (altjuca <= altchico) {
        altchico = altchico + 0.02;
        altjuca = altjuca + 0.03;
        anos = anos + 1;
    }
    printf("Serao necessarios %d anos para Juca ultrapassar a altura de Chico.", anos);
    return 0;
}

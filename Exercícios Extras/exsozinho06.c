#include <stdio.h>

int main (void) {
    int popa = 5000000, popb = 7000000, anos = 0;
    while (popa <= popb) {
        popa = popa * 1.03;
        popb = popb * 1.02;
        anos = anos + 1;
    }
    printf("Serao necessarios %d anos para a populacao do pais A ultrapassar a populacao do pais  B.", anos);
    return 0;
}

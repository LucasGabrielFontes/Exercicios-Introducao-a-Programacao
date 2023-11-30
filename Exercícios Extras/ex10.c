#include <stdio.h>

int main (void) {
    char classe;
    float consumo, vp;
    printf("Nos informe a sua classe consumidora (A, B ou C): ");
    scanf("%c", &classe);
    printf("\nAgora, nos informe o seu consumo de energia (em HWh): ");
    scanf("%f", &consumo);
    switch (classe) {
        case 'A':
            vp = (consumo*0.5)*1.3;
        break;

        case 'B':
            vp = (consumo*0.8)*1.3;
        break;

        case 'C':
            vp = consumo*1.3;
        break;
    }
    printf("\nO valor de energia a pagar e: R$%.2f", vp);
    return 0;
}

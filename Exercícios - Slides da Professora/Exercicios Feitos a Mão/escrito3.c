#include <stdio.h>

int main (void) {
    int bois, identif, identifg, identifm, contador = 1;
    float peso, pesog, pesom;
    printf("Informe a quantidade de bois: ");
    scanf("%d", &bois);
    for (; contador <= bois; contador++) {
        printf("\nDigite o numero de identificacao do boi %d: ", contador);
        scanf("%d", &identif);
        printf("\nDigite o peso do boi %d: ", contador);
        scanf("%f", &peso);
        if (contador == 1) {
            identifg = identif;
            identifm = identif;
            pesog = peso;
            pesom = peso;
        } else if (peso > pesog) {
            pesog = peso;
            identifg = identif;
        } else if (peso < pesom) {
            pesom = peso;
            identifm = identif;
        }
    }
    printf("\n================================\nNumero de identificacao do boi mais gordo: %d\nPeso do boi mais gordo: %.2f\n", identifg, pesog);
    printf("\n================================\nNumero de identificacao do boi mais magro: %d\nPeso do boi mais magro: %.2f", identifm, pesom);
    return 0;
}

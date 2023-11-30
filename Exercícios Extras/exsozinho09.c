#include <stdio.h>

int main (void) {
    float valor = 0, valorv = 0, valorp = 0, valortotal = 0;
    char codigo;
    int contador = 1;
    while (contador <= 5) {
        if (contador == 1) {
            printf("Digite o codigo da compra (V ou P): ");
            scanf(" %c", &codigo);
        } else {
            printf("\nDigite o codigo da compra (V ou P): ");
            scanf(" %c", &codigo);
        }
        switch (codigo) {
            case 'V':
            printf("Digite o valor da compra a vista: ");
            scanf("%f", &valor);
            valorv = valorv + valor;
            break;

            case 'P':
                printf("Digite o valor da compra a prazo: ");
                scanf("%f", &valor);
                valorp = valorp + valor;
            break;
        }
        contador = contador + 1;
    }
    valortotal = valorp + valorv;
    printf("\nValor das compras a vista: %.2f.\nValor das compras a prazo: %.2f.\nValor total das compras: %.2f", valorv, valorp, valortotal);
    return 0;
}

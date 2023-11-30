#include <stdio.h>

int main (void) {
    int codigo, comerciais = 0, codigomaior, categoria;
    float pulsosres = 0, pulsosco = 0, pulsos, mairopulsores = 0, media;
    while (codigo != 0) {
        printf("Digite seu codigo de assinante: ");
        scanf("%d", &codigo);
        if (codigo != 0) {
            printf("\nDigite sua categoria:\n(1) Residencial\n(2)Comercial\n");
            scanf("%d", &categoria);
            printf("\nDigite a quantidade de pulsos consumidos: ");
            scanf("%f", &pulsos);
            if (categoria == 1) {
                pulsosres = pulsosres + pulsos;
                if (pulsos > mairopulsores) {
                    mairopulsores = pulsos;
                    codigomaior = codigo;
                }
            } else{
                if (categoria == 2) {
                    pulsosco = pulsosco + pulsos;
                    comerciais = comerciais + 1;
                }
            }
        }
    }
    media = (float)pulsosco/comerciais;
    printf("\nTotal de pulsos residenciais consumidos: %.2f\nTotal de pulsos comerciais consumidos: %.2f\nCodigo do assinante que consumiu a maior quantidade de pulsos residenciais: %d\nMedia dos pulsos comerciais consumidos: %.2f", pulsosres, pulsosco, codigomaior, media);
    return 0;
}

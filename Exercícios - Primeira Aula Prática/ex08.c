#include <stdio.h>

int main (void) {
    int contador = 1, sexo, homens = 0, mulheres = 0;
    float altura, maior, menor, somaaltmu = 0, mediaalt;
    for (; contador <= 5; contador++) {
        printf("Informe o sexo da pessoa: \n(1) Mulher\n(2) Homem\n");
        scanf("%d", &sexo);
        if (sexo == 1) {
            printf("\nDigite a altura da mulher: ");
            scanf("%f", &altura);
            somaaltmu = somaaltmu + altura;
            mulheres = mulheres + 1;
            if (contador == 1) {
                maior = altura;
                menor = altura;
            } else {
                if (altura > maior) {
                    maior = altura;
                } else {
                    if(altura < menor) {
                        menor = altura;
                    }
                }
            }
        } else {
            printf("\nDigite a altura do homem: ");
            scanf("%f", &altura);
            if (contador == 1) {
                maior = altura;
                menor = altura;
            } else {
                if (altura > maior) {
                    maior = altura;
                } else {
                    if (altura < menor) {
                        menor = altura;
                    }
                }
            }
            homens = homens + 1;
        }
    }
    if (mulheres == 0) {
        mulheres = 1;
    }
    mediaalt = (float)somaaltmu/mulheres;
    printf("\nMaior altura do grupo: %.2f\nMedia de altura das mulheres: %.2f\nQuantidade de homens: %d", maior, mediaalt, homens);
    return 0;
}

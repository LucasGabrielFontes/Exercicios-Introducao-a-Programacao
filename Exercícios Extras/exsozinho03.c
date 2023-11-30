#include <stdio.h>

int main (void) {
    int num, maior, menor, soma = 0;
    float media;
    for (int contador = 1; contador <= 10; contador++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);
        if (contador == 1) {
            menor = num;
            maior = num;
            soma = soma + num;
        } else {
            if (num > maior) {
                maior = num;
            }
            if (num < menor) {
                menor = num;
            }
            soma = soma + num;
        }
    }
    media = (float)soma/10;
    printf("\nMaior valor digitado: %d.\nMenor valor digitado: %d.\nMedia de todos os valores digitador: %.2f.", maior, menor, media);
    return 0;
}

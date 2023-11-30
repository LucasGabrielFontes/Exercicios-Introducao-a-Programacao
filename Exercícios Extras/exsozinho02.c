#include <stdio.h>

int main(void) {
    int contador = 1, num, menor, maior, soma = 0;
    float media;
    do {
        printf("Digite um valor inteiro: ");
        scanf("%d", &num);
        if (contador == 1) {
            maior = num;
            menor = num;
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
        contador = contador + 1;
    } while (contador <= 20);
    media = (float)soma/20;
    printf("\nMaior valor digitado: %d.\nMenor valor digitado: %d.\nMedia dos valores digitados: %.2f", maior, menor, media);
    return 0;
}

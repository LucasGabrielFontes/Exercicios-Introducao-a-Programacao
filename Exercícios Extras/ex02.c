#include <stdio.h>

int main(void){
    int a, b, c, menor, maior;
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("\nDigite o segundo número: ");
    scanf("%d", &b);
    printf("\nDigite o terceiro número: ");
    scanf("%d", &c);
    maior = a;
    menor = a;
    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }
    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }
    printf("\nMaior valor digitado: %d\nMenor valor digitado: %d", maior, menor);
    return 0; 
}

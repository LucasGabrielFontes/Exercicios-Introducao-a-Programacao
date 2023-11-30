#include <stdio.h>

int main(void) {
    int a, b, c, maior, maior1, maior2, soma = 0;
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("\nDigite o segundo valor: ");
    scanf("%d",&b);
    printf("\nDigite o terceiro valor: ");
    scanf("%d", &c);
    maior = a;
    if (b > maior) {
        maior1 = b;
    } else {
        maior1 = a;
        maior = b;
    }
    if (c > maior) {
        maior2 = c;
    } else {
        maior2 = maior;
    }
    soma = (maior1 + maior2);
    printf("\nSoma dos dois maiores valores (%d e %d): %d.", maior1, maior2, soma);
    return 0;
}

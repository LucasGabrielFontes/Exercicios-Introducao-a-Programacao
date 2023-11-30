#include <stdio.h>

int main(void){
    int a, b, c, aux, n1, n2, n3;
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("\nDigite o segundo valor: ");
    scanf("%d", &b);
    if (a > b) {
        n2 = a;
        n1 = b;
    } else {
        n1 = a;
        n2 = b;
    }
    printf("\nDigite o terceiro valor: ");
    scanf("%d", &c);
    if (c > n2) {
        n3 = c;
    } else {
        if (c < n1) {
            aux = n2;
            n2 = n1;
            n1 = c;
            n3 = aux;
        } else {
            if (c < n2) {
                n3 = n2;
                n2 = c;
            }
        }
    }
    printf("Ordem crescente dos numeros: %d, %d, %d.", n1, n2, n3);
    return 0;
}

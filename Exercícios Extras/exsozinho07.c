#include <stdio.h>

int main (void) {
    int num, aux, teste = 0;
    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &num);
    aux = num;
    while (aux >=1) {
        if (num%aux == 0) {
            teste = teste + 1;
        }
        aux = aux - 1;
    }
    if (teste == 2) {
        printf("\n%d e um numero primo.", num);
    } else {
        printf("\n%d nao e um numero primo.", num);
    }
    return 0;
}

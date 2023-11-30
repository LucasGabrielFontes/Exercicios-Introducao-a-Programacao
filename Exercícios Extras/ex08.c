#include <stdio.h>

int main (void) {
    int l1, l2, l3;
    printf("Digite o valor do comprimento do primeiro lado do triangulo: ");
    scanf("%d", &l1);
    printf("\nDigite o valor do comprimento do segundo lado do triangulo: ");
    scanf("%d", &l2);
    printf("\nDigite o valor do comprimento do terceiro lado do triangulo: ");
    scanf("%d", &l3);
    if ((l1 < l2 + l3) && (l2 < l1 + l3) && (l3 < l1 + l2)) {
        if ((l1 == l2) && (l2 == l3)) {
            printf("\nCom tres lados iguais a %d, forma-se um triangulo equilatero.", l1);
        } else {
            if ((l1 != l2) && (l1 != l3) && (l2 != l3)) {
                printf("\nOs valores %d, %d e %d formam um triangulo escaleno.", l1, l2, l3);
            } else {
                printf("\nOs valores %d, %d e %d formam um triangulo isosceles.", l1, l2, l3);
            }
        }
    } else {
        printf("\nOs valores %d, %d e %d nao formam um triangulo, pois nao atendem as condicoes necessarias para isso.", l1, l2, l3);
    }
    return 0;
}

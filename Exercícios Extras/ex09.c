#include <stdio.h>
#include <math.h>

int main (void) {
    int a, b, c, D; 
    float x1, x2;
    printf("ax^2 + bx + c = 0\n");
    printf("\nDigite o valor de a para preencher a equacao do segundo grau: ");
    scanf("%d", &a);
    printf("\nDigite o valor de b para preencher a equacao do segundo grau: ");
    scanf("%d", &b);
    printf("\nDigite o valor de c para preencher a equacao do segundo grau: ");
    scanf("%d", &c);
    if (c == 0) {
        D = b*b;
    } else {
        D = (b*b + (-4*a*c));
    }
    if (D < 0) {
        printf("\n%dx^2 + %dx + %d", a, b, c);
        printf("\nNao ha solucao real para a equacao montada com os valores informados, pois o determinante e negativo.");
    } else {
        x1 = (((sqrt(D)) - b)/(2*a));
        x2 = ((-(sqrt(D)) - b)/(2*a));
        if (x1 == x2) {
            printf("\n%dx^2 + %dx + %d", a, b, c);
            printf("\nHa uma unica solucao para a equacao montada com os valores informados: %f", x1);
        } else {
            printf("\n%dx^2 + %dx + %d", a, b, c);
            printf("\nHa duas solucoes para a equacao montada com os valores informados: %f e %f", x1, x2);
        }
    }
    return 0;
}

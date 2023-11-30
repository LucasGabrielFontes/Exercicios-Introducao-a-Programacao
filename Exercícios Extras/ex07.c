#include <stdio.h>
#include <math.h>

int main (void) {
    int operador, a, b, soma;
    float rq;
    printf("[1] Somar dois numeros\n[2] Tirar a raiz quadrada de um numero\n");
    printf("\nDigite a opção desejada: ");
    scanf("%d", &operador);
    switch (operador) {
        case 1:
            printf("\nDigite o primeiro valor: ");
            scanf("%d", &a);
            printf("\nDigite o segundo valor: ");
            scanf("%d", &b);
            soma = (a + b);
            printf("\nA soma %d com %d e %d", a, b, soma);
        break;

        case 2:
            printf("\nDigite o valor para tirar a raiz quadrada: ");
            scanf("%d", &a);
            rq = pow(a, (float)1/2);
            printf("A raiz quadrada de %d e: %.2f", a, rq);
        break;
    }
    return 0;
}

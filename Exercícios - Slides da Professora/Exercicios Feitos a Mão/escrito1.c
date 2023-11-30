#include <stdio.h>

int main (void) {
    int resp;
    float a, b, soma, subtracao, multiplicacao, divisao;
    printf("Menu de opcoes:\n1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n0. Sair\nEscolha a opcao desejada: ");
    scanf("%d", &resp);
    while (resp != 0) {
        switch (resp) {
            case 1:
                printf("\nDigite o primeiro numero: ");
                scanf("%f", &a);
                printf("\nDigite o segundo numero: ");
                scanf("%f", &b);
                soma = a + b;
                printf("\nA soma entre %.2f e %.2f e: %.2f\n", a, b, soma);
                printf("\nMenu de opcoes:\n1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n0. Sair\nEscolha a opcao desejada: ");
                scanf("%d", &resp);
            break;

            case 2:
                printf("\nDigite o primeiro numero: ");
                scanf("%f", &a);
                printf("\nDigite o segunfo numero: ");
                scanf("%f", &b);
                subtracao = a - b;
                printf("\nA subtracao entre %.2f e %.2f e: %.2f\n", a, b, subtracao);
                printf("\nMenu de opcoes:\n1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n0. Sair\nEscolha a opcao desejada: ");
                scanf("%d", &resp);
            break;

            case 3:
                printf("\nDigite o primeiro numero: ");
                scanf("%f", &a);
                printf("\nDigite o segundo numero: ");
                scanf("%f", &b);
                multiplicacao = a*b;
                printf("\nA multiplicacao entre %.2f e %.2f e: %.2f\n", a, b, multiplicacao);
                printf("\nMenu de opcoes:\n1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n0. Sair\nEscolha a opcao desejada: ");
                scanf("%d", &resp);
            break;

            case 4:
                printf("\nDigite o primeiro numero: ");
                scanf("%f", &a);
                printf("\nDigite o segundo numero: ");
                scanf("%f", &b);
                divisao = a/b;
                printf("\nA divisao entre %.2f e %.2f e: %.2f\n", a, b, divisao);
                printf("\nMenu de opcoes:\n1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n0. Sair\nEscolha a opcao desejada: ");
                scanf("%d", &resp);
            break;
        }
    }
    return 0;
}

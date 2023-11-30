#include <stdio.h>

int main(void){
    int a, b, operador, operacao;
    float divisao;
    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &a);
    printf("\nDigite o segundo valor inteiro: ");
    scanf("%d", &b);
    printf("\nAgora, escolha a operacao a ser feita entre os dois valores informados: (de acordo com a seguinte codificacao)\n(1) Adicao\n(2) Subtracao\n(3) Divisao\n(4) Multiplicacao\n");
    scanf("%d", &operador);
    switch (operador){
        case 1:
            operacao = (a + b);
            printf("\nA soma entre %d e %d e: %d", a, b, operacao);
        break;
    
        case 2:
            operacao = (a - b);
            printf("\nA subtracao entre %d e %d e: %d", a, b, operacao);
        break;

        case 3:
            divisao = ((float)a/b);
            if (a%b != 0) {
                printf("\nA divisao entre %d e %d e: %.2f", a, b, divisao);
            } else {
                printf("\nA divisao entre %d e %d e: %.0f", a, b, divisao);
            }
            
        break;

        case 4:
            operacao = (a * b);
            printf("\nA multiplicacao entre %d e %d e: %d", a, b, operacao);
        break;
    }
    return 0;
}

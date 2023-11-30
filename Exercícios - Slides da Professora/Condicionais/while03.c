#include <stdio.h>

int main (void) {
    int senha = 14641, tentativas = 0, senhadig;
    while (1) {
        if (tentativas > 5) {
            printf("\nA quantidade limite de tentativas (5) foi alcancada. O telefone ficara bloqueado por 24 horas ate que a quantidade de tentativas seja reiniciada.");
            break;
        } else if (tentativas == 0) {
            printf("Digite a senha: ");
        } else {
            printf("\nDigite a senha: ");
        }
        scanf("%d", &senhadig);
        tentativas = tentativas + 1;
        if (senhadig == senha) {
            printf("\nSenha correta! Numero de tentativas: %d", tentativas);
            break;
        } else {
            printf("\nSenha incorreta! Tente novamente.\n");
        }
    }
    return 0;
}

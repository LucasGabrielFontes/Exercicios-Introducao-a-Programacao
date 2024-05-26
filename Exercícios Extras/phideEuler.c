#include <stdio.h>
#include <stdlib.h>

int calculaPhi (int numero);
int calculaMdc (int a, int b);

int main () {

    int opcao; // Armazena a opcao digitada pelo usuario para continuar, ou nao, a execucao do codigo

    do {

        int num; // Numero digitado pelo usuario
        int phi; // Resultado do Phi de Euler do numero

        printf("Deseja obter o PHI de Euler de qual numero? ");
        scanf("%d", &num);
        while (num <= 0) {
            printf("\nNumero invalido! E necessario ser um inteiro positivo: ");
            scanf("%d", &num);
        }

        phi = calculaPhi(num);

        printf("\nResultado: %d\n\n", phi);
        printf("=======================================\n\n");

        printf("Digite o numero da acao que voce deseja realizar: \n\n");
        printf("1- Testar outro numero;\n");
        printf("2- Sair;\n\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        while ((opcao != 1) && (opcao != 2)) {
            printf("Opcao invalida! Digite corretamente: ");
            scanf("%d", &opcao);
        }

        system("cls");

    } while (opcao == 1);

    return 0;
}

int calculaPhi (int numero) {

    int phi = 0;

    for (int x = 1; x <= numero; x++) {
        if (calculaMdc(numero, x) == 1) {

            phi++;

        }
    }

    return phi;

}

int calculaMdc (int a, int b) { // Utiliza o Algoritmo de Euclides e recursividade para calcular o MDC entre dois numeros

    if (b == 0) {
        return a;
    } else {
        return calculaMdc(b, a%b);
    }

}

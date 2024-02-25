#include <stdio.h>
#include <stdlib.h>

int calculaMdc (int a, int b) {

    while (b != 0) {

        int temp = b;
        b = a%b;
        a = temp;

    }

    return a;
}

int calculaPhi (int numero) {

    int phi = 0;

    for (int x = 1; x <= numero; x++) {

        if (calculaMdc(numero, x) == 1) {
            phi += 1;

        }
    }

    return phi;
}

int main () {

    int opcao; // Armazena a opcão digitada pelo usuário para continuar, ou não, a execução do código

    do {

        int a; // Número digitado pelo usuário
        int phi; // Resultado de Phi de Euler do número

        printf("Digite um numero inteiro positivo para saber o PHI de Euler dele: ");
        scanf("%d", &a);
        while (a <= 0) {
            printf("Número inválido! O número precisa ser um inteiro positivo: ");
            scanf("%d", &a);
        }

        phi = calculaPhi(a);

        printf("\nPhi de Euler de %d: %d\n\n", a, phi);
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
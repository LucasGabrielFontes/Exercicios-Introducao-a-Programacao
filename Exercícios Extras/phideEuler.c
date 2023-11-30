#include <stdio.h>

#define P 15

void calculaprimos (int vetor[], int t) {
    int i = 0, a = 2;
    while (i < t) {
        int teste = 0;
        for (int aux = 1; aux <= a; aux++) {
            if ((a % aux) == 0) {
                teste += 1;
            }
        }
        if (teste == 2) {
            vetor[i] = a;
            i += 1;
        }
        a += 1;
    }
}

int calculamdc (int a, int b, int primos[], int p) {
    int mdc = 1;
    for (int i = 0; i < p; i++) {
        if (((a % primos[i]) == 0) && ((b % primos[i]) == 0)) {
            mdc = mdc * primos[i];
            a = a/primos[i];
            b = b/primos[i];
        }
    }
    return mdc;
}

int calculaphi (int numero, int primos[]) {
    int x = 1, phi = 0;
    for (; x <= numero; x++) {
        if (calculamdc(numero, x, primos, P) == 1) {
            phi += 1;
        }
    }
    return phi;
}

int main () {
    int vetorprimos[P], a, phi, teste;
    calculaprimos(vetorprimos, P);
    printf("Digite o numero: ");
    scanf("%d", &a);
    phi = calculaphi(a, vetorprimos);
    printf("O Phi de Euler de %d e: %d\n\n", a, phi);
    printf("Digite o numero da acao que voce deseja realizar: \n\n");
    printf("1- Testar outro numero;\n");
    printf("2- Sair\n");
    printf("Opcao: ");
    scanf("%d", &teste);
    while ((teste != 1) && (teste != 2)) {
        printf("Opcao invalida! Digite corretamente: ");
        scanf("%d", &teste);
    }
    while (teste == 1) {
        printf("\n-----------------------------\n\n");
        printf("Digite o numero: ");
        scanf("%d", &a);
        phi = calculaphi(a, vetorprimos);
        printf("O Phi de Euler de %d e: %d\n\n", a, phi);
        printf("Digite o numero da acao que voce deseja realizar: \n\n");
        printf("1- Testar outro numero;\n");
        printf("2- Sair\n");
        printf("Opcao: ");
        scanf("%d", &teste);
        while ((teste != 1) && (teste != 2)) {
            printf("Opcao invalida! Digite corretamente: ");
            scanf("%d", &teste);
        }
    }
    return 0;
}
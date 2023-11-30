#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define N 25
#define TAM 3

typedef struct {
    int codigo;
    char descricao[N];
    float valor;
    int quantidade;
} produto;

void tiraenter (char *frase) {
    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == '\n') {
            frase[i] = '\0';
            break;
        }
    }
}

void preencheestoque (produto vetor[], int t) {
    char sn;
    int codigo;
    for (int i = 0; i < t; i++) {
        printf("---------- PRODUTO %d ----------\n\n", i+1);
        printf("Codigo: ");
        scanf("%d", &vetor[i].codigo);
        fflush(stdin);
        printf("Descricao: ");
        fgets(vetor[i].descricao, N, stdin);
        tiraenter(vetor[i].descricao);
        fflush(stdin);
        printf("Valor: R$");
        scanf("%f", &vetor[i].valor);
        fflush(stdin);
        printf("Quantidade de estoque: ");
        scanf("%d", &vetor[i].quantidade);
        fflush(stdin);
        printf("\n\n");
    }
    printf("Deseja editar a informacao de algum produto? [S/N] ");
    scanf("%c", &sn);
    fflush(stdin);
    while (toupper(sn) == 'S') {
        printf("\nDigite o codigo do produto a ser alterado: ");
        scanf("%d", &codigo);
        fflush(stdin);
        for (int i = 0; i < t; i++) {
            if (vetor[i].codigo == codigo) {
                printf("\nNova Descricao: ");
                fgets(vetor[i].descricao, N, stdin);
                tiraenter(vetor[i].descricao);
                fflush(stdin);
                printf("Novo valor: R$");
                scanf("%f", &vetor[i].valor);
                fflush(stdin);
                printf("Nova quantidade de estoque: ");
                scanf("%d", &vetor[i].quantidade);
                fflush(stdin);
                printf("\n\n");
            }
        }
        printf("\nDeseja editar a informacao de algum produto? [S/N] ");
        scanf("%c", &sn);
        fflush(stdin);
    }
    system("cls");
}

void consultaestoqueporletra (produto vetor[], int t) {
    char letra;
    printf("Digite a primeira letra dos produtos que voce deseja visualizar: ");
    scanf("%c", &letra);
    fflush(stdin);
    for (int i = 0; i < t; i++) {
        if (tolower(vetor[i].descricao[0]) == tolower(letra)) {
            printf("\nDescricao: %s", vetor[i].descricao);
            printf("\nCodigo: %d", vetor[i].codigo);
            printf("\nValor: R$%.2f", vetor[i].valor);
            printf("\nQuantidade em estoque: %d", vetor[i].quantidade);
            printf("\n\n");
        }
    }
}

void estoqueabaixode5 (produto vetor[], int t) {
    printf("--------------------------------------------------------\n");
    printf("Produtos com quantidade de estoque abaixo de 5: \n");
    printf("--------------------------------------------------------\n");
    for (int i = 0; i < t; i++) {
        if (vetor[i].quantidade < 5) {
            printf("\nCodigo: %d", vetor[i].codigo);
            printf("\nDescricao: %s", vetor[i].descricao);
            printf("\nValor: R$%.2f", vetor[i].valor);
            printf("\nQuantidade em estoque: %d\n", vetor[i].quantidade);
        }
    }
}

int main () {
    produto estoque[TAM];
    preencheestoque(estoque, TAM);
    consultaestoqueporletra(estoque, TAM);
    estoqueabaixode5(estoque, TAM);
    return 0;
}
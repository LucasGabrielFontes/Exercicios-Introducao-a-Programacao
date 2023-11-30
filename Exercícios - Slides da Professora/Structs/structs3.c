#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define N 25
#define TAM 3

typedef struct {
    char marca[N], cor[N];
    int ano;
    float preco;
} estrutura;

void tiraenter (char *frase) {
    for(int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == '\n') {
            frase[i] = '\0';
            break;
        }
    }
}

void preenchecarros (estrutura carros[], int t) {
    for (int i = 0; i < t; i++) {
        printf("---------- CARRO %d ----------\n\n", i+1);
        printf("Marca: ");
        fgets(carros[i].marca, N, stdin);
        tiraenter(carros[i].marca);
        fflush(stdin);
        printf("Ano: ");
        scanf("%d", &carros[i].ano);
        fflush(stdin);
        printf("Cor: ");
        fgets(carros[i].cor, N, stdin);
        tiraenter(carros[i].cor);
        fflush(stdin);
        printf("Preco: R$");
        scanf("%f", &carros[i].preco);
        fflush(stdin);
        printf("\n\n");
    }
}

void pesquisacarros (estrutura carros[], int t) {
    int escolha, carrosencontrados = 0, ano;
    float preco;
    char marca[N], cor[N];
    system("cls");
    printf("---------- MENU ----------\n\n");
    printf("Escolha, pelo número, qual acao voce deseja executar:\n");
    printf("0- Sair;\n");
    printf("1- Pesquisar pelo preco;\n");
    printf("2- Pesquisar pela marca;\n");
    printf("3- Pesquisar pela marca, ano e cor.\n");
    scanf("%d", &escolha);
    fflush(stdin);
    while ((escolha < 0) || (escolha > 3)) {
        printf("Acao invalida! Digite novamente: ");
        scanf("%d", &escolha);
        fflush(stdin);
    }
    while (escolha != 0) {
        carrosencontrados = 0;
        if (escolha == 1) {
            system("cls");
            printf("---------- PESQUISA POR PRECO ----------\n\n");
            printf("\nDigite o preco do carro que voce deseja pesquisar: R$");
            scanf("%f", &preco);
            fflush(stdin);
            for (int i = 0; i < t; i++) {
                if (carros[i].preco <= preco) {
                    carrosencontrados += 1;
                }
            }
            printf("Carros encontrados: %d\n\n", carrosencontrados);
            carrosencontrados = 0;
            for (int i = 0; i < t; i++) {
                if (carros[i].preco <= preco) {
                    carrosencontrados += 1;
                    printf("CARRO %d\n\n", carrosencontrados);
                    printf("Marca: %s\n", carros[i].marca);
                    printf("Cor: %s\n", carros[i].cor);
                    printf("Ano: %d\n", carros[i].ano);
                    printf("\n\n");
                }
            }
            printf("Qual acao voce deseja executar agora:\n\n");
            printf("0- Sair;\n");
            printf("1- Pesquisar pelo preco;\n");
            printf("2- Pesquisar pela marca;\n");
            printf("3- Pesquisar pela marca, ano e cor.\n");
            scanf("%d", &escolha);
            fflush(stdin);
        } else if (escolha == 2) {
            carrosencontrados = 0;
            system("cls");
            printf("---------- PESQUISA PELA MARCA ----------\n\n");
            printf("Digite a marca do carro que voce deseja pesquisar: ");
            fgets(marca, N, stdin);
            tiraenter(marca);
            fflush(stdin);
            for (int i = 0; i < t; i++) {
                if (strcmp(marca, carros[i].marca) == 0) {
                    carrosencontrados += 1;
                }
            }
            printf("Carros encontrados: %d\n\n", carrosencontrados);
            carrosencontrados = 0;
            for (int i = 0; i < t; i++) {
                if (strcmp(marca, carros[i].marca) == 0) {
                    carrosencontrados += 1;
                    printf("CARRO %d\n\n", carrosencontrados);
                    printf("Preco: R$%.2f\n", carros[i].preco);
                    printf("Ano: %d\n", carros[i].ano);
                    printf("Cor: %s", carros[i].cor);
                    printf("\n\n");
                }
            }
            printf("Qual acao voce deseja executar agora:\n\n");
            printf("0- Sair;\n");
            printf("1- Pesquisar pelo preco;\n");
            printf("2- Pesquisar pela marca;\n");
            printf("3- Pesquisar pela marca, ano e cor.\n");
            scanf("%d", &escolha);
            fflush(stdin);
        } else if (escolha == 3) {
            carrosencontrados = 0;
            system("cls");
            printf("---------- PESQUISA PELA MARCA, ANO E COR ----------\n\n");
            printf("Digite a marca do carro que voce deseja pesquisar: ");
            fgets(marca, N, stdin);
            tiraenter(marca);
            fflush(stdin);
            printf("Digite o ano do carro que voce deseja pesquisar: ");
            scanf("%d", &ano);
            fflush(stdin);
            printf("Digite a cor do carro que voce deseja pesquisar: ");
            fgets(cor, N, stdin);
            tiraenter(cor);
            fflush(stdin);
            for (int i = 0; i < t; i++) {
                if ((strcmp(marca, carros[i].marca) == 0) && (carros[i].ano == ano) && (strcmp(cor, carros[i].cor) == 0)) {
                    carrosencontrados += 1;
                }
            }
            printf("Carros encontrados: %d\n\n", carrosencontrados);
            carrosencontrados = 0;
            for (int i = 0; i < t; i++) {
                if ((strcmp(marca, carros[i].marca) == 0) && (carros[i].ano == ano) && (strcmp(cor, carros[i].cor) == 0)) {
                    carrosencontrados += 1;
                    printf("CARRO %d\n\n", carrosencontrados);
                    printf("Preco: R$%.2f\n\n", carros[i].preco);
                }
            }
            printf("Qual acao voce deseja executar agora:\n\n");
            printf("0- Sair;\n");
            printf("1- Pesquisar pelo preco;\n");
            printf("2- Pesquisar pela marca;\n");
            printf("3- Pesquisar pela marca, ano e cor.\n");
            scanf("%d", &escolha);
            fflush(stdin);
        }
    }
    system("cls");
    printf("Obrigado por usar nosso sistema!");
}

int main () {
    estrutura carros[TAM];
    preenchecarros(carros, TAM);
    pesquisacarros(carros, TAM);
    return 0;
}
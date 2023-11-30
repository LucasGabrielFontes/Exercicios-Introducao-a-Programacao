#include <stdio.h>

int main(void){
    int novo, nova, velho, velha, idade1, idade2, somavelhonova, produtonovovelha;
    printf("Digite a idade do primeiro homem: ");
    scanf("%d", &idade1);
    printf("\nDigite a idade do segundo homem: ");
    scanf("%d", &idade2);
    if (idade2 > idade1) {
        novo = idade1;
        velho = idade2;
    } else {
        novo = idade2;
        velho = idade1;
    }
    printf("\nDigite a idade da primeira mulher: ");
    scanf("%d", &idade1);
    printf("\nDigite a idade da segunda mulher: ");
    scanf("%d", &idade2);
    if (idade2 > idade1) {
        nova = idade1;
        velha = idade2;
    } else {
        nova = idade2;
        velha = idade1;
    }
    somavelhonova = (velho + nova);
    produtonovovelha = (novo*velha);
    printf("\nSoma das idades do homem mais velho com a mulher mais nova: %d", somavelhonova);
    printf("\nProduto das idades do homem mais novo com a mulher mais velha: %d", produtonovovelha);
    return 0;
}

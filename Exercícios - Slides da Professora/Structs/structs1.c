#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 25

typedef struct {
    char nome[N];
    int pontos;
} time;

void tiraenter (char *nome) {
    for (int i = 0; nome[i] != '\0'; i++) {
        if (nome[i] == '\n') {
            nome[i] = '\0';
            break;
        }
    }
}

void recebedadostimes (time times[], int t) {
    for (int i = 0; i < t; i++) {
        printf("----------");
        printf(" Time %d ", i+1);
        printf("----------\n\n");
        printf("Nome: ");
        fgets(times[i].nome, N, stdin);
        fflush(stdin);
        tiraenter(times[i].nome);
        printf("Pontos: ");
        scanf("%d", &times[i].pontos);
        printf("\n\n");
        fflush(stdin);
    }
}

void declaravencedor (time times[], int t) {
    char vencedor[N];
    int pontuacaovencedor;
    strcpy(vencedor, times[0].nome);
    pontuacaovencedor = times[0].pontos;
    for (int i = 1; i < t; i++) {
        if (times[i].pontos > pontuacaovencedor) {
            pontuacaovencedor = times[i].pontos;
            strcpy(vencedor, times[i].nome);
        }
    }
    printf("%s e o campeao do Campeonato Brasileiro, com %d pontos!", vencedor, pontuacaovencedor);
}
 
int main () {
    time times[10];
    recebedadostimes(times, 10);
    declaravencedor(times, 10);
    return 0;
}
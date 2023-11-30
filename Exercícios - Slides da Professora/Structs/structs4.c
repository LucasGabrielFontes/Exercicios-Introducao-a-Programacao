#include <stdio.h>
#include <stdlib.h>

#define N 5

enum abatesn {SIM, NAO};

typedef struct {
    enum abatesn abate;
    int codigo, dia, mes, ano;
    float litrosporsemana, comidaporsemana;
} cabeca;

float calculaleitetotal (cabeca vacas[], int t) {
    float totalleite = 0;
    for (int i = 0; i < t; i++) {
        totalleite += vacas[i].litrosporsemana;
    }
    return totalleite;
}

float calculaleiteabate (cabeca vacas[], int t) {
    float total = 0;
    for (int i = 0; i < t; i++) {
        if (vacas[i].abate == NAO) {
            total += vacas[i].litrosporsemana;
        }
    }
    return total;
}

float calculacomidatotal (cabeca vacas[], int t) {
    float comida = 0;
    for (int i = 0; i < t; i++) {
        comida += vacas[i].comidaporsemana;
    }
    return comida;
}

float calculacomidaabate (cabeca vacas[], int t) {
    float comidaabate = 0;
    for (int i = 0; i < t; i++) {
        if (vacas[i].abate == NAO) {
            comidaabate += vacas[i].comidaporsemana;
        }
    }
    return comidaabate;
}

int cabecasabate (cabeca vacas[], int t) {
    int cabecas = 0;
    for (int i = 0; i < t; i++) {
        if (vacas[i].abate == SIM) {
            cabecas += 1;
        }
    }
    return cabecas;
}

void cadastravacas (cabeca vacas[], int t) {
    printf("-----------------------\n");
    printf("   CADASTRO DE VACAS   \n");
    printf("-----------------------\n\n");
    for (int i = 0; i < t; i++) {
        printf("- Vaca %d\n", i+1);
        printf("Codigo da cabeca: ");
        scanf("%d", &vacas[i].codigo);
        fflush(stdin);
        printf("Litros de leite produzidos por semana: ");
        scanf("%f", &vacas[i].litrosporsemana);
        fflush(stdin);
        printf("Quantidade de alimento ingerida por semana: ");
        scanf("%f", &vacas[i].comidaporsemana);
        fflush(stdin);
        printf("Data de nascimento (separada por espaco): ");
        scanf("%d %d %d", &vacas[i].dia, &vacas[i].mes, &vacas[i].ano);
        fflush(stdin);
        printf("\n\n");
    }
}

void abateounao (cabeca vacas[], int t) {
    for (int i = 0; i < t; i++) {
        if (vacas[i].litrosporsemana < 40) {
            vacas[i].abate = SIM;
            continue;
        } else if (((vacas[i].litrosporsemana > 50) && (vacas[i].litrosporsemana < 70)) && (vacas[i].comidaporsemana/7 > 50)) {
            vacas[i].abate = SIM;
            continue;
        } else if ((2023 - vacas[i].ano) > 5) {
            vacas[i].abate = SIM;
            continue;
        } else {
            vacas[i].abate = NAO;
            continue;
        }
    } 
}

void mostramenu (cabeca vacas[], int t) {
    int escolha = 1;
    while (escolha != 6) {
        system("cls");
        printf("--------------------------\n");
        printf("     MENU DE ESCOLHAS     \n");
        printf("--------------------------\n\n");
        printf("Digite a acao que voce deseja executar: \n\n");
        printf("1- Ver total de litros de leite produzido por semana\n");
        printf("2- Ver total de alimento consumido por semana\n");
        printf("3- Ver total de litros de leites produzido por semana apos o abate\n");
        printf("4- Ver total de alimento consumido por semana apos o abate\n");
        printf("5- Ver quantas cabecas estao separadas para o abate\n");
        printf("6- SAIR DO PROGRAMA\n");
        printf("Sua escolha: ");
        scanf("%d", &escolha);
        printf("\n");
        while ((escolha < 1) || (escolha > 6)) {
            printf("Escolha invalida, digite a opcao corretamente: ");
            scanf("%d", &escolha);
        }
        if (escolha == 1) {
            printf("Leite total produzido por semana: %.2f litros\n\n", calculaleitetotal(vacas, t));
            printf("O que deseja fazer agora: ");
            scanf("%d", &escolha);
        } else if (escolha == 2) {
            printf("Quantidade total de alimento consumido por semana: %.2f quilos\n\n", calculacomidatotal(vacas, t));
            printf("O que deseja fazer agora: ");
            scanf("%d", &escolha);
        } else if (escolha == 3) {
            printf("Leite total produzido por semana apos o abate: %.2f litros\n\n", calculaleiteabate(vacas, t));
            printf("O que deseja fazer agora: ");
            scanf("%d", &escolha);
        } else if (escolha == 4) {
            printf("Quantidade total de alimento consumido por semana apos o abate: %.2f quilos\n\n", calculacomidaabate(vacas, t));
            printf("O que deseja fazer agora: ");
            scanf("%d", &escolha);
        } else if (escolha == 5) {
            printf("Quantidade total de cabecas separadas para o abate: %d\n\n", cabecasabate(vacas, t));
            printf("O que deseja fazer agora: ");
            scanf("%d", &escolha);
        }
    }
}

int main () {   
    cabeca vacas[N];
    cadastravacas(vacas, N);
    abateounao(vacas, N);
    mostramenu(vacas, N);
    return 0;
}
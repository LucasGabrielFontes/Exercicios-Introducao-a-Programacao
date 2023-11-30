#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 50
#define E 100
#define P 5
#define piz 3
#define ped 6

enum situacao {empreparo, acaminho, entregue};

typedef struct {
    int telefone, cep;
    char nome[N], endereco[E], completemento[N];
} pessoas;

typedef struct {
    int codigo;
    char sabor[N];
    float valor;
} produtos;

typedef struct {
    int numeropedido, telefonecliente, codigopizza, codigomotoqueiro;
    enum situacao situacaopizza;
} vendas;

void tiraenter (char string[]) {
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == '\n') {
            string[i] = '\0';
            break;
        }
    }
}

void cabecalho () {
    printf("-----------------------------------\n");
    printf("      PIZZARIA CATCH THE PIZZA     \n");
    printf("        a melhor da regiao         \n");
    printf("-----------------------------------\n");
}

int validaclientes (int telefone, pessoas clientes[], int t) {
    for (int i = 0; i < t; i++) {
        if (clientes[i].telefone == telefone) {
            return 0;
        }
    }
    return 1;
}

int validapizzas (int codigo, produtos pizzas[], int t) {
    for (int i = 0; i < t; i++) {
        if (pizzas[i].codigo == codigo) {
            return 0;
        }
    }
    return 1;
}

void situacaopizzas (vendas pedidos[], int t) {
    printf("Situacao dos pedidos: \n");
    srand((unsigned)time(NULL));
    pedidos[t].codigomotoqueiro = (rand() % 10) + 1;
    for (int i = 0; i < t; i++) {
        printf("|| Pedido %d: ", pedidos[i].numeropedido);
        if (pedidos[i].situacaopizza == empreparo) {
            printf("Em preparo ||\n");
        } else if (pedidos[i].situacaopizza == acaminho) {
            printf("A caminho. Codigo do motoqueiro: %d||\n", pedidos[i].codigomotoqueiro);
        } else if (pedidos[i].situacaopizza == entregue) {
            printf("ENTREGUE pelo motoqueiro %d||\n", pedidos[i].codigomotoqueiro);
        }
    }
    printf("\n\n");
}

void cadastraclientes (pessoas clientes[], int t) {
    printf("\n--- CADASTRO DE CLIENTES ---\n\n");
    for (int i = 0; i < t; i++) {
        printf("- Cliente %d:\n", i+1);
        printf("Nome: ");
        fgets(clientes[i].nome, N, stdin);
        fflush(stdin);
        tiraenter(clientes[i].nome);
        printf("Telefone (apenas numeros): ");
        scanf("%d", &clientes[i].telefone);
        fflush(stdin);
        printf("Endereco: ");
        fgets(clientes[i].endereco, E, stdin);
        tiraenter(clientes[i].endereco);
        fflush(stdin);
        printf("Complemento: ");
        fgets(clientes[i].completemento, N, stdin);
        tiraenter(clientes[i].completemento);
        fflush(stdin);
        printf("CEP (apenas numeros): ");
        scanf("%d", &clientes[i].cep);
        fflush(stdin);
        printf("\n\n");
    }
    system("cls");
}

void cadastrapizzas (produtos pizzas[], int t) {
    cabecalho();
    printf("\n--- CADASTRO DE PIZZAS ---\n\n");
    for (int i = 0; i < t; i++) {
        printf("- Pizza %d\n", i+1);
        printf("Sabor: ");
        fgets(pizzas[i].sabor, N, stdin);
        tiraenter(pizzas[i].sabor);
        fflush(stdin);
        printf("Codigo: ");
        scanf("%d", &pizzas[i].codigo);
        fflush(stdin);
        printf("Valor: R$");
        scanf("%f", &pizzas[i].valor);
        fflush(stdin);
        printf("\n\n");
    }
    system("cls");
}

void cadastrapedidos (vendas pedidos[], int t, pessoas clientes[], int clis, produtos pizza[], int pizzs) {
    srand((unsigned)time(NULL));
    for (int i = 0; i < t; i++) {
        cabecalho();
        printf("\n--- CADASTRO DE PEDIDOS ---\n\n");
        if (i == 0) {
            printf("Situacao dos pedidos: nenhum pedido cadastrado.\n\n");
        } else {
            situacaopizzas(pedidos, i);
        }
        pedidos[i].numeropedido = i + 1;
        printf("- Pedido %d\n", i+1);
        printf("Numero do cliente: ");
        scanf("%d", &pedidos[i].telefonecliente);
        fflush(stdin);
        while (validaclientes(pedidos[i].telefonecliente, clientes, clis)) {
            printf("Cliente nao encontrado, digite o numero correto: ");
            scanf("%d", &pedidos[i].telefonecliente);
            fflush(stdin);
        }
        printf("Codigo da pizza: ");
        scanf("%d", &pedidos[i].codigopizza);
        fflush(stdin);
        while (validapizzas(pedidos[i].codigopizza, pizza, pizzs)) {
            printf("Pizza nao encontrada, digite o codigo correto: ");
            scanf("%d", &pedidos[i].codigopizza);
            fflush(stdin);
        }
        if (i == 1) {
            pedidos[i-1].situacaopizza = acaminho;
            pedidos[i-1].codigomotoqueiro = (rand() % 10) + 1;
            pedidos[i].situacaopizza = empreparo;
        } else if (i == 0) {
            pedidos[i].situacaopizza = empreparo;
        } else if (i == t - 1) {
            pedidos[i-2].situacaopizza = entregue;
            pedidos[i-1].situacaopizza = entregue;
            pedidos[i].situacaopizza = entregue;
        } else {
            pedidos[i-2].situacaopizza = entregue;
            pedidos[i-1].situacaopizza = acaminho;
            pedidos[i].situacaopizza = empreparo;
        }
        printf("\n\n");
        if (i < t - 1) {
            system("cls");
        }
    }
}

void mostraresumo (pessoas clientes[], produtos pizzas[], vendas pedidos[], int t, int p, int pizzs) {
    cabecalho();
    printf(" --  RELATORIO DE PEDIDOS  --\n\n");
    for (int i = 0; i < t; i++) {
        printf("- Pedido %d\n", i+1);
        for (int aux = 0; aux < p; aux++) {
            if (pedidos[i].telefonecliente == clientes[aux].telefone) {
                printf("Cliente: %s\n", clientes[aux].nome);
                break;
            }
        }
        for (int aux = 0; aux < pizzs; aux++) {
            if (pedidos[i].codigopizza == pizzas[aux].codigo) {
                printf("Sabor: %s\n", pizzas[aux].sabor);
                break;
            }
        }
        printf("Motoqueiro responsavel pela entrega: %d", pedidos[i].codigomotoqueiro);
        printf("\n\n");
    }
}

int main () {
    cabecalho();
    pessoas clientes[P];
    produtos pizzas[piz];
    vendas pedidos[ped];
    cadastraclientes(clientes, P);
    cadastrapizzas(pizzas, piz);
    cadastrapedidos(pedidos, ped, clientes, P, pizzas, piz);
    system("cls");
    mostraresumo(clientes, pizzas, pedidos, ped, P, piz);
    return 0;
}
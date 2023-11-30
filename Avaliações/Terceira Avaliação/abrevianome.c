#include <stdio.h>
#include <ctype.h>

#define N 50

void concatena (char string1[], const char string2[], int *i1, int i2) {
    string1[*i1] = ' ';
    *i1 += 1;
    string1[*i1] = toupper(string2[i2]);
    *i1 += 1; // Nas linhas acima, ocorrem pequenas modificações na string para melhorar sua aparência: adiciona-se o espaço e previne que primeira letra do sobrenome fique minúscula.
    i2 += 1;
    for (; string2[i2] != '\0'; i2++) {
        string1[*i1] = tolower(string2[i2]);
        *i1 += 1;
    }
    string1[*i1] = '\0';
}

void concatenaabreviacao (char string1[], const char string2[], int *i1, int i2) { // O objetivo dessa função é apenas concatenar as pequenas abreviações. Obs: previne, também, abreviações com letra minúscula.
    string1[*i1] = ' ';
    *i1 += 1;
    string1[*i1] = toupper(string2[i2]);
    *i1 += 1;
    string1[*i1] = '.';
    *i1 += 1;
}

void tiraenter (char string[]) {
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == '\n') {
            string[i] = '\0';
            break;
        }
    }
}

int contaespacos (const char frase[]) {
    int espacos = 0;
    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ') {
            espacos += 1;
        }
    }
    return espacos;
}

void abrevianome (const char nome[], char abreviado[]) {
    int espacostot = contaespacos(nome), espacos = 0, a = 1;
    abreviado[0] = toupper(nome[0]);
    for (int i = 1; nome[i] != ' '; i++) {
        abreviado[a] = tolower(nome[i]);
        a += 1;
    }
    for (int i = 0; nome[i] != '\0'; i++) {
        if (nome[i-1] == ' ') {
            espacos += 1;
            if (espacos == espacostot) {
                concatena(abreviado, nome, &a, i);
            } else {
                concatenaabreviacao(abreviado, nome, &a, i);
            }
        }
    }
}

int main () {
    char nome[N], nabreviado[N];
    printf("Digite seu nome: ");
    fgets(nome, N, stdin);
    fflush(stdin);
    tiraenter(nome);
    abrevianome(nome, nabreviado);
    printf("\nNome abreviado: ");
    puts(nabreviado);
    return 0;
}
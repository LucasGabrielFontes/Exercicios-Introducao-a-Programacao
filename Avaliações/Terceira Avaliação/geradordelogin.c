#include <stdio.h>
#include <ctype.h>

#define N 50

void tiraenter (char string[]) {
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == '\n') {
            string[i] = '\0';
            break;
        }
    }
}

void concatena (char string1[], char string2[], int i1, int i2) {
    for (; string2[i2] != '\0'; i2++) {
        string1[i1] = tolower(string2[i2]);
        i1 += 1;
    }
    string1[i1] = '\0';
}

int contapalavras (const char frase[]) {
    int palavras = 1;
    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ') {
            palavras += 1;
        }
    }
    return palavras;
}

void geralogin (char nome[], char login[]) {
    int nomes, a = 0;
    nomes = contapalavras(nome);
    login[a] = tolower(nome[0]);
    a += 1;
    if (nomes == 2) {
        for (int i = 1; nome[i] != '\0'; i++) {
            if (nome[i-1] == ' ') {
                concatena(login, nome, a, i);
                break;
            }
        }
    } else if (nomes == 3) {
        int espaco = 0;
        for (int i = 1; nome[i] != '\0'; i++) {
            if (nome[i-1] == ' ') {
                espaco += 1;
                if (espaco == 1) {
                    login[a] = tolower(nome[i]);
                    a += 1;
                } else {
                    concatena(login, nome, a, i);
                    break;
                }
            }
        }
    } else {
        int espaco = 0, espacostot = nomes - 1;
        for (int i = 1; nome[i] != '\0'; i++) {
            if (nome[i-1] == ' ') {
                espaco += 1;
                if (espaco == espacostot) {
                    concatena(login, nome, a, i);
                } else if (espaco == 1) {
                    login[a] = tolower(nome[i]);
                    a += 1;
                }
            }
        }
    }
}

int main () {
    char nome[N], login[N];
    printf("Digite seu nome completo: ");
    fgets(nome, N, stdin);
    fflush(stdin);
    tiraenter(nome);
    geralogin(nome, login);
    printf("\nSeu login e: %s", login);
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 50

void crialogin (const char *nome, char *login) {
    int a = 0;
    login[a] = toupper(nome[a]);
    a += 1;
    for (int i = 1; nome[i] != '\0'; i++) {
        if (nome[i-1] == ' ') {
            login[a] = toupper(nome[i]);
            a += 1;
        }
    }
    login[a] = tolower(nome[0]);
    a += 1;
    for (int i = 1; nome[i] != '\0'; i++) {
        if (nome[i-1] == ' ') {
            login[a] = tolower(nome[i]);
            a += 1;
        }
    }
    login[a] = '\0';
}

int main () {
    char nome[N], login[N];
    fgets(nome, N, stdin);
    fflush(stdin);
    crialogin(nome, login);
    puts(login);
    return 0;
}
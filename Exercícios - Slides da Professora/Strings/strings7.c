#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

#define N 50

void contacaracvalidos (char *palavra, int *t) {
    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == '\n') {
            palavra[i] = '\0';
            break;
        } else {
            *t += 1;
        }
    }
}

void mudacaracteres (char *palavra, int t) {
    int aleatorio;
    srand((unsigned)time(NULL));
    for (int i = 0; i < t/2; i++) {
        aleatorio = rand() % (t + 1);
        palavra[aleatorio] = toupper(palavra[aleatorio]);
    }

}

int main () {
    char palavra[N];
    int t = 0;
    fgets(palavra, N, stdin);
    fflush(stdin);
    contacaracvalidos(palavra, &t);
    mudacaracteres(palavra, t);
    puts(palavra);
    return 0; 
}
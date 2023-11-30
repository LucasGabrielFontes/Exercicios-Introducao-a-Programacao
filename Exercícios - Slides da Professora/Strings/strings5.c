#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

#define N 25

int epalidromo(const char *palavra){
    char contrario[N];
    int i, ii;
    for (i = 0; palavra[i] != '\0'; i++);
    ii = i - 1;
    for (int cont = 0; cont < i; cont++) {
        contrario[cont] = palavra[ii];
        ii--;
    }
    contrario[i] = '\0';
    puts(contrario);
    for (int cont = 0; cont < i; cont++) {
        if (tolower(palavra[cont]) != tolower(contrario[cont])) {
            return 0;
        }
    }
    return 1;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    char palavra[N];
    fgets(palavra, N, stdin);
    fflush(stdin);
    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == ' ') {
            palavra[i] = '\0';
        }
    }
    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == '\n') {
            palavra[i] = '\0';
        }
    }
    if(epalidromo(palavra)){
        printf("A palavra %s e palidromo", palavra);
    } else {
        printf("A palavra %s nao e palidromo", palavra);
    }
    return 0;
}
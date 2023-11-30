#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 50

void apagaletrafrase (char *frase, char letra) {
    for (int i = 0; frase[i] != '\0'; i++) {
        if (tolower(frase[i]) == tolower(letra)) {
            frase[i] = ' ';
        }
    }
}

int main() {
    char frase[N], letra;
    fgets(frase, N, stdin);
    fflush(stdin);
    letra = getchar();
    apagaletrafrase(frase, letra);
    puts(frase);
    return 0;
}
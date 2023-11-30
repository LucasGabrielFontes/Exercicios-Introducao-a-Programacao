#include <stdio.h>

void desenhar (char carac, int linhas);

int main () {
    char carac;
    int linhas;
    scanf("%c %d", &carac, &linhas);
    desenhar (carac, linhas);
    return 0;
}

void desenhar (char carac, int linhas) {
    int i = 1, a;
    for (; i <= linhas; i++) {
        for (a = 1; a <= 9; a++) {
            printf("%c", carac);
        }
        printf("%c\n", carac);
    }
}
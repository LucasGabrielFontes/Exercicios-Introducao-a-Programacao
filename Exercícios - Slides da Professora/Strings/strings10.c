#include <stdio.h>
#include <string.h>

#define N 50

void tiraenter (char *string) {
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == '\n') {
            string[i] = '\0';
            break;
        }
    }
}

void concatena (char *string1, char *string2, char *concatenada) {
    int a = 0;
    for (int i = 0; string1[i] != '\0'; i++) {
        if (string1[i] == '\0') {
            break;
        }
        concatenada[a] = string1[i];
        a += 1;
    }
    for (int i = 0; string2[i] != '\0'; i++) {
        if (string2[i] == '\0') {
            break;
        }
        concatenada[a] = string2[i];
        a += 1;
    }
    concatenada[a] = '\0';
}

int main() {
    char string1[N], string2[N], concatenada[2*N];
    fgets(string1, N, stdin);
    fflush(stdin);
    fgets(string2, N, stdin);
    tiraenter(string1);
    tiraenter(string2);
    concatena(string1, string2, concatenada);
    puts(concatenada);
    return 0;
}
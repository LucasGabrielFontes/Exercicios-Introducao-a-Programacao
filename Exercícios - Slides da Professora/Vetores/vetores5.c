#include <stdio.h>

void preenchevetorx (int x[], int t){
    for (int i = 0; i < t; i++) {
        if (i%2 == 0) {
            x[i] = 0;
        } else {
            x[i] = 1;
        }
    }
}

void mostravetor (int x[], int t) {
    for (int i = 0; i < t; i++) {
        printf("%d\n", x[i]);
    }
}

int main() {
    int x[10];
    preenchevetorx(x, 10);
    mostravetor(x, 10);
    return 0;
}
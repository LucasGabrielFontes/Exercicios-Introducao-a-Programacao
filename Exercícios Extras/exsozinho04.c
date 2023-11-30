#include <stdio.h>

int main (void) {
    for (int contador = 100; contador <= 300; contador++) {
        if (contador%2 != 0) {
            printf("%d e impar.\n", contador);
        }
    }
    return 0;
}

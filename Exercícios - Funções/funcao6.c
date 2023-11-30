#include <stdio.h>

int inverter (int a, int b);

int main (void) {
    int a, b;
    scanf("%d %d", &a, &b);
    if (inverter(a, b)) {
        printf("%d e o contrario de %d.", a, b);
    } else {
        printf("%d nao e o contrario de %d.", a, b);
    }
    return 0;
}

int inverter (int a, int b) {
    int invertido = 0;
    while (a > 0) {
        invertido =  (invertido * 10) + (a % 10);
        a = a/10;
    }
    if (invertido == b) {
        return 1;
    } else {
        return 0;
    }
}
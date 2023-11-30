#include <stdio.h>

int TesteMaior (int x, int y, int z);

int main () {
    int a, b, c, maior;
    scanf("%d %d %d", &a, &b, &c);
    maior = TesteMaior(a, b, c);
    printf("Maior: %d", maior);
    return 0;
}

int TesteMaior (int x, int y, int z) {
    if ((x > y) && (x > z)) {
        return x;
    } else if ((y > x) && (y > z)) {
         return y;
    } else {
        return z;
    }
}
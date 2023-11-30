#include <stdio.h>

int QualAlgDasCen(int a);

int main () {
    int a;
    scanf("%d", &a);
    if (a != 0) {
        if (a < 100) {
            printf("%d nao tem algarismo das centenas, pois e um numero menor que 100.\n", a);
        } else {
            printf("Algarismo das centenas de %d: %d.\n", a, QualAlgDasCen(a));
        }
    }
    while (a != 0) {
        scanf("%d", &a);
        if ((a < 100) && (a > 0)) {
            printf("%d nao tem algarismo das centenas, pois e um numero menor que 100.\n", a);
        } else if (a >= 100) {
            printf("Algarismo das centenas de %d: %d.\n", a, QualAlgDasCen(a));
        }
    }
    return 0;
}

int QualAlgDasCen(int a) {
        return(a/100)%10;
}
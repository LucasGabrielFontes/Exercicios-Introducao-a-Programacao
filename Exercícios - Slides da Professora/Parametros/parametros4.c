#include <stdio.h>

void HMinSeg(int *inicial, int *h, int *min, int *seg);

int main () {
    int seg, horas, minutos, segundos;
    scanf("%d", &seg);
    HMinSeg(&seg, &horas, &minutos, &segundos);
    printf("%dh %dmin %dseg", horas, minutos, segundos);
    return 0;
}

void HMinSeg(int *inicial, int *h, int *min, int *seg) {
    int aux;
    *h = *inicial/3600;
    aux = *inicial%3600;
    *min = aux/60;
    aux = aux%60;
    *seg = aux;
}
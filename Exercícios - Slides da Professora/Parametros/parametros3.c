#include <stdio.h>

int MedidasRetangulo (float base, float altura, float *area, float *perimetro);

int main () {
    float b, h, A, P;
    scanf("%f %f", &b, &h);
    if (MedidasRetangulo(b, h, &A, &P)){
        printf("E um quadrado.\nArea: %.2f\nPerimetro: %.2f", A, P);
    } else {
        printf("Nao e um quadrado.\nArea: %.2f\nPerimetro: %.2f", A, P);
    }
    return 0;
}

int MedidasRetangulo (float base, float altura, float *area, float *perimetro) {
    *area = base*altura;
    *perimetro = 2*(base + altura);
    if (base == altura) {
        return 1;
    } else {
        return 0;
    }
}
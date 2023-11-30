#include <stdio.h>

void levetores (float A[], float B[], int t) {
    for (int i = 0; i < t; i++) {
        printf("A[%d]: ", i);
        scanf("%f", &A[i]);
        printf("B[%d]: ", i);
        scanf("%f", &B[i]);
    }
}

void somavetores (float A[], float B[], float C[], int t) {
    for (int i = 0; i < t; i++) {
        C[i] = A[i] + B[i];
    }
}

void mostravetorc (float C[], int t) {
    for (int i = 0; i < t; i++) {
        printf("%.2f\n", C[i]);
    }
}

int main () {
    float A[10], B[10], C[10];
    levetores(A, B, 10);
    somavetores(A, B, C, 10);
    mostravetorc(C, 10);
    return 0;
}
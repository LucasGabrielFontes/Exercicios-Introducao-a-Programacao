#include <stdio.h>

void levetor(int A[], int t) {
    for (int i = 0; i < t; i++) {
        scanf("%d", &A[i]);
    }
}

void invertevetor (int A[], int B[], int t) {
    int ii = t - 1;
    for (int i = 0; i < t; i++) {
        B[ii] = A[i];
        ii--;
    }
}

void mostravetorinvertido (int B[], int t) {
    for (int i = 0; i < t; i++) {
        printf("%d ", B[i]);
    }
}

int main () {
    int A[20], B[20];
    levetor(A, 20);
    invertevetor(A, B, 20);
    mostravetorinvertido(B, 20);
    return 0;
}
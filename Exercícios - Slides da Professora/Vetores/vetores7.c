#include <stdio.h>

void levetores (int A[], int B[], int t) {
    for (int i = 0; i < t; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }
}

void formavetorc (int A[], int B[], int C[], int t) {
    for (int i = 0; i < t; i++) {
        if (i % 2 == 0) {
            C[i] = A[i];
        } else {
            C[i] = B[i];
        }
    }
}

void mostravetorc (int C[], int t) {
    for (int i = 0; i < t; i++) {
        printf("%d\n", C[i]);
    }
}

int main (){
    int A[10], B[10], C[10];
    levetores(A, B, 10);
    formavetorc(A, B, C, 10);
    mostravetorc(C, 10);
    return 0;
}
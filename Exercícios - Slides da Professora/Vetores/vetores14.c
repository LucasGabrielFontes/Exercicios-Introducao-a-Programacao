#include <stdio.h>
#include <stdlib.h>

void levetora (int A[], int ta) {
    srand((unsigned)time(NULL));
    for (int i = 0; i < ta; i++) {
        A[i] = 0 + rand()%10;
    }
}

void formavetorb (int A[], int B[], int t) {
    for (int i = 0; i < t; i++) {
        B[i] = fatorial(A[i]);
    }
}

int fatorial (int x) {
    int fatorial = 1;
    if ((x == 0) || (x == 1)) {
        return 1;
    } else {
        for (int aux = 1; aux <= x; aux++) {
            fatorial *= aux;    
        }
        return fatorial;
    }
}

void mostravetores (int A[], int B[], int t) {
    for (int i = 0; i < t; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    for (int i = 0; i < t; i++) {
        printf("%d ", B[i]);
    }
}

int main () {
    int A[10], B[10];
    levetora(A, 10);
    formavetorb(A, B, 10);
    mostravetores(A, B, 10);
    return 0;
}
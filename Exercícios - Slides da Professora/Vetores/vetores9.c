#include <stdio.h>

void levetor (int A[], int t) {
    for (int i = 0; i < t; i++) {
        scanf("%d", &A[i]);
    }
}

void retornamaiorvalor (int A[], int t, int *pos, int *maiorval) {
    int i = 0;
    *maiorval = A[i];
    *pos = i;
    for (i = 1; i < t; i++) {
        if (A[i] > *maiorval) {
            *maiorval = A[i];
            *pos = i;
        }
    }
}

int main () {
    int A[20], pos, maiorval;
    levetor(A, 20);
    retornamaiorvalor(A, 20, &pos, &maiorval);
    printf("Maior valor: %d\nPosicao: %d", maiorval, pos + 1);
    return 0;
}
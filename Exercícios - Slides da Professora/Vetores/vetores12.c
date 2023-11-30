#include <stdio.h>
#include <stdlib.h>

void levetores (int A[], int B[], int ta, int tb) {
    srand((unsigned)(NULL));
    for (int i = 0; i < ta; i++) {
        A[i] = 1 + rand()%10;
    }
    for (int i = 0; i < tb; i++) {
        B[i] = 1 + rand()%10;
    }
}

void formaAB (int A[], int B[], int AB[], int ta, int tc) {
    int ii = 0;
    for (int i = 0; i < ta; i++) {
        AB[i] = A[i];
    }
    for (int i = ta; i < tc; i++) {
        AB[i] = B[ii];
        ii++;
    }
    
}

void mostravetores (int A[], int B[], int AB[], int ta, int tb, int tab){
    for (int i = 0; i < ta; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    for (int i = 0; i < tb; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");
    for (int i = 0; i < tab; i++) {
        printf("%d ", AB[i]);
    }
}

int main () {
    int ta, tb;
    scanf("%d %d", &ta, &tb);
    int A[ta], B[tb], AB[ta + tb];
    levetores(A, B, ta, tb);
    formaAB(A, B, AB, ta, ta + tb);
    mostravetores(A, B, AB, ta, tb, ta + tb);
    return 0;
}
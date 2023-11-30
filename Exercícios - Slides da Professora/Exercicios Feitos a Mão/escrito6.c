#include <stdio.h>

int main (void) {
    int n0, n1, n2, n;
    printf("Digite um numero: ");
    scanf("%d", &n0);
    printf("\nDigite um numero maior que %d: ", n0);
    scanf("%d", &n1);
    printf("\nDigite um numero maior que %d: ", n1);
    scanf("%d", &n2);
    printf("\nDigite qualquer numero: ");
    scanf("%d", &n);
    if (n > n2) {
        printf("\n%d, %d, %d, %d", n, n2, n1, n0);
    } else if (n < n0) {
        printf("\n%d, %d, %d, %d", n2, n1, n0, n);
    } else if (n > n1) {
        printf("\n%d, %d, %d, %d", n2, n, n1, n0);
    } else {
        printf("\n%d, %d, %d, %d", n2, n1, n, n0);
    }
    return 0;
}

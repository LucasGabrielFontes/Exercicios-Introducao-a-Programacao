#include <stdio.h>

void MostraTabela(int a);

int main () {
    int a;
    scanf("%d", &a);
    while ((a < 1) || (a > 9)) {
        scanf("%d", &a);
    }
    MostraTabela(a);
    return 0;
}

void MostraTabela (int a) {
    int termo = 1, termoauxiliar, termocontador, quociente;
    for (; termo <= a; termo++) {
        termocontador = 0;
        printf("%d ", termo);
        termocontador = termocontador + 1;
        if (termocontador != termo) {
            termoauxiliar = termo;
            quociente = 2;
            for (; termocontador < termo; termocontador++) {
                termoauxiliar = termo*quociente;
                printf("%d ", termoauxiliar);
                quociente = quociente + 1;
            }
        }
        printf("\n");
    }
}
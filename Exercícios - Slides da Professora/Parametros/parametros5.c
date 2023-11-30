#include <stdio.h>
#include <math.h>

void Expressao (int n, float *somatorio);

int main () {
    int n;
    float soma = 0;
    scanf("%d", &n);
    Expressao(n, &soma);
    printf("Soma: %.2f", soma);
    return 0;
}

void Expressao (int n, float *somatorio) {
    int teste = (pow(n, 2) + 1), sominha = 0, denominador = 4;
    for (int i = 2; i <= teste; i += sominha) {
        *somatorio = *somatorio + ((float)i/(float)denominador);
        if (i == 2) {
            sominha += 3;
        } else {
            sominha += 2;
        }
        denominador += 1;
    }
}
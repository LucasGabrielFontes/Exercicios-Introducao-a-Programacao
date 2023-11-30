#include <stdio.h>
#include <math.h>

double CalculaDistancia (double x0, double y0, double x1, double y1);

int main () {
    double x0, y0, x1, y1, d;
    printf("Digite a coordenada x do ponto A: \n");
    scanf("%lf", &x0);
    printf("Digite a coordenada y do ponto A: \n");
    scanf("%lf", &y0);
    printf("Digite a coordenada x do ponto B: \n");
    scanf("%lf", &x1);
    printf("Difite a coordenada y do ponto B: \n");
    scanf("%lf", &y1);
    d = CalculaDistancia(x0, y0, x1, y1);
    printf("Distancia entre A = (%.0lf, %.0lf) e B = (%.0lf, %.0lf): %.2lf", x0, y0, x1, y1, d);
    return 0;
}

double CalculaDistancia (double x0, double y0, double x1, double y1) {
    return (sqrt(pow(x1 - x0, 2) + pow(y1 - y0, 2)));
}
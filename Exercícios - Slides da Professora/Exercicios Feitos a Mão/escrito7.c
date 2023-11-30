#include <stdio.h>

int main (void) {
    int ano = 2007;
    float sal = 1000.0*1.015, porc = 0.03;
    for (ano; ano <= 2023; ano++) {
        sal = sal*(1.0+porc);
        porc = porc*2.0;
    }
    printf("Salario atual: %.2f", sal);
    return 0;
}

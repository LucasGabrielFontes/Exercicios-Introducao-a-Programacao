#include <stdio.h>

int main (void) {
    float sal, mediasal, mediafilho, maiorsal, somasal = 0;
    int filhos, somafilhos = 0, salate150 = 0;
    for (int contador = 1; contador <=5; contador++) {
        printf("\nDigite seu salario: ");
        scanf("%f", &sal);
        if (contador == 1) {
            maiorsal = sal;
        } else {
            if (sal > maiorsal) {
                maiorsal = sal;
            }
        }
        if (sal <= 150) {
            salate150 = salate150 + 1; 
        }
        somasal = somasal + sal;
        printf("Digite quantos fihos voce tem: ");
        scanf("%d", &filhos);
        somafilhos = somafilhos + filhos;
    }
    mediasal = (float)somasal/5;
    mediafilho = (float)somafilhos/5;
    printf("\nMedia dos salarios das pessoas: %.2f.\nMedia dos filhos: %.2f.\nMaior salario: %.2f.\n%d das 5 pessoas tem salarios ate 150 reais.", mediasal, mediafilho, maiorsal, salate150);
    return 0;
}

#include <stdio.h>

int main (void) {
    float porc = 0, aux;
    int sexo, olhos, cabelos, idade, hab, contador, maiorid, mulheres = 0;
    printf("Informe a quantidade de habitantes: ");
    scanf("%d", &hab);
    for (contador = 1; contador <= hab; contador++) {
        printf("\nQual o sexo do habitante %d?\n(1) Masculino\n(2) Feminino\n", contador);
        scanf("%d", &sexo);
        printf("\nQual a cor dos olhos do habitante %d?\n(1) Azuis\n(2) Verdes\n(3) Castanhos\n", contador);
        scanf("%d", &olhos);
        printf("\nQual a cor dos cabelos do habitante %d?\n(1) Loiros\n(2) Castanhos\n(3) Pretos\n", contador);
        scanf("%d", &cabelos);
        printf("\nQual a idade do habitante %d? ", contador);
        scanf("%d", &idade);
        if (contador == 1) {
            maiorid = idade;
        } else if (idade > maiorid) {
            maiorid = idade;
        }
        if (sexo == 2) {
            mulheres = mulheres + 1;
        }
        if (sexo == 2 && idade >= 18 && idade <= 35 && olhos == 2 && cabelos == 1) {
            porc = porc + 1;
        }
    }
    aux = (float)100/mulheres;
    porc = porc*aux;
    printf("\nMaior idade entre todos os habitantes: %d", maiorid);
    printf("\nPorcentagem de mulheres entre 18 e 35 anos com olhos verdes e cabelos loiros: %.2f porcento.", porc);
    return 0;
}
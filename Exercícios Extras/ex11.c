#include <stdio.h>

int main (void) {
    int cargo;
    float sal, nsal;
    printf("Ola, meu querido! Digite o código do seu cargo na empresa FILL: ");
    scanf("%d", &cargo);
    printf("\nOtimo. Agora, por favor, nos informe o valor do seu salário total atualmente: ");
    scanf("%f", &sal);
    switch (cargo) {
        case 1:
            nsal = sal * 1.5;
            printf("\nOlha que excelente noticia, meu escriturario! Seu salario teve um aumento de 50 por cento. Passando de R$%.2f para R$%.2f. UAU!", sal, nsal);
        break;

        case 2:
            nsal = sal * 1.35;
            printf("\nOlha que otima noticia, meu secretario! Seu salario teve um aumento de 35 por cento. Passando de R$%.2f para R$%.2f. Uau!", sal, nsal);
        break;

        case 3:
            nsal = sal * 1.2;
            printf("\nOlha que boa noticia, meu caixa! Seu salario teve um aumento de 20 por cento. Passando de R$%.2f para R$%.2f. Uau!", sal, nsal);
        break;
            
        case 4:
            nsal = sal * 1.1;
            printf("\nOlha essa noticia, meu gerente! Seu salario teve um aumento de 10 por cento. Passando de R$%.2f para R$%.2f. Ja ganhava bem, agora entao...", sal, nsal);
        break;

        case 5:
            printf("\nFala, meu diretor! Seu salario nao teve um aumento dessa vez, visto que seu valor ja esta dentro dos nossos padroes, nao e mesmo? Mas, mesmo assim, quem sabe no proximo semestre nos conseguimos aumentar essa merrequinha, hein? Salario atual: %.2f", sal);
        break;
    }
    return 0;
}

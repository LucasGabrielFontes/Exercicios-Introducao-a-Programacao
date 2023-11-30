#include <stdio.h>

int main (void) {
    int maiorde18 = 0, idade;
    for (int contador = 10; contador >= 1; contador--) {
        printf("Digite a idade: ");
        scanf("%d", &idade);
        if (idade > 18) {
            maiorde18 = maiorde18 + 1;
        }
    }
    printf("\nDe todas as idades informadas, %d eram maiores que 18.", maiorde18);
    return 0;
}

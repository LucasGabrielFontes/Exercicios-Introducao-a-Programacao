#include <stdio.h>

float CalculaMetros(int pes, int polegadas);

int main () {
    int pes, polegadas;
    float metros;
    scanf("%d %d", &pes, &polegadas);
    metros = CalculaMetros(pes, polegadas);
    printf("%d pes e %d polegadas equivalem a %.2f metros.", pes, polegadas, metros);
    return 0;
}

float CalculaMetros (int pes, int polegadas) {
    return ((pes*30.48)/100)+((polegadas*2.54)/100);
}
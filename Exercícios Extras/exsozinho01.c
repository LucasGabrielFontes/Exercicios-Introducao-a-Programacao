#include <stdio.h>

int main (void) {
    int fator = 1, multiplicacao = 1, num;
    printf("Voce quer a tabuada de qual numero, rapaz? \n");
    scanf("%d", &num);
    while (fator <= 10) {
        multiplicacao = (num*fator);
        printf("%d x %d = %d\n", num, fator, multiplicacao);
        fator = fator + 1;
    }
    return 0;
}

#include <stdio.h>

float CalculaMedia (float nota1, float nota2, float nota3, char tipomedia);

int main () {
    float nota1, nota2, nota3, media;
    char tipomedia;
    scanf("%f %f %f %c", &nota1, &nota2, &nota3, &tipomedia);
    media = CalculaMedia(nota1, nota2, nota3, tipomedia);
    if (tipomedia == 'A') {
        printf("Media aritmetica entre %.2f, %.2f e %.2f: %.2f.\n", nota1, nota2, nota3, media);
    } else {
        printf("Media ponderada entre %.2f, %.2f e %.2f, com respectivos pesos de 5, 3, 2: %.2f.", nota1, nota2, nota3, media);
    }
    return 0;
}

float CalculaMedia (float nota1, float nota2, float nota3, char tipomedia) {
    if (tipomedia == 'A') {
        return (nota1 + nota2 + nota3)/3.0;
    } else {
        return ((nota1*5) + (nota2*3) + (nota3*2))/10.0;
    }
}
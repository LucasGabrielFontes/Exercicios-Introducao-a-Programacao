#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
	int n = 0;
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	if ((n%2) != 0){ 
		printf("%d e impar.", n);
	} else {
		printf("%d e par.", n);
	}
	return 0;
}

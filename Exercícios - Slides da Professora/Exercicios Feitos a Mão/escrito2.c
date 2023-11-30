#include <stdio.h>

int main (void) {
    int F = 50;
    float C;
    for (; F<=65; F++) {
        C = (float)(F-32)/1.8;
        printf("%dF = %.2fC\n", F, C);
    }
    return 0;
}

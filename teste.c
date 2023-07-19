#include <stdio.h>
#include <math.h>

int main() {
    double x, y, diagonal;

    printf("Digite o comprimento do lado x: ");
    scanf("%lf", &x);

    printf("Digite o comprimento do lado y: ");
    scanf("%lf", &y);

    // Cálculo da diagonal usando a fórmula de Pitágoras com a função pow
    diagonal = sqrt(pow(x, 2) + pow(y, 2));

    printf("O comprimento da diagonal é: %.2lf\n", diagonal);

    return 0;
}

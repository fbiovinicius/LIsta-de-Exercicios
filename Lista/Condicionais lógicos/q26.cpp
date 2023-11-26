#include <stdio.h>
#include <math.h>

int main() {
    int numerolados;
    float medidalado;

    printf("Digite o numero de lados do poligono: ");
    scanf("%d", &numerolados);

    printf("Digite a medida do lado (em cm): ");
    scanf("%f", &medidalado);

    if (numerolados == 3) {

        float areatriangulo = (sqrt(3) / 4) * pow(medidalado, 2);
        printf("TRIANGULO\nArea: %.2f cm²\n", areatriangulo);
    } else if (numerolados == 4) {
        float areaquadrado = pow(medidalado, 2);
        printf("QUADRADO\nArea: %.2f cm²\n", areaquadrado);
    } else if (numerolados == 5) {
        printf("PENTAGONO\n");
    } else {
        printf("Invalido");
    }

    return 0;
}


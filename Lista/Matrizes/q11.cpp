#include <stdio.h>

int main() {
    int matriz[3][3];
    int matriz2[3][3];
    int matrizmultiplicacao[3][3];
    int i, j, k;

    printf("Digite os valores da matriz:\n\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Digite os valores da segunda matriz:\n\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d] = ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matrizmultiplicacao[i][j] = 0;
            for (k = 0; k < 3; k++) {
                matrizmultiplicacao[i][j] += matriz[i][k] * matriz2[k][j];
            }
        }
    }

    printf("\nA multiplicacao entre as matrizes e:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matrizmultiplicacao[i][j]);
        }
        printf("\n");
    }

    return 0;
}


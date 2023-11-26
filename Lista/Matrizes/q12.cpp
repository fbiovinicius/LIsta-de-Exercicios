#include <stdio.h>

int main() {
    int matriz[3][3];
    int matriz2[3][3];
    int matrizsoma[3][3];
    int i, j;

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
            matrizsoma[i][j] = 0;
                matrizsoma[i][j] = matriz[i][j] + matriz2[i][j];
        }
    }

    printf("\nA Soma entre as matrizes e:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matrizsoma[i][j]);
        }
        printf("\n");
    }

    return 0;
}


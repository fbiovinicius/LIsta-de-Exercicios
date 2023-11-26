#include <stdio.h>

int main() {
    int MAT[50][50];
    int diagonalprincipal[50];
    int i, j;

    printf("Digite os valores da matriz:\n\n");

    for (i = 0; i < 50; i++) {
        for (j = 0; j < 50; j++) {
            printf("Elemento [%d][%d] = ", i, j);
            scanf("%d", &MAT[i][j]);
        }
    }

    // Preenche o vetor com os elementos da diagonal principal
    for (i = 0; i < 50; i++) {
        diagonalprincipal[i] = MAT[i][i];
    }

    // Imprime o vetor com os elementos da diagonal principal
    printf("\n Elementos da Diagonal Principal :\n");
    for (i = 0; i < 50; i++) {
        printf("%d ", diagonalprincipal[i]);
    }

    return 0;
}


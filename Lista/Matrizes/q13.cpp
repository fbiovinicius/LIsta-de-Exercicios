#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j;
    int somaquadradosprimeiracoluna = 0;
    int somaterceiralinha = 0;
    int somadiagonalprincipal = 0;
    int somaelementosindiceparsegundalinha = 0;

    printf("Digite os valores da matriz:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 4; i++) {
        somaquadradosprimeiracoluna += matriz[i][0] * matriz[i][0];
    }
    printf("\nSoma dos quadrados da primeira coluna: %d\n", somaquadradosprimeiracoluna);

    for (j = 0; j < 4; j++) {
        somaterceiralinha += matriz[2][j];
    }
    printf("Soma da terceira linha: %d\n", somaterceiralinha);

    for (i = 0; i < 4; i++) {
        somadiagonalprincipal += matriz[i][i];
    }
    printf("Soma da diagonal principal: %d\n", somadiagonalprincipal);

    for (j = 0; j < 4; j += 2) {
        somaelementosindiceparsegundalinha += matriz[1][j];
    }
    printf("Soma dos elementos de indice par da segunda linha: %d\n", somaelementosindiceparsegundalinha);

    return 0;
}


#include <stdio.h>

int main() {
    int MAT[10][15];
    int somalinha[10] = {0}; 
    int somacoluna[15] = {0}; 
    int i, j;

    printf("Digite os valores da matriz:\n\n");

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 15; j++) {
            printf("Elemento [%d][%d] = ", i, j);
            scanf("%d", &MAT[i][j]);
            
            somalinha[i] += MAT[i][j];
            
            somacoluna[j] += MAT[i][j];
        }
    }

    printf("\nA matriz digitada foi:\n");

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 15; j++) {
            printf("%d\t", MAT[i][j]);
        }
        printf(" | Soma da Linha %d: %d (%s)\n", i, somalinha[i], (somalinha[i] % 2 == 0) ? "Par" : "Impar");
    }

    printf("\nSoma das Colunas:\n");
    for (j = 0; j < 15; j++) {
        printf("Coluna %d: %d (%s)\t", j, somacoluna[j], (somacoluna[j] % 2 == 0) ? "Par" : "Impar");
    }

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

void ordenaVetor(int x[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (x[j] > x[j + 1]) {
                int temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
}

int main() {
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%i", &vetor[i]);
    }

    ordenaVetor(vetor, tamanho);

    printf("Numeros impares em ordem decrescente:\n");
    for (int i = tamanho - 1; i >= 0; i--) {
        if (vetor[i] % 2 != 0) {
            printf("%d\n", vetor[i]);
        }
    }

    printf("Numeros pares em ordem crescente:\n");
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 == 0) {
            printf("%d\n", vetor[i]);
        }
    }

    return 0;
}


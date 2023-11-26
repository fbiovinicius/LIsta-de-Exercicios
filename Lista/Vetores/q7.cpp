#include <stdio.h>
#include <stdlib.h>

int saoIguais(int vetor1[], int vetor2[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor1[i] != vetor2[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int vetor1[5];
    int vetor2[5];
    int i = 0;

    printf("Digite os numeros do primeiro vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%i", &vetor1[i]);
    }

    printf("Digite os numeros do segundo vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%i", &vetor2[i]);
    }

    if (saoIguais(vetor1, vetor2, 5)) {
        printf("Os vetores sao iguais.\n");
    } else {
        printf("Os vetores sao diferentes.\n");
    }

    return 0;
}


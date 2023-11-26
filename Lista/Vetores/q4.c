#include <stdio.h>
#include <string.h>

int main() {
    char Nome[100], C[10][100];
    int Verdadeiro = 0;

    printf("Digite o nome de uma pessoa: ");
    scanf("%99s", Nome);

    for (int i = 0; i < 10; i++) {
        printf("Insira o nome da pessoa %d: ", i + 1);
        scanf("%99s", C[i]);
    }

    for (int j = 0; j < 10; j++) {
        if (strcmp(C[j], Nome) == 0) {
            Verdadeiro = 1;
            break;
        }
    }

    if (Verdadeiro) {
        printf("ACHEI o nome %s no vetor\n", Nome);
    } else {
        printf("NÃO ACHEI o nome %s no vetor\n", Nome);
    }

    return 0;
}


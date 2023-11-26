#include <stdio.h>

int main() {
    int numero, soma = 0, contador = 0;
    float media;

    printf("Digite um numero (ou 0 para encerrar): ");
    scanf("%d", &numero);

    while (numero != 0) {
        if (numero % 2 == 0) {
            soma += numero;
            contador++;
        }

        printf("Digite um numero (ou 0 para encerrar): ");
        scanf("%d", &numero);
    }

    if (contador > 0) {
        media = (float)soma / contador;
        printf("A media dos numeros pares digitados e: %.2f\n", media);
    } else {
        printf("Nenhum numero par foi digitado.\n");
    }

    return 0;
}


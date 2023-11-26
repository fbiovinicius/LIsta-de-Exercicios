#include <stdio.h>

int main() {
    int numero, soma = 0, contador = 0;
    float media;

    printf("Digite um numero (ou um valor negativo para encerrar): ");
    scanf("%d", &numero);

    while (numero >= 0) {
        soma += numero;
        contador++;

        printf("Digite um numero (ou um valor negativo para encerrar): ");
        scanf("%d", &numero);
    }

    if (contador > 0) {
        media = (float)soma / contador;
        printf("A media dos numeros digitados e: %.2f\n", media);
    } else {
        printf("Erro\n");
    }

    return 0;
}


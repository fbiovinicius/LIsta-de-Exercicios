#include <stdio.h>

int contadordedigitos(int numero) {
    if (numero == 0) {
        return 0;
    }
    return 1 + contadordedigitos(numero / 10);
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Nao insire numeros negativos\n");
    } else {
        printf("O numero digitado possui %d digito(s)\n", contadordedigitos(numero));
    }

    return 0;
}


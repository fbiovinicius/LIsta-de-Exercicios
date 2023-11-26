#include <stdio.h>


unsigned long long int fatorial(int n) { // função recursiva para calcular o fatorial
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int numero;

    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("O fatorial de numeros negativos nao existem\n");
    } else {
        unsigned long long int resultado = fatorial(numero);
        printf("O fatorial de %d e: %llu\n", numero, resultado);
    }

    return 0;
}


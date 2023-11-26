#include <stdio.h>

float soma(float a, float b) {
    return a + b;
}

float subtracao(float a, float b) {
    return a - b;
}

float multiplicacao(float a, float b) {
    return a * b;
}

float divisao(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Erro: nao se pode dividir numeros por zero\n");
        return 0.0;
    }
}

int main() {
    float numero1, numero2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    printf("\nResultados:\n");
    printf("%.2f + %.2f = %.2f\n", numero1, numero2, soma(numero1, numero2));
    printf("%.2f - %.2f = %.2f\n", numero1, numero2, subtracao(numero1, numero2));
    printf("%.2f * %.2f = %.2f\n", numero1, numero2, multiplicacao(numero1, numero2));
    printf("%.2f / %.2f = %.2f\n", numero1, numero2, divisao(numero1, numero2));

    return 0;
}


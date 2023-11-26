#include <stdio.h>

int potencia(int a, int b) {
    if (b == 0) {
        return 1;
    } else {
        return a * potencia(a, b - 1);
    }
}

int main() {
    int base, expoente;

    printf("Digite a base (a): ");
    scanf("%d", &base);

    printf("Digite o expoente (b): ");
    scanf("%d", &expoente);

    printf("%d elevado a %d e: %d\n", base, expoente, potencia(base, expoente));

    return 0;
}


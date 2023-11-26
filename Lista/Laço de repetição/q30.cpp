#include <stdio.h>

int main() {
    int a, contadornegativos = 0;

    for (int i = 1; i <= 5; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%d", &a);

        if (a < 0) {
            contadornegativos++;
        }
    }

    printf("Quantidade de numeros negativos: %d\n", contadornegativos);

    return 0;
}


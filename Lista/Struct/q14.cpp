#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct dados {
    char nome[30];
    char endereco[30];
    char telefone[15];
};

int compararDados(const void *a, const void *b) {
    return strcmp(((struct dados *)a)->nome, ((struct dados *)b)->nome);
}

int main() {
    struct dados pessoa[10];

    printf("Digite os dados:\n");

    for (int i = 0; i < 10; i++) {
        printf("Pessoa %d:\n", i + 1);

        printf("Digite o nome: ");
        fgets(pessoa[i].nome, sizeof(pessoa[i].nome), stdin);

        printf("Digite o endereco: ");
        fgets(pessoa[i].endereco, sizeof(pessoa[i].endereco), stdin);

        printf("Digite o numero de telefone: ");
        fgets(pessoa[i].telefone, sizeof(pessoa[i].telefone), stdin);
    }

    qsort(pessoa, 10, sizeof(struct dados), compararDados);

    printf("\nAqui estao as pessoas em ordem alfabetica:\n");
    for (int i = 0; i < 10; i++) {
        printf("%s\n", pessoa[i].nome);
    }

    return 0;
}


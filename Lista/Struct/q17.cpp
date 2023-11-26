#include <stdio.h>
#include <string.h>

struct dados {
    char nome[30];
    int idade;
    char telefone[15];
};

int main() {
    struct dados pessoa;

    printf("Digite os dados:\n");

    printf("Digite o nome: ");
    fgets(pessoa.nome, sizeof(pessoa.nome), stdin);

    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);

    while (getchar() != '\n');

    printf("Digite o numero de telefone: ");
    fgets(pessoa.telefone, sizeof(pessoa.telefone), stdin);

    printf("\nDADOS DA PESSOA:\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Telefone: %s\n", pessoa.telefone);

    return 0;
}


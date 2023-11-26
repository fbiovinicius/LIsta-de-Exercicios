#include <stdio.h>
#include <string.h>

struct aluno {
    char nome[30];
    int matricula;
    char curso[30];
};

int main() {
    struct aluno alunos[5]; 

    printf("Digite os dados dos alunos:\n");

    for (int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);

        printf("Digite o nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);

        printf("Digite o numero de matricula: ");
        scanf("%d", &alunos[i].matricula);

        while (getchar() != '\n');

        printf("Digite o curso: ");
        fgets(alunos[i].curso, sizeof(alunos[i].curso), stdin);
    }

    printf("\nLISTA DE ALUNOS:\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Curso: %s", alunos[i].curso);
        printf("\n");
    }

    return 0;
}


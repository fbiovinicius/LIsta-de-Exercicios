#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct aluno {
    int matricula;
    char nome[30];
    char codigo_disciplina[10];
    float nota1;
    float nota2;
};

int compararAlunos(const void *a, const void *b) {
    return strcmp(((struct aluno *)a)->nome, ((struct aluno *)b)->nome);
}

int main() {
    struct aluno alunos[10];

    printf("Digite os dados dos alunos:\n");

    for (int i = 0; i < 10; i++) {
        printf("Aluno %d:\n", i + 1);

        printf("Digite a matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Digite o nome: ");
        getchar(); 
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);

        printf("Digite o codigo da disciplina: ");
        fgets(alunos[i].codigo_disciplina, sizeof(alunos[i].codigo_disciplina), stdin);

        printf("Digite a nota1: ");
        scanf("%f", &alunos[i].nota1);

        printf("Digite a nota2: ");
        scanf("%f", &alunos[i].nota2);
    }

    for (int i = 0; i < 10; i++) {
        alunos[i].nota1 *= 1.0; 
        alunos[i].nota2 *= 2.0; 
    }

    qsort(alunos, 10, sizeof(struct aluno), compararAlunos);

    printf("\nLista dos Alunos:\n");
    for (int i = 0; i < 10; i++) {
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Nome: %s", alunos[i].nome);
        printf("Codigo da Disciplina: %s", alunos[i].codigo_disciplina);
        printf("Nota1: %.2f\n", alunos[i].nota1);
        printf("Nota2: %.2f\n", alunos[i].nota2);
        printf("Media Ponderada: %.2f\n", (alunos[i].nota1 + alunos[i].nota2) / 3.0); 
        printf("\n");
    }

    return 0;
}


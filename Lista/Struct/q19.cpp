#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct aluno {
    int matricula;
    char nome[30];
    float nota1;
    float nota2;
    float nota3; 
};

int compararAlunos(const void *a, const void *b) {
    return strcmp(((struct aluno *)a)->nome, ((struct aluno *)b)->nome);
}

int main() {
    struct aluno alunos[5];

    printf("Digite os dados dos 5 alunos:\n");

    for (int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);

        printf("Digite a matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Digite o nome: ");
        getchar(); 
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);

        printf("Digite a nota1: ");
        scanf("%f", &alunos[i].nota1);

        printf("Digite a nota2: ");
        scanf("%f", &alunos[i].nota2);

        printf("Digite a nota3: ");
        scanf("%f", &alunos[i].nota3);
    }

    float maiorNota1 = alunos[0].nota1;
    int indiceMaiorNota1 = 0;
    float maiorMedia = (alunos[0].nota1 + alunos[0].nota2 + alunos[0].nota3) / 3.0;
    int indiceMaiorMedia = 0;
    float menorMedia = (alunos[0].nota1 + alunos[0].nota2 + alunos[0].nota3) / 3.0;
    int indiceMenorMedia = 0;

    for (int i = 1; i < 5; i++) {

        if (alunos[i].nota1 > maiorNota1) {
            maiorNota1 = alunos[i].nota1;
            indiceMaiorNota1 = i;
        }

       
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3.0;
        if (media > maiorMedia) {
            maiorMedia = media;
            indiceMaiorMedia = i;
        }

      
        if (media < menorMedia) {
            menorMedia = media;
            indiceMenorMedia = i;
        }
    }

    printf("\nAluno com maior nota na primeira prova:\n");
    printf("Nome: %s", alunos[indiceMaiorNota1].nome);
    printf("Nota1: %.2f\n", alunos[indiceMaiorNota1].nota1);

    printf("\nAluno com maior media geral:\n");
    printf("Nome: %s", alunos[indiceMaiorMedia].nome);
    printf("Média: %.2f\n", maiorMedia);

    printf("\nAluno com menor media geral:\n");
    printf("Nome: %s", alunos[indiceMenorMedia].nome);
    printf("Média: %.2f\n", menorMedia);

    printf("\nLista dos alunos:\n");
    for (int i = 0; i < 5; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3.0;
        printf("Nome: %s", alunos[i].nome);
        printf("Média: %.2f - ", media);
        if (media >= 6.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}


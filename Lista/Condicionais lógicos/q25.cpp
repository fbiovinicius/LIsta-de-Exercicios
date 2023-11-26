#include <stdio.h>

int main() {
    int escolha;
    char nome[30];
    char cpf[11]; 
    int estado;
    int numeroquarto;
    int escolhacheck = 0; 
    int cidade;
    int telefone;

    printf("\n------BEM VINDO AO HOTEL FUCAPI------\n");
    printf("O que deseja fazer?\n");
    printf("1-Fazer Check-in \\ 2-Chamar servico de quarto \\ 3-Fazer pedido\n");
    scanf("%i", &escolha);

    switch (escolha) {
        case 1:
            printf("Informe o seu nome:");
            scanf("%s", nome);  
            printf("Informe seu cpf:");
            scanf("%s", cpf);
            printf("Informe seu telefone:");
            scanf("%d", &telefone);  
            printf("Informe sua cidade:");
            scanf("%d", &cidade);
            printf("Informe seu Estado:");
            scanf("%d", &estado);
            break;

        case 2:
            printf("Informe o seu nome:");
            scanf("%s", nome); 
            printf("Informe o numero do seu quarto:");
            scanf("%d", &numeroquarto);
            break;

        case 3:
            printf("Essas sao as comidas e bebidas:\n");
            printf("1- Agua // 2- Suco de laranja // 3- Arroz // 4- Feijao // 5-Finalizar pedido\n");
            scanf("%d", &escolhacheck);
            
            switch (escolhacheck) {
                case 1:
                    printf("Voce escolheu agua\n");
                    break;
                case 2:
                    printf("Voce escolheu suco de laranja\n");
                    break;
                case 3:
                    printf("Voce escolheu arroz\n");
                    break;
                case 4:
                    printf("Voce escolheu Feijao\n");
                    break;
                case 5:
                    printf("PEDIDO FINALIZADO\n");
                    break;
                default:
                    printf("Opção invalida\n");
            }
            break;

        default:
            printf("Opção invalida\n");
    }

    return 0;
}


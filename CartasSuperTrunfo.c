#include <stdio.h>
#include <stdlib.h> 

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    int opcao;
    do
    {
        
        system("clear");
        

        printf("Menu:\n");
        printf("1. Adicionar Cidade\n");
        printf("2. Listar Cidades\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Opção 1 escolhida\n");
            break;
        case 2:
            printf("Opção 2 escolhida\n");
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
    } while (opcao != 0);
    getchar();
    
    
    return 0;
}

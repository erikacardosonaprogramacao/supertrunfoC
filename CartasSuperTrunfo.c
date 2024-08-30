#include <stdio.h>
#include <stdlib.h> 

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

char estado;
char codigo;
char nome_cidade[50];
long int populacao;
double PIB;
double area;
int num_pontos_turisticos;
double densidade_populacional;
double PIB_per_capita;

double calcular_densidade_populacional(long int populacao, double area) {
    return populacao / area;
}

double calcular_PIB_per_capita(double PIB, long int populacao) {
    return PIB / populacao;
}

void cadastrarCarta() {
    
    printf("Digite o estado: ");
    scanf("%c", estado);

    printf("Digite o código da carta: ");
    scanf("%s", &codigo);

    codigo = (char) estado + codigo;
    
    printf("Código completo: %s\n", codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]%*c", nome_cidade);

    printf("Digite a população: ");
    scanf("%ld", &populacao);

    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    printf("Digite a área (em km²): ");
    scanf("%f", &area);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &num_pontos_turisticos);

    // Calcular densidade populacional e PIB per capita
    densidade_populacional = calcular_densidade_populacional(populacao, area);
    PIB_per_capita = calcular_PIB_per_capita(PIB, populacao);

    printf("Carta cadastrada com sucesso!\n");
    getchar();
}

void exibirCarta() {
    printf("\nInformações da Carta:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", nome_cidade);
    printf("População: %ld\n", populacao);
    printf("PIB: %.2lf\n", PIB);
    printf("Área: %.2lf km²\n", area);
    printf("Pontos Turísticos: %d\n", num_pontos_turisticos);
    printf("Densidade Populacional: %.2lf habitantes/km²\n", densidade_populacional);
    printf("PIB per capita: %.2lf\n", PIB_per_capita);
    getchar();
}


int main()
{
    int opcao;
    do
    {
        printf("\n\nMenu:\n");
        printf("1. Adicionar Carta\n");
        printf("2. Listar Carta\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Opção 1 Cadastrar Carta\n");
            cadastrarCarta();
            break;
        case 2:
            printf("Opção 2 Listar Cartas\n");
            exibirCarta();
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

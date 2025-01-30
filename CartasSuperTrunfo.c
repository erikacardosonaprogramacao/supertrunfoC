#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int codigoCidade;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
   
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Informe o código da cidade:\n");
    scanf(" %d", &codigoCidade);

    printf("Informe o nome da cidade: ");
    scanf(" %s", nome);

    printf("Informe a população da cidade: ");
    scanf("%d", &populacao);

    printf("Informe a área da cidade: ");
    scanf("%f", &area);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Informe o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n--- Dados da Cidade ---\n");
    printf("Código: %d\n", codigoCidade);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);


    return 0;
}

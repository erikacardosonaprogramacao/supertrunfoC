#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //TESTE NOVATO: 

    // Declaração de variáveis para a primeira carta
    char codigo1[20], nome[30];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Entrada de dados para a primeira carta
    printf("Digite o código da primeira cidade: ");
    scanf("%s", codigo1);
    printf("Digite o nome da primeira cidade: ");
    scanf(" %[^\n]", nome);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Declaração de variáveis para a segunda carta
    char codigo2[20], nome2[30];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Entrada de dados para a segunda carta
    printf("\nDigite o código da segunda cidade: ");
    scanf("%s", codigo2);
    printf("Digite o nome da segunda cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição das informações cadastradas
    printf("Carta 1: \n ");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("Carta 2: \n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int populacao, numeroPontosTuristicos;
    float area, pib;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("População: ");
    scanf("%d", &populacao);
    printf("Área: ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numeroPontosTuristicos);

    float densidadePopulacional = populacao / area;
    float pibPerCapite = pib / populacao;
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n\n\t\t\t--------Outputs--------\n\n");
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional);
    printf("PIB Per Capita: %.2f\n", pibPerCapite);
    printf("\n\n");
    printf("\n\n\t\t\t--------FIM--------\n\n");
    return 0;
}

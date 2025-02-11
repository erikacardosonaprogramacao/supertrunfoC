#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nome[50];
    char codigo[4];
    int populacao, area, pib, pontosTuristicos;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Nome da cidade: \n");
    scanf("%49s", nome);

    printf("Código da cidade: \n");
    scanf("%3s", codigo);

    printf("População da cidade: \n");
    scanf("%d", &populacao);

    printf("Área da cidade: \n");
    scanf("%d", &area);

    printf("PIB da cidade: \n");
    scanf("%d", &pib);

    printf("Pontos turísticos da cidade: \n");
    scanf("%d", &pontosTuristicos);

    printf("Nome: %s \n", nome);
    printf("Código: %s \n", codigo);
    printf("População: %d \n", populacao);
    printf("Área: %d \n", area);
    printf("PIB: %d \n", pib);
    printf("Pontos turísticos: %d \n", pontosTuristicos);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

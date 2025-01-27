#include <stdio.h>

// Estrutura para armazenar as informações de uma carta
typedef struct {
    char codigo[10];       // Código da cidade (ex: A01)
    char nome[50];         // Nome da cidade
    int populacao;         // População da cidade
    float area;            // Área da cidade em km²
    float pib;             // PIB da cidade em bilhões
    int pontosTuristicos;  // Número de pontos turísticos
} Carta;

// Função principal
int main() {
    int totalCartas;

    // Solicita o número de cartas a serem cadastradas
    printf("Bem-vindo ao Cadastro de Cartas - Super Trunfo!\n");
    printf("Quantas cartas deseja cadastrar? ");
    scanf("%d", &totalCartas);

    // Declaração do array de cartas
    Carta cartas[totalCartas];

    // Loop para cadastrar cada carta
    for (int i = 0; i < totalCartas; i++) {
        printf("\n--- Cadastro da carta %d ---\n", i + 1);

        printf("Código da carta (ex: A01): ");
        scanf("%s", cartas[i].codigo);

        printf("Nome da cidade: ");
        scanf(" %[^\n]s", cartas[i].nome); // %[^\n] lê strings com espaços

        printf("População: ");
        scanf("%d", &cartas[i].populacao);

        printf("Área (km²): ");
        scanf("%f", &cartas[i].area);

        printf("PIB (em bilhões): ");
        scanf("%f", &cartas[i].pib);

        printf("Número de pontos turísticos: ");
        scanf("%d", &cartas[i].pontosTuristicos);

        printf("✅ Carta %s cadastrada com sucesso!\n", cartas[i].codigo);
    }

    // Exibição das cartas cadastradas
    printf("\nCadastro finalizado. Aqui estão as cartas cadastradas:\n");
    for (int i = 0; i < totalCartas; i++) {
        printf("\n--- Carta %d ---\n", i + 1);
        printf("Código: %s\n", cartas[i].codigo);
        printf("Nome: %s\n", cartas[i].nome);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f bilhões\n", cartas[i].pib);
        printf("Pontos Turísticos: %d\n", cartas[i].pontosTuristicos);
    }

    return 0;
}

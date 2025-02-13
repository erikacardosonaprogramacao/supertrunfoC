#include <stdio.h>

#define NUM_ESTADOS 8
#define NUM_CIDADES 4

// Estrutura para armazenar os dados de uma cidade
typedef struct {
    char codigo[4];  // Código da cidade (ex: A01, B02)
    int populacao;
    float area;
    double pib;
    int pontos_turisticos;
} Cidade;

int main() {
    Cidade cidades[NUM_ESTADOS * NUM_CIDADES];
    int i;
    char estados[] = "ABCDEFGH";  // Identificação dos estados de A a H

    // Cadastro das cartas de cidades
    for (i = 0; i < NUM_ESTADOS * NUM_CIDADES; i++) {
        // Definir o código da cidade (estado e número)
        int estado_index = i / NUM_CIDADES;
        int cidade_numero = (i % NUM_CIDADES) + 1;
        sprintf(cidades[i].codigo, "%c%02d", estados[estado_index], cidade_numero);

        // Capturar os dados da cidade
        printf("\nCadastro da cidade %s\n", cidades[i].codigo);
        printf("Digite a população: ");
        scanf("%d", &cidades[i].populacao);

        printf("Digite a área (em km²): ");
        scanf("%f", &cidades[i].area);

        printf("Digite o PIB (em bilhões): ");
        scanf("%lf", &cidades[i].pib);

        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &cidades[i].pontos_turisticos);
    }

    // Exibir os dados de cada cidade
    printf("\n---- DADOS DAS CIDADES ----\n");
    for (i = 0; i < NUM_ESTADOS * NUM_CIDADES; i++) {
        printf("\nCidade %s\n", cidades[i].codigo);
        printf("População: %d\n", cidades[i].populacao);
        printf("Área: %.2f km²\n", cidades[i].area);
        printf("PIB: %.2f bilhões\n", cidades[i].pib);
        printf("Pontos turísticos: %d\n", cidades[i].pontos_turisticos);
    }

    return 0;
}

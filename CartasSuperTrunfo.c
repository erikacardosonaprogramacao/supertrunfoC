#include <stdio.h>

#define ESTADOS 8  // Número total de estados
#define CIDADES_POR_ESTADO 4  // Número de cidades por estado

// Definição da estrutura que representa uma cidade
typedef struct {
    char codigo[4];  // Código da cidade, ex: "A01"
    int populacao;  // Número de habitantes
    float area;  // Área da cidade em km²
    double pib;  // PIB da cidade em milhões
    int pontos_turisticos;  // Quantidade de pontos turísticos
    float densidade_populacional; // população divida pela área
    double pib_per_capita; //  PIB dividido pela população
} Cidade;

int main() {
    Cidade cidades[ESTADOS * CIDADES_POR_ESTADO];  // Array para armazenar todas as cidades
    char estados[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};  // Lista de estados
    int index = 0;  // Índice do array de cidades

    printf("--- Cadastro de Cidades do Super Trunfo - Países ---\n");

    // Loop para cadastrar todas as cidades
    for (int i = 0; i < ESTADOS; i++) {
        for (int j = 0; j < CIDADES_POR_ESTADO; j++) {
            // Gerando o código da cidade baseado no estado e número da cidade
            sprintf(cidades[index].codigo, "%c%02d", estados[i], j + 1);
            printf("Cadastro da cidade %s:\n", cidades[index].codigo);
            
            // Entrada dos dados da cidade
            printf("População: ");
            scanf("%d", &cidades[index].populacao);
            
            printf("Área (km²): ");
            scanf("%f", &cidades[index].area);
            
            printf("PIB (em milhões): ");
            scanf("%lf", &cidades[index].pib);
            
            printf("Número de pontos turísticos: ");
            scanf("%d", &cidades[index].pontos_turisticos);

            printf("\n");

            // Cálculo das novas propriedades
            if (cidades[index].area > 0) {
                cidades[index].densidade_populacional = cidades[index].populacao / cidades[index].area;
            } else {
                cidades[index].densidade_populacional = 0; // Evita divisão por zero
            }
            
            if (cidades[index].populacao > 0) {
                cidades[index].pib_per_capita = cidades[index].pib / cidades[index].populacao;
            } else {
                cidades[index].pib_per_capita = 0; // Evita divisão por zero
            }
            
            index++;  // Avança para a próxima cidade
        }
    }

    // Exibição dos dados cadastrados
    printf("\n--- Exibição dos Dados das Cidades ---\n");
    for (int i = 0; i < ESTADOS * CIDADES_POR_ESTADO; i++) {
        printf("\nCódigo: %s\n", cidades[i].codigo);
        printf("População: %d habitantes\n", cidades[i].populacao);
        printf("Área: %.2f km²\n", cidades[i].area);
        printf("PIB: %.2lf milhões\n", cidades[i].pib);
        printf("Pontos Turísticos: %d\n", cidades[i].pontos_turisticos);
    }

    // Comparação de duas cidades
    int cidade1, cidade2;
    printf("Digite os índices das duas cidades a serem comparadas (0 a %d): ", ESTADOS * CIDADES_POR_ESTADO - 1);
    scanf("%d %d", &cidade1, &cidade2);
    
    if (cidade1 >= 0 && cidade1 < ESTADOS * CIDADES_POR_ESTADO && cidade2 >= 0 && cidade2 < ESTADOS * CIDADES_POR_ESTADO) {
        printf("--- Comparação das Cidades %s e %s ---", cidades[cidade1].codigo, cidades[cidade2].codigo);
        
        printf("Densidade Populacional: %s", cidades[cidade1].densidade_populacional < cidades[cidade2].densidade_populacional ? cidades[cidade1].codigo : cidades[cidade2].codigo);
        printf("População: %s", cidades[cidade1].populacao > cidades[cidade2].populacao ? cidades[cidade1].codigo : cidades[cidade2].codigo);
        printf("Área: %s", cidades[cidade1].area > cidades[cidade2].area ? cidades[cidade1].codigo : cidades[cidade2].codigo);
        printf("PIB: %s", cidades[cidade1].pib > cidades[cidade2].pib ? cidades[cidade1].codigo : cidades[cidade2].codigo);
        printf("Pontos Turísticos: %s", cidades[cidade1].pontos_turisticos > cidades[cidade2].pontos_turisticos ? cidades[cidade1].codigo : cidades[cidade2].codigo);
        printf("PIB per Capita: %s", cidades[cidade1].pib_per_capita > cidades[cidade2].pib_per_capita ? cidades[cidade1].codigo : cidades[cidade2].codigo);
    } else {
        printf("Índices inválidos!");
    }

    return 0;  // Indica que o programa terminou com sucesso
}
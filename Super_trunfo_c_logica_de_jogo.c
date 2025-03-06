#include <stdio.h>

// Estrutura para armazenar as informações de uma carta
typedef struct {
    char estado[3];        // Estado (ex: SP, RJ, MG)
    char codigo[10];       // Código da cidade (ex: A01)
    char nome[50];         // Nome da cidade
    int populacao;         // População da cidade
    float area;            // Área da cidade em km²
    float pib;             // PIB da cidade em bilhões
    int pontosTuristicos;  // Número de pontos turísticos
} Carta;

// Função para calcular a densidade populacional
float calcularDensidade(int populacao, float area) {
    return (area > 0) ? populacao / area : 0;
}

// Função para calcular o PIB per capita
float calcularPIBperCapita(float pib, int populacao) {
    return (populacao > 0) ? pib / populacao : 0;
}

// Função para comparar duas cartas com base em um atributo específico
void compararCartas(Carta c1, Carta c2) {
    // Escolha do atributo para comparação (definido diretamente no código)
    char atributoEscolhido[] = "População";  // Alterar para "Área", "PIB", "Densidade Populacional" ou "PIB per Capita"
    
    float valorC1, valorC2;
    int criterio = 1;  // 1 para maior vence, -1 para menor vence

    if (strcmp(atributoEscolhido, "População") == 0) {
        valorC1 = c1.populacao;
        valorC2 = c2.populacao;
    } else if (strcmp(atributoEscolhido, "Área") == 0) {
        valorC1 = c1.area;
        valorC2 = c2.area;
    } else if (strcmp(atributoEscolhido, "PIB") == 0) {
        valorC1 = c1.pib;
        valorC2 = c2.pib;
    } else if (strcmp(atributoEscolhido, "Densidade Populacional") == 0) {
        valorC1 = calcularDensidade(c1.populacao, c1.area);
        valorC2 = calcularDensidade(c2.populacao, c2.area);
        criterio = -1; // Para densidade populacional, o menor valor vence
    } else if (strcmp(atributoEscolhido, "PIB per Capita") == 0) {
        valorC1 = calcularPIBperCapita(c1.pib, c1.populacao);
        valorC2 = calcularPIBperCapita(c2.pib, c2.populacao);
    } else {
        printf("Erro: Atributo desconhecido para comparação!\n");
        return;
    }

    // Determinar a carta vencedora
    printf("\n Comparação de cartas (Atributo: %s):\n", atributoEscolhido);
    printf("\n Carta 1 - %s (%s): %.2f", c1.nome, c1.estado, valorC1);
    printf("\n Carta 2 - %s (%s): %.2f", c2.nome, c2.estado, valorC2);

    if ((criterio == 1 && valorC1 > valorC2) || (criterio == -1 && valorC1 < valorC2)) {
        printf("\n Resultado: Carta 1 (%s) venceu!\n", c1.nome);
    } else if (valorC1 == valorC2) {
        printf("\n Resultado: Empate!\n");
    } else {
        printf("\n Resultado: Carta 2 (%s) venceu!\n", c2.nome);
    }
}

// Função principal
int main() {
    // Criando duas cartas fixas para comparação
    Carta carta1 = {"SP", "A01", "São Paulo", 12300000, 1521.0, 699.28, 100};
    Carta carta2 = {"RJ", "A02", "Rio de Janeiro", 6710000, 1200.0, 415.26, 120};

    // Exibir os detalhes das cartas
    printf(" Carta 1: %s (%s)\n", carta1.nome, carta1.estado);
    printf(" Carta 2: %s (%s)\n", carta2.nome, carta2.estado);

    // Chamar a função para comparar as cartas
    compararCartas(carta1, carta2);

    return 0;
}

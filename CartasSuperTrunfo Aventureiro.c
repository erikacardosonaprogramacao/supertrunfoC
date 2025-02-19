#include <stdio.h>
#include <string.h>

// Estrutura que representa uma carta do jogo Super Trunfo
struct Carta {
    char estado;                // Letra do estado (A-H)
    char codigo[4];             // Código da carta (ex: A01)
    char nome_cidade[50];       // Nome da cidade
    int populacao;              // População da cidade
    float pib;                  // PIB da cidade
    float area;                 // Área da cidade
    int pontos_turisticos;      // Número de pontos turísticos
    float densidade_populacional; // Densidade populacional
    float pib_per_capita;       // PIB per capita
};

// Função para limpar o buffer de entrada
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Função para entrada de dados de uma carta
void input_carta(struct Carta *c) {
    char buffer[100]; // Buffer para leitura de entrada

    // Entrada da letra do estado
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &c->estado);
    limpar_buffer(); // Limpa o buffer de entrada

    // Entrada do código da carta
    printf("Digite o código da carta (ex: A01): ");
    scanf("%3s", c->codigo);
    limpar_buffer(); // Limpa o buffer de entrada

    // Entrada do nome da cidade
    printf("Digite o nome da cidade: ");
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = 0; // Remove o caractere de nova linha
    strncpy(c->nome_cidade, buffer, 49);
    c->nome_cidade[49] = '\0';

    // Entrada da população
    printf("Digite a população: ");
    scanf("%d", &c->populacao);
    limpar_buffer(); // Limpa o buffer de entrada

    // Entrada do PIB
    printf("Digite o PIB: ");
    scanf("%f", &c->pib);
    limpar_buffer(); // Limpa o buffer de entrada

    // Entrada da área
    printf("Digite a área (em km²): ");
    scanf("%f", &c->area);
    limpar_buffer(); // Limpa o buffer de entrada

    // Entrada dos pontos turísticos
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &c->pontos_turisticos);
    limpar_buffer(); // Limpa o buffer de entrada
}

// Função para calcular a densidade populacional e PIB per capita
void calcular_propriedades(struct Carta *c) {
    c->densidade_populacional = c->populacao / c->area;
    c->pib_per_capita = c->pib / c->populacao;
}

// Função para exibir os dados de uma carta
void display_carta(struct Carta c) {
    printf("Estado: %c\n", c.estado);
    printf("Código: %s\n", c.codigo);
    printf("Nome da Cidade: %s\n", c.nome_cidade);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f reais\n", c.pib);
    printf("Número de Pontos Turísticos: %d\n", c.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", c.densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", c.pib_per_capita);
}

// Função principal
int main() {
    struct Carta carta1, carta2;

    // Entrada dos dados da primeira carta
    printf("Cadastro da Carta 1:\n");
    input_carta(&carta1);
    calcular_propriedades(&carta1);

    // Entrada dos dados da segunda carta
    printf("\nCadastro da Carta 2:\n");
    input_carta(&carta2);
    calcular_propriedades(&carta2);

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    display_carta(carta1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    display_carta(carta2);

    return 0;
}

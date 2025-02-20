#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Estrutura que representa uma carta do jogo Super Trunfo
struct Carta {
    char estado;                // Letra do estado (A-H)
    char codigo[4];             // Código da carta (ex: A01)
    char nome_cidade[50];       // Nome da cidade
    unsigned long int populacao; // População da cidade
    float pib;                  // PIB da cidade
    float area;                 // Área da cidade
    int pontos_turisticos;      // Número de pontos turísticos
    float densidade_populacional; // Densidade populacional
    float pib_per_capita;       // PIB per capita
    float super_poder;          // Super Poder da carta
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
    scanf("%lu", &c->populacao);
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

// Função para calcular a densidade populacional, PIB per capita e Super Poder
void calcular_propriedades(struct Carta *c) {
    c->densidade_populacional = c->populacao / c->area;
    c->pib_per_capita = c->pib / c->populacao;
    c->super_poder = c->populacao + c->area + c->pib + c->pontos_turisticos + c->pib_per_capita + (1 / c->densidade_populacional);
}

// Função para exibir os dados de uma carta
void display_carta(struct Carta c) {
    printf("Estado: %c\n", c.estado);
    printf("Código: %s\n", c.codigo);
    printf("Nome da Cidade: %s\n", c.nome_cidade);
    printf("População: %lu\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f reais\n", c.pib);
    printf("Número de Pontos Turísticos: %d\n", c.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", c.densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", c.pib_per_capita);
    printf("Super Poder: %.2f\n", c.super_poder);
}

// Função para comparar duas cartas e exibir os resultados
void comparar_cartas(struct Carta c1, struct Carta c2) {
    printf("\nComparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", c1.populacao > c2.populacao);
    printf("Área: Carta 1 venceu (%d)\n", c1.area > c2.area);
    printf("PIB: Carta 1 venceu (%d)\n", c1.pib > c2.pib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", c1.pontos_turisticos > c2.pontos_turisticos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", c1.densidade_populacional < c2.densidade_populacional);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", c1.pib_per_capita > c2.pib_per_capita);
    printf("Super Poder: Carta 1 venceu (%d)\n", c1.super_poder > c2.super_poder);
}

// Função para comparar um atributo específico de duas cartas e determinar a vencedora
void comparar_atributo(struct Carta c1, struct Carta c2, char *atributo) {
    printf("\nComparação de Cartas (Atributo: %s):\n", atributo);

    if (strcmp(atributo, "População") == 0) {
        printf("Carta 1 - %s: %lu\n", c1.nome_cidade, c1.populacao);
        printf("Carta 2 - %s: %lu\n", c2.nome_cidade, c2.populacao);
        if (c1.populacao > c2.populacao) {
            printf("Resultado: Carta 1 (%s) venceu!\n", c1.nome_cidade);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", c2.nome_cidade);
        }
    } else if (strcmp(atributo, "Área") == 0) {
        printf("Carta 1 - %s: %.2f km²\n", c1.nome_cidade, c1.area);
        printf("Carta 2 - %s: %.2f km²\n", c2.nome_cidade, c2.area);
        if (c1.area > c2.area) {
            printf("Resultado: Carta 1 (%s) venceu!\n", c1.nome_cidade);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", c2.nome_cidade);
        }
    } else if (strcmp(atributo, "PIB") == 0) {
        printf("Carta 1 - %s: %.2f reais\n", c1.nome_cidade, c1.pib);
        printf("Carta 2 - %s: %.2f reais\n", c2.nome_cidade, c2.pib);
        if (c1.pib > c2.pib) {
            printf("Resultado: Carta 1 (%s) venceu!\n", c1.nome_cidade);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", c2.nome_cidade);
        }
    } else if (strcmp(atributo, "Densidade Populacional") == 0) {
        printf("Carta 1 - %s: %.2f hab/km²\n", c1.nome_cidade, c1.densidade_populacional);
        printf("Carta 2 - %s: %.2f hab/km²\n", c2.nome_cidade, c2.densidade_populacional);
        if (c1.densidade_populacional < c2.densidade_populacional) {
            printf("Resultado: Carta 1 (%s) venceu!\n", c1.nome_cidade);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", c2.nome_cidade);
        }
    } else if (strcmp(atributo, "PIB per Capita") == 0) {
        printf("Carta 1 - %s: %.2f reais\n", c1.nome_cidade, c1.pib_per_capita);
        printf("Carta 2 - %s: %.2f reais\n", c2.nome_cidade, c2.pib_per_capita);
        if (c1.pib_per_capita > c2.pib_per_capita) {
            printf("Resultado: Carta 1 (%s) venceu!\n", c1.nome_cidade);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", c2.nome_cidade);
        }
    } else {
        printf("Atributo inválido!\n");
    }
}

// Função principal
int main() {
    struct Carta carta1, carta2;
    char *atributos[] = {"População", "Área", "PIB", "Densidade Populacional", "PIB per Capita"};
    int num_atributos = sizeof(atributos) / sizeof(atributos[0]);

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

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

    // Comparação das cartas com base em um atributo aleatório
    char *atributo_escolhido = atributos[rand() % num_atributos];
    comparar_atributo(carta1, carta2, atributo_escolhido);

    return 0;
}

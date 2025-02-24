#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Estrutura que representa uma carta do jogo Super Trunfo
struct Carta {
    char codigo[4];             // Código da carta (ex: A01)
    char nome_pais[50];         // Nome do país
    unsigned long int populacao; // População do país
    float pib;                  // PIB do país
    float area;                 // Área do país
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
    printf("Digite o código da carta (ex: A01): ");
    scanf("%3s", c->codigo);
    limpar_buffer();

    printf("Digite o nome do país: ");
    fgets(c->nome_pais, sizeof(c->nome_pais), stdin);
    c->nome_pais[strcspn(c->nome_pais, "\n")] = 0;

    printf("Digite a população: ");
    scanf("%lu", &c->populacao);
    limpar_buffer();

    printf("Digite o PIB: ");
    scanf("%f", &c->pib);
    limpar_buffer();

    printf("Digite a área (em km²): ");
    scanf("%f", &c->area);
    limpar_buffer();

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &c->pontos_turisticos);
    limpar_buffer();
}

// Função para calcular a densidade populacional, PIB per capita e Super Poder
void calcular_propriedades(struct Carta *c) {
    c->densidade_populacional = c->populacao / c->area;
    c->pib_per_capita = c->pib / c->populacao;
    c->super_poder = c->populacao + c->area + c->pib + c->pontos_turisticos + c->pib_per_capita + (1 / c->densidade_populacional);
}

// Função para exibir os dados de uma carta
void display_carta(struct Carta c) {
    printf("Código: %s\n", c.codigo);
    printf("Nome do País: %s\n", c.nome_pais);
    printf("População: %lu\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f reais\n", c.pib);
    printf("Número de Pontos Turísticos: %d\n", c.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", c.densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", c.pib_per_capita);
    printf("Super Poder: %.2f\n", c.super_poder);
}

// Função para comparar um atributo específico de duas cartas e determinar a vencedora
float comparar_atributo(struct Carta c1, struct Carta c2, char *atributo) {
    printf("\nComparação de Cartas (Atributo: %s):\n", atributo);

    if (strcmp(atributo, "População") == 0) {
        printf("%s: %lu\n", c1.nome_pais, c1.populacao);
        printf("%s: %lu\n", c2.nome_pais, c2.populacao);
        if (c1.populacao > c2.populacao) {
            printf("Resultado: %s venceu!\n", c1.nome_pais);
            return c1.populacao;
        } else if (c1.populacao < c2.populacao) {
            printf("Resultado: %s venceu!\n", c2.nome_pais);
            return c2.populacao;
        } else {
            printf("Resultado: Empate!\n");
            return 0;
        }
    } else if (strcmp(atributo, "Área") == 0) {
        printf("%s: %.2f km²\n", c1.nome_pais, c1.area);
        printf("%s: %.2f km²\n", c2.nome_pais, c2.area);
        if (c1.area > c2.area) {
            printf("Resultado: %s venceu!\n", c1.nome_pais);
            return c1.area;
        } else if (c1.area < c2.area) {
            printf("Resultado: %s venceu!\n", c2.area);
            return c2.area;
        } else {
            printf("Resultado: Empate!\n");
            return 0;
        }
    } else if (strcmp(atributo, "PIB") == 0) {
        printf("%s: %.2f reais\n", c1.nome_pais, c1.pib);
        printf("%s: %.2f reais\n", c2.nome_pais, c2.pib);
        if (c1.pib > c2.pib) {
            printf("Resultado: %s venceu!\n", c1.nome_pais);
            return c1.pib;
        } else if (c1.pib < c2.pib) {
            printf("Resultado: %s venceu!\n", c2.pib);
            return c2.pib;
        } else {
            printf("Resultado: Empate!\n");
            return 0;
        }
    } else if (strcmp(atributo, "Densidade Populacional") == 0) {
        printf("%s: %.2f hab/km²\n", c1.nome_pais, c1.densidade_populacional);
        printf("%s: %.2f hab/km²\n", c2.nome_pais, c2.densidade_populacional);
        if (c1.densidade_populacional < c2.densidade_populacional) {
            printf("Resultado: %s venceu!\n", c1.nome_pais);
            return c1.densidade_populacional;
        } else if (c1.densidade_populacional > c2.densidade_populacional) {
            printf("Resultado: %s venceu!\n", c2.nome_pais);
            return c2.densidade_populacional;
        } else {
            printf("Resultado: Empate!\n");
            return 0;
        }
    } else if (strcmp(atributo, "PIB per Capita") == 0) {
        printf("%s: %.2f reais\n", c1.nome_pais, c1.pib_per_capita);
        printf("%s: %.2f reais\n", c2.nome_pais, c2.pib_per_capita);
        if (c1.pib_per_capita > c2.pib_per_capita) {
            printf("Resultado: %s venceu!\n", c1.nome_pais);
            return c1.pib_per_capita;
        } else if (c1.pib_per_capita < c2.pib_per_capita) {
            printf("Resultado: %s venceu!\n", c2.pib_per_capita);
            return c2.pib_per_capita;
        } else {
            printf("Resultado: Empate!\n");
            return 0;
        }
    } else if (strcmp(atributo, "Pontos Turísticos") == 0) {
        printf("%s: %d\n", c1.nome_pais, c1.pontos_turisticos);
        printf("%s: %d\n", c2.nome_pais, c2.pontos_turisticos);
        if (c1.pontos_turisticos > c2.pontos_turisticos) {
            printf("Resultado: %s venceu!\n", c1.nome_pais);
            return c1.pontos_turisticos;
        } else if (c1.pontos_turisticos < c2.pontos_turisticos) {
            printf("Resultado: %s venceu!\n", c2.pontos_turisticos);
            return c2.pontos_turisticos;
        } else {
            printf("Resultado: Empate!\n");
            return 0;
        }
    } else if (strcmp(atributo, "Super Poder") == 0) {
        printf("%s: %.2f\n", c1.nome_pais, c1.super_poder);
        printf("%s: %.2f\n", c2.nome_pais, c2.super_poder);
        if (c1.super_poder > c2.super_poder) {
            printf("Resultado: %s venceu!\n", c1.nome_pais);
            return c1.super_poder;
        } else if (c1.super_poder < c2.super_poder) {
            printf("Resultado: %s venceu!\n", c2.super_poder);
            return c2.super_poder;
        } else {
            printf("Resultado: Empate!\n");
            return 0;
        }
    } else {
        printf("Atributo inválido!\n");
        return 0;
    }
}

// Função para exibir o menu e obter a escolha do usuário
int exibir_menu(char *mensagem, int *opcoes_disponiveis, char *atributos[]) {
    int escolha;
    printf("\n%s\n", mensagem);
    for (int i = 0; i < 7; i++) {
        if (opcoes_disponiveis[i]) {
            printf("%d. %s\n", i + 1, atributos[i]);
        }
    }
    printf("Escolha uma opção (1-7): ");
    scanf("%d", &escolha);
    return escolha;
}

// Função para comparar cartas com base na escolha do usuário
void comparar_cartas_usuario(struct Carta c1, struct Carta c2, int escolha1, int escolha2, char *atributos[]) {
    char *atributo1 = atributos[escolha1 - 1];
    char *atributo2 = atributos[escolha2 - 1];

    float valor1_c1 = comparar_atributo(c1, c2, atributo1);
    float valor2_c1 = comparar_atributo(c1, c2, atributo2);

    float valor1_c2 = comparar_atributo(c2, c1, atributo1);
    float valor2_c2 = comparar_atributo(c2, c1, atributo2);

    float soma_c1 = valor1_c1 + valor2_c1;
    float soma_c2 = valor1_c2 + valor2_c2;

    printf("\nResultado da Comparação:\n");
    printf("%s: %s (%.2f) + %s (%.2f) = %.2f\n", c1.nome_pais, atributo1, valor1_c1, atributo2, valor2_c1, soma_c1);
    printf("%s: %s (%.2f) + %s (%.2f) = %.2f\n", c2.nome_pais, atributo1, valor1_c2, atributo2, valor2_c2, soma_c2);

    if (soma_c1 > soma_c2) {
        printf("Resultado: %s venceu!\n", c1.nome_pais);
    } else if (soma_c1 < soma_c2) {
        printf("Resultado: %s venceu!\n", c2.nome_pais);
    } else {
        printf("Resultado: Empate!\n");
    }
}

// Função principal
int main() {
    char *atributos[] = {"População", "Área", "PIB", "Densidade Populacional", "PIB per Capita", "Pontos Turísticos", "Super Poder"};

    srand(time(NULL));

    struct Carta carta1, carta2;

    printf("Cadastro da Carta 1:\n");
    input_carta(&carta1);
    calcular_propriedades(&carta1);

    printf("\nCadastro da Carta 2:\n");
    input_carta(&carta2);
    calcular_propriedades(&carta2);

    printf("\nCarta 1:\n");
    display_carta(carta1);

    printf("\nCarta 2:\n");
    display_carta(carta2);

    int escolha1, escolha2;
    int opcoes_disponiveis[7] = {1, 1, 1, 1, 1, 1, 1};

    escolha1 = exibir_menu("Escolha o primeiro atributo para comparar:", opcoes_disponiveis, atributos);
    if (escolha1 < 1 || escolha1 > 7) {
        printf("Escolha inválida! Tente novamente.\n");
        return 1;
    }
    opcoes_disponiveis[escolha1 - 1] = 0;

    escolha2 = exibir_menu("Escolha o segundo atributo para comparar:", opcoes_disponiveis, atributos);
    if (escolha2 < 1 || escolha2 > 7 || escolha2 == escolha1) {
        printf("Escolha inválida! Tente novamente.\n");
        return 1;
    }

    comparar_cartas_usuario(carta1, carta2, escolha1, escolha2, atributos);

    return 0;
}

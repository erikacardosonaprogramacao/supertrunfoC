#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
int main()
{
    // Declaração das variáveis da primeira carta:
    char c1_estado;
    char c1_codigo[3];
    char c1_nome_cidade[60];
    int c1_populacao;
    int c1_pontos_turisticos;
    float c1_area;
    float c1_PIB;

    // Recebendo do usuário os dados da primeira carta:
    printf("Carta 1:\n");

    printf("Estado: ");
    scanf("%c", &c1_estado);

    printf("Código: ");
    scanf(" %[^\n]", c1_codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", c1_nome_cidade);

    printf("População: ");
    scanf(" %d", &c1_populacao);

    printf("Área: ");
    scanf(" %f", &c1_area);

    printf("PIB: ");
    scanf(" %f", &c1_PIB);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &c1_pontos_turisticos);


    // Declaração das variáveis da segunda carta:
    char c2_estado;
    char c2_codigo[3];
    char c2_nome_cidade[60];
    int c2_populacao;
    int c2_pontos_turisticos;
    float c2_area;
    float c2_PIB;

    // Recebendo do usuário os dados da segunda carta:
    printf("\nCarta 2:\n");

    printf("Estado: ");
    scanf(" %c", &c2_estado);

    printf("Código: ");
    scanf(" %[^\n]", c2_codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", c2_nome_cidade);

    printf("População: ");
    scanf(" %d", &c2_populacao);

    printf("Área: ");
    scanf(" %f", &c2_area);

    printf("PIB: ");
    scanf(" %f", &c2_PIB);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &c2_pontos_turisticos);


    // Mostrando no terminal os dados das cartas cadastradas:
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", c1_estado);
    printf("Código: %s\n", c1_codigo);
    printf("Nome da Cidade: %s\n", c1_nome_cidade);
    printf("População: %d\n", c1_populacao);
    printf("Área: %.2f km²\n", c1_area);
    printf("PIB: %.2f bilhões de reais\n", c1_PIB);
    printf("Número de Pontos Turísticos: %d\n", c1_pontos_turisticos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", c2_estado);
    printf("Código: %s\n", c2_codigo);
    printf("Nome da Cidade: %s\n", c2_nome_cidade);
    printf("População: %d\n", c2_populacao);
    printf("Área: %.2f km²\n", c2_area);
    printf("PIB: %.2f bilhões de reais\n", c2_PIB);
    printf("Número de Pontos Turísticos: %d\n", c2_pontos_turisticos);

    return 0;
}

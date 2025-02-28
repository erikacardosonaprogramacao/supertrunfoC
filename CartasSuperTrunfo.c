#include <stdio.h>

int main() {
    // Desafio Super Trunfo - Países
    // Tema 1 - Cadastro das Cartas
    
    // Carta 1
    char A_estado = 'A';
    char A_codigo[100] = "A04";
    char A_cidade[100] = "Abaetetuba";
    int A_populacao = 201158;
    float A_area = 1610.646;
    float A_pib = 539.68;
    int A_pontos_turisticos = 20;

    printf("Carta 1:\n");
    printf("Estado: %c\n", A_estado);
    printf("Código: %s\n", A_codigo);
    printf("Nome da Cidade: %s\n", A_cidade);
    printf("População: %d\n", A_populacao);
    printf("Área: %.2f km²\n", A_area);
    printf("PIB: %.2f milhões de reais\n", A_pib);
    printf("Número de Pontos Turísticos: %d\n", A_pontos_turisticos);

    printf("\n");

    // Carta 2
    char B_estado = 'B';
    char B_codigo[100] = "B04";
    char B_cidade[100] = "Belém";
    int B_populacao = 1398531;
    float B_area = 1059.47;
    float B_pib = 30.357;
    int B_pontos_turisticos = 50;

    printf("Carta 2:\n");
    printf("Estado: %c\n", B_estado);
    printf("Código: %s\n", B_codigo);
    printf("Nome da Cidade: %s\n", B_cidade);
    printf("População: %d\n", B_populacao);
    printf("Área: %.2f km²\n", B_area);
    printf("PIB: %.2f bilhões de reais\n", B_pib);
    printf("Número de Pontos Turísticos: %d\n", B_pontos_turisticos);

    return 0;
}

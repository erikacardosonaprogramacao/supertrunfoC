#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char cod_cidade[15];
    char nome[40];
    int populacao;
    float area;
    float PIB;
    int num_pontos_turisticos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Cadastro de carta\n");

    printf("Código da cidade: ");
    scanf("%s", cod_cidade);

    printf("Nome da cidade: ");
    scanf("%s", nome);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área (m²): ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &PIB);

    printf("Número de pontos turísticos: ");
    scanf("%d", &num_pontos_turisticos);

    printf("\nCarta cadastrada!");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

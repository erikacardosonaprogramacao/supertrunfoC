#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    int cod_cidade=00;
    char nome_cidade[20]="cidade ex";
    int populacao=125494;
    double area=243754.43;
    double pib=123432654.78;
    int pts_turisticos=5;

    // Cadastro das Cartas:
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Cadastramento de cartas:\n");
    
    printf("\nDigite o código da cidade:\n");
    scanf("%i", &cod_cidade);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite quantidade populacional:\n");
    scanf("%i", &populacao);

    printf("Digite a área² total da cidade:\n");
    scanf("%lf", &area);

    printf("Digite o PIB da cidade:\n");
    scanf(" %lf", &pib);

    printf("Quantidade de pontos turísticos:\n");
    scanf(" %i", &pts_turisticos);

    // Exibição dos Dados das Cartas:
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nCarta cadastrada com sucesso, verifique os dados:\n");

    printf("\nCódigo da cidade: %02i\n", cod_cidade);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População total: %i\n", populacao);
    printf("Área total: %.2lf²\n", area);
    printf("PIB total: %.2lf\n", pib);
    printf("Quantidade de pontos turísticos: %02i\n", pts_turisticos);

    return 0;
}

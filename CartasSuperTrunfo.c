#include <stdio.h>
#include <locale.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    setlocale(LC_ALL, "en_US.UTF-8");
    // Definição das variáveis para os atributos da cidade
    int codigo;
    char nome[100]; // Nome com no máximo 99 caracteres + o terminador nulo
    long long populacao;
    double area;
    double pib;
    int pontos_turisticos;

    // Cadastro das Cartas
    printf("Cadastro de Cartas de Cidades\n");

    printf("Código da cidade: ");
    scanf("%d", &codigo);

    printf("Nome da cidade: ");
    scanf(" %s[^\n]", nome); // Lê o nome até a quebra de linha

    printf("População: ");
    scanf("%lld", &populacao);

    printf("Área (km²): ");
    scanf("%lf", &area);

    printf("PIB: ");
    scanf("%lf", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Exibição dos Dados das Cartas
    printf("\nDados da Carta Cadastrada:\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %lld\n", populacao);
    printf("Área: %.2lf km²\n", area); // Formatação para 2 casas decimais
    printf("PIB: %.2lf\n", pib); // Formatação para 2 casas decimais
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}
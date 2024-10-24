#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - PaC-ses
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char estado[3];
    char codigoDaCarta[4];
    char nomeDaCidade[200];
    int populacao;
    float areaEmKm;
    float pib;
    int numeroDePontosTuristicos;
    char codCarga[5];

    printf("Digite o estado: ");
    scanf("%2s", estado);

    printf("Digite o código da carta: ");
    scanf("%3s", codigoDaCarta);

    printf("Digite o nome da cidade: ");
    scanf("%99s", nomeDaCidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a Área em Km²: ");
    scanf("%f", &areaEmKm);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numeroDePontosTuristicos);

    codCarga[0] = estado[0];
    codCarga[1] = '\0';
    strcat(codCarga, codigoDaCarta);

    // Exibição dos resultados
    printf("\nEstado: %s\n", estado);
    printf("Código da Carta: %s\n", codCarga);
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", areaEmKm);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", numeroDePontosTuristicos);

    return 0;
}

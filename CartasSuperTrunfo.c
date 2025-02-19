#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nome[50], nome2[50];
    char codigo[4], codigo2[4];
    int populacao, populacao2, pontosTuristicos, pontosTuristicos2;
    float area, area2, pib, pib2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("***SUPERTRUNFO***\n");
    printf("Cadastre os dados da primeira cidade\n");

    printf("Nome da cidade: \n");
    scanf("%49s", nome);

    printf("Código da cidade: \n");
    scanf("%3s", codigo);

    printf("População da cidade: \n");
    scanf("%d", &populacao);

    printf("Área da cidade: \n");
    scanf("%f", &area);

    printf("PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Pontos turísticos da cidade: \n");
    scanf("%d", &pontosTuristicos);

    printf("\n");


    printf("Cadastre os dados da segunda cidade\n");
    printf("Nome da cidade: \n");
    scanf("%49s", nome2);

    printf("Código da cidade: \n");
    scanf("%3s", codigo2);

    printf("População da cidade: \n");
    scanf("%d", &populacao2);

    printf("Área da cidade: \n");
    scanf("%f", &area2);

    printf("PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Pontos turísticos da cidade: \n");
    scanf("%d", &pontosTuristicos2);

    printf("\n");

    printf("Cartas cadastradas com sucesso! \n");
    printf("Aqui estão suas cartas:\n");
    printf("\n");

    printf("Carta 1:\n");
    printf("Nome: %s \n", nome);
    printf("Código: %s \n", codigo);
    printf("População: %d \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Pontos turísticos: %d \n", pontosTuristicos);

    printf("\n");

    printf("Carta 2:\n");
    printf("Nome: %s \n", nome2);
    printf("Código: %s \n", codigo2);
    printf("População: %d \n", populacao2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Pontos turísticos: %d \n", pontosTuristicos2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

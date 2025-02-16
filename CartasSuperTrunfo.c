#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    char uf, cidade[3];
    int populacao, pontos;
    float area, pib;

    printf("Informe o estado (de A a H):\n");
    scanf("%c",&uf);

    printf("Informe a cidade (Letra do estado + de 01 a 04):\n");
    scanf("%s", &cidade);

    printf("Informe a populacao:\n");
    scanf("%d",&populacao);

    printf("informe a area total da cidade (Km²):\n");
    scanf("%f", &area);

    printf("Informe o PIB:\n");
    scanf("%f", &pib);

    printf("Informe quantos pontos turistico a cidade possui:\n");
    scanf("%d", &pontos);

    printf("Estado: %c\n", uf);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area (Km2): %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Quantidade de pontos turisticos: %d", pontos);

    return 0;
}

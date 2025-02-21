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
    char uf2, cidade2[3];
    int populacao, populacao2, pontos, pontos2;
    float area, pib;
    float area2, pib2;

    printf("*** CARTA 1 ***\n");
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
    printf("Quantidade de pontos turisticos: %d\n", pontos);

    printf("*** CARTA 2 ***\n");
    printf("Informe o estado (de A a H):\n");
    scanf("%c",&uf2);

    printf("Informe a cidade (Letra do estado + de 01 a 04):\n");
    scanf("%s", &cidade2);
    
    printf("Informe a populacao:\n");
    scanf("%d",&populacao2);

    printf("informe a area total da cidade (Km²):\n");
    scanf("%f", &area2);

    printf("Informe o PIB:\n");
    scanf("%f", &pib2);

    printf("Informe quantos pontos turistico a cidade possui:\n");
    scanf("%d", &pontos2);

    printf("Estado: %c\n", uf2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area (Km2): %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Quantidade de pontos turisticos: %d\n", pontos2);

    return 0;
    
}
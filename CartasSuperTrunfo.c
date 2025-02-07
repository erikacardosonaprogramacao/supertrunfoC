#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int pop, pontos_turisticos;
    char nome_cidade[40];
    char codigo_cidade[9];
    float area, pib;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite o nome da cidade: ");
    scanf(" %s", nome_cidade);

    printf("Digite o código da cidade: ");
    scanf(" %s", codigo_cidade);

    printf("Digite a área da cidade: ");
    scanf(" %f", &area);

    printf("Digite a população da cidade: ");
    scanf(" %i", &pop);

    printf("Digite o pib da cidade: ");
    scanf(" %f", &pib);

    printf("Digite quantos pontos turisticos a cidade possui: ");
    scanf(" %i", &pontos_turisticos);


    // Propriedades calculadas
    float densidade_populacional = (float) pop / area;
    float pib_per_capta = pib / (float) pop;
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.    
    
    printf("Nome da cidade: \t%s \n", nome_cidade);
    printf("Codigo da cidade: \t%s \n", codigo_cidade);
    printf("pontos turisticos: \t%i \n", pontos_turisticos);
    printf("População: \t\t%i \n", pop);
    printf("Área: \t\t\t%.2f  \n", area);
    printf("PIB: \t\t\tR$:%.2f \n", pib);
    printf("Pib per capta: \t\t%.2f\n", pib_per_capta);
    printf("Densidade populacional: %.2f\n", densidade_populacional);

    return 0;
}
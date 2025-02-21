#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Jhonatan

int main(){
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado[20];
    char codigodacidade[20];
    char nome[20];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
                //Estado
    printf("Digite o nome do estado: ");
    scanf("%s", &estado);               
                //Código da carta
    printf("Digite o nome da carta: ");
    scanf("%s", &codigodacidade);
                //Nome da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s", &nome);           
                //População
    printf("Digite o tamanho da população: ");
    scanf("%d", &populacao);
                //Area
    printf("Digite o tamanho da area: ");
    scanf("%f", &area);
                //PIB
    printf("Digite o PIB: ");
    scanf("%f", &pib);
                //Numero de Pontos Turisticos
    printf("Digite a Quantidade de Pontos Turiscos: ");
    scanf("%d", &pontosturisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

                 //Vizualização da Carta Completa
    printf("\n--- Dados da Carta %s ---\n", codigodacidade);
    printf("Estado: %s\nCódigo: %s\nNome da cidade: %s\n", estado, codigodacidade, nome);
    printf("População: %d\nÁrea: %.2fKM²\nPIB: %.2f\nNúmero de pontos turísticos: %d\n", populacao, area, pib, pontosturisticos);

    return 0;
}


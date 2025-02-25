#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char primeiro_estado[5];
    char segundo_estado[5];

    char primeiro_codigo_da_carta[10];
    char segundo_codigo_da_carta[10];

    char primeira_nome_da_cidade[20];
    char segunda_nome_da_cidade[20];

    int primeira_populacao;
    int segunda_populacao;

    float primeira_area;
    float segunda_area;

    float primeiro_pib;
    float segundo_pib;

    int primeiro_numero_de_pontos_turisticos;
    int segundo_numero_de_pontos_turisticos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Primeira carta
    printf("Proxima Carta -> 1° Carta - : \n");

    printf("1° Carta - Digite o Nome da Cidade: \n");
    fgets(primeira_nome_da_cidade, 20, stdin);
    primeira_nome_da_cidade[strcspn(primeira_nome_da_cidade, "\n")] = '\0';
    
    printf("1° Carta - Digite uma Letra de 'A' a 'H' correspondente ao Estado: \n");
    fgets(primeiro_estado, 5, stdin);
    primeiro_estado[strcspn(primeiro_estado, "\n")] = '\0';
    
    printf("1° Carta - Digite um Codigo para a Carta (01 a 03): \n");
    fgets(primeiro_codigo_da_carta, 10, stdin);
    primeiro_codigo_da_carta[strcspn(primeiro_codigo_da_carta, "\n")] = '\0';
    
    printf("1° Carta - Digite a quantidade de habitantes (População): \n");
    scanf("%d", &primeira_populacao);
    
    printf("1° Carta - Digite a Área da Cidade em Km²: \n");
    scanf("%f", &primeira_area);
    
    printf("1° Carta - Digite o Produto Interno Bruto (PIB) da Cidade: \n");
    scanf("%f", &primeiro_pib);
    
    printf("1° Carta - Digite a quantidade de Pontos Turísticos da Cidade: \n");
    scanf("%d", &primeiro_numero_de_pontos_turisticos);
    
    printf("1° Carta - Concluída \n");
    
    __fpurge(stdin);
    
    // Segunda Carta
    printf("Proxima Carta -> 2° Carta - : \n");
    segunda_nome_da_cidade[strcspn(segunda_nome_da_cidade, "\n")] = '\0';
    
    printf("2° Carta - Digite o Nome da Cidade: \n");
    fgets(segunda_nome_da_cidade, 20, stdin);
    segunda_nome_da_cidade[strcspn(segunda_nome_da_cidade, "\n")] = '\0';
    
    printf("2° Carta - Digite uma Letra de 'A' a 'H' correspondente ao Estado: \n");
    fgets(segundo_estado, 5, stdin);
    segundo_estado[strcspn(segundo_estado, "\n")] = '\0';
    
    printf("2° Carta - Digite um Codigo para a Carta (01 a 03): \n");
    fgets(segundo_codigo_da_carta, 10, stdin);
    segundo_codigo_da_carta[strcspn(segundo_codigo_da_carta, "\n")] = '\0';
    
    printf("2° Carta - Digite a quantidade de habitantes (População): \n");
    scanf("%d", &segunda_populacao);
    
    printf("2° Carta - Digite a Área da Cidade em Km²: \n");
    scanf("%f", &segunda_area);
    
    printf("2° Carta - Digite o Produto Interno Bruto (PIB) da Cidade: \n");
    scanf("%f", &segundo_pib);
    
    printf("2° Carta - Digite a quantidade de Pontos Turísticos da Cidade: \n");
    scanf("%d", &segundo_numero_de_pontos_turisticos);

    printf("2° Carta - Concluída \n");
    
    __fpurge(stdin);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    printf("\nCarta 1: ");
    printf("\nEstado: %s", primeiro_estado);
    printf("\nCódigo: %s%s", primeiro_estado, primeiro_codigo_da_carta);
    printf("\nNome da Cidade: %s", primeira_nome_da_cidade);
    printf("\nPopulação: %d", primeira_populacao);
    printf("\nÁrea: %.2f km²", primeira_area);
    printf("\nPIB: %.2f bilhões de reais", primeiro_pib);
    printf("\nNúmero de Pontos Turísticos: %d\n", primeiro_numero_de_pontos_turisticos);
    

    printf("\nCarta 2: ");
    printf("\nEstado: %s", segundo_estado);
    printf("\nCódigo: %s%s", segundo_estado, segundo_codigo_da_carta);
    printf("\nNome da Cidade: %s", segunda_nome_da_cidade);
    printf("\nPopulação: %d", segunda_populacao);
    printf("\nÁrea: %.2f km²", segunda_area);
    printf("\nPIB: %.2f bilhões de reais", segundo_pib);
    printf("\nNúmero de Pontos Turísticos: %d\n", segundo_numero_de_pontos_turisticos);
    
    return 0;
}



/*
                    Exemplos Saida

Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50
 
Carta 2:
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30   


Carta 1: 
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50

Carta 2: 
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30

*/
#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1; // Nova variável para densidade populacional
    float pibPerCapita1;          // Nova variável para PIB per capita
    float superPoder1;            // Nova variável para Super Poder
    
    // Variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2; // Nova variável para densidade populacional
    float pibPerCapita2;          // Nova variável para PIB per capita
    float superPoder2;            // Nova variável para Super Poder
    
    // Resultados das comparações
    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPIB;
    int resultadoPontosTuristicos;
    int resultadoDensidadePopulacional;
    int resultadoPIBPerCapita;
    int resultadoSuperPoder;
    
    // Leitura dos dados da primeira carta
    printf("\n=== Cadastro da Primeira Carta ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", cidade1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área em km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    
    // Cálculo da densidade populacional e PIB per capita para a primeira carta
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / (float)populacao1;
    
    // Leitura dos dados da segunda carta
    printf("\n=== Cadastro da Segunda Carta ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", cidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área em km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    
    // Cálculo da densidade populacional e PIB per capita para a segunda carta
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / (float)populacao2;
    
    // Cálculo do Super Poder para a primeira carta
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0) + 
                 (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacional1);
    
    // Cálculo do Super Poder para a segunda carta
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) + 
                 (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);
    
    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    
    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    
    // Comparação das cartas atributo por atributo
    resultadoPopulacao = (populacao1 > populacao2);
    resultadoArea = (area1 > area2);
    resultadoPIB = (pib1 > pib2);
    resultadoPontosTuristicos = (pontosTuristicos1 > pontosTuristicos2);
    
    // Densidade populacional o menor valor vence
    resultadoDensidadePopulacional = (densidadePopulacional1 < densidadePopulacional2);
    
    resultadoPIBPerCapita = (pibPerCapita1 > pibPerCapita2);
    resultadoSuperPoder = (superPoder1 > superPoder2);
    
    // Exibição dos resultados das comparações
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", 
           resultadoPopulacao ? 1 : 2, resultadoPopulacao);
    printf("Área: Carta %d venceu (%d)\n", 
           resultadoArea ? 1 : 2, resultadoArea);
    printf("PIB: Carta %d venceu (%d)\n", 
           resultadoPIB ? 1 : 2, resultadoPIB);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
           resultadoPontosTuristicos ? 1 : 2, resultadoPontosTuristicos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
           resultadoDensidadePopulacional ? 1 : 2, resultadoDensidadePopulacional);
    printf("PIB per Capita: Carta %d venceu (%d)\n", 
           resultadoPIBPerCapita ? 1 : 2, resultadoPIBPerCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", 
           resultadoSuperPoder ? 1 : 2, resultadoSuperPoder);
    
    return 0;
}
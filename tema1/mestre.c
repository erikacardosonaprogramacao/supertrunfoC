#include <stdio.h>

// Desafio Super Trunfo - Países
//  Comparação das Cartas
//Aluno jhonatan
// Foi colocado Icones para deixar as cartas com visual atrativo.
int main() {
    // Variáveis
    char estado1[50], estado2[50];
    char codigodacidade1[50], codigodacidade2[50];
    char nome1[50], nome2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;
    float superpoder1, superpoder2;

    // Cadastro da Carta 1
    printf("Digite a Sigla do estado: ");
    scanf("%s", estado1);

    printf("Digite o nome da carta: ");
    scanf("%s", codigodacidade1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome1);

    printf("Digite o tamanho da população: ");
    scanf("%lu", &populacao1);

    printf("Digite o tamanho da área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a Quantidade de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);

    // Cálculos para a Carta 1
    // Para evitar erro de Divisão por Zero - foi colocado if/else

    if (area1 > 0)
        densidadepopulacional1 = populacao1 / area1;
    else
        densidadepopulacional1 = 0;

    if (populacao1 > 0)
        pibpercapita1 = pib1 / populacao1;
    else
        pibpercapita1 = 0;

    // Cadastro da Carta 2
    printf("\nDigite a Sigla do estado: ");
    scanf("%s", estado2);

    printf("Digite o nome da carta: ");
    scanf("%s", codigodacidade2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);

    printf("Digite o tamanho da população: ");
    scanf("%lu", &populacao2);

    printf("Digite o tamanho da área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a Quantidade de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Cálculos para a Carta 2
    // Para evitar erro de Divisão por Zero - foi colocado if/else
    if (area2 > 0)
        densidadepopulacional2 = populacao2 / area2;
    else
        densidadepopulacional2 = 0;

    if (populacao2 > 0)
        pibpercapita2 = pib2 / populacao2;
    else
        pibpercapita2 = 0;

    // Cálculo do Super Poder (com inversão da densidade populacional)
    // foi colocado ? para evitar erros de divisão por 0
    float inversaDensidade1 = (densidadepopulacional1 > 0) ? (1 / densidadepopulacional1) : 0;
    float inversaDensidade2 = (densidadepopulacional2 > 0) ? (1 / densidadepopulacional2) : 0;

    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + inversaDensidade1;
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + inversaDensidade2;

    // Exibição dos Dados da Carta 1
    printf("\n    🎴 Dados da Carta %s 🎴   \n", codigodacidade1);
    printf(" 🏴 Estado: %s\n 🔢 Código: %s\n 🏙️  Nome da cidade: %s\n", estado1, codigodacidade1, nome1);
    printf(" 👥 População: %lu\n 🌍 Área: %.3f KM²\n 💰 PIB: %.3f Bilhões de Reais\n", populacao1, area1, pib1);
    printf(" 🏛️  Pontos Turísticos: %d\n", pontosturisticos1);
    printf(" 👤/📏 Densidade Populacional: %.3f habitantes/km²\n", densidadepopulacional1);
    printf(" 💵👤 PIB per Capita: %.3f\n", pibpercapita1);
    printf(" ⚡ Super Poder: %.3f\n", superpoder1);
    printf("\n-------------------------\n");

    // Exibição dos Dados da Carta 2
    printf("\n  🎴 Dados da Carta %s 🎴    \n", codigodacidade2);
    printf(" 🏴 Estado: %s\n 🔢 Código: %s\n 🏙️  Nome da cidade: %s\n", estado2, codigodacidade2, nome2);
    printf(" 👥 População: %lu\n 🌍 Área: %.3f KM²\n 💰 PIB: %.3f Bilhões de Reais\n", populacao2, area2, pib2);
    printf(" 🏛️  Pontos Turísticos: %d\n", pontosturisticos2);
    printf(" 👤📏 Densidade Populacional: %.3f habitantes/km²\n", densidadepopulacional2);
    printf(" 💵👤 PIB per Capita: %.3f\n", pibpercapita2);
    printf(" ⚡ Super Poder: %.3f\n", superpoder2);
    printf("\n-------------------------\n");

    // Comparação de Atributos
    // foi colocado ? : para definir o nome da cada carta
    printf("\n🔍 Comparação das Cartas 🔍\n");
    printf("\n             🎴 Carta 1: 1 --- 🎴 carta 2: 2 \n");
    printf("👥 População: %d\n", (populacao1 > populacao2) ? 1 : 2);
    printf("🌍 Área: %d\n", (area1 > area2) ? 1 : 2);
    printf("💰 PIB: %d\n", (pib1 > pib2) ? 1 : 2);
    printf("🏛️  Pontos Turísticos: %d\n", (pontosturisticos1 > pontosturisticos2) ? 1 : 2);
    printf("👤📏 Densidade Populacional: %d (vence a menor)\n", (densidadepopulacional1 < densidadepopulacional2) ? 1 : 2);
    printf("💵👤 PIB per Capita: %d\n", (pibpercapita1 > pibpercapita2) ? 1 : 2);
    printf("⚡ Super Poder: %d\n", (superpoder1 > superpoder2) ? 1 : 2);

    return 0;
}

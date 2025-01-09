#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Declarando variáveis para armazenar países.
    char pais_A[30], pais_B[30], pais_C[30], pais_D[30], pais_E[30], pais_F[30], pais_G[30], pais_H[30];

   // Declarando variáveis para armazenar os estados.
    char estado_A01[30], estado_A02[30], estado_A03[30], estado_A04[30], estado_B01[30], estado_B02[30], estado_B03[30], estado_B04[30];
    char estado_C01[30], estado_C02[30], estado_C03[30], estado_C04[30], estado_D01[30], estado_D02[30], estado_D03[30], estado_D04[30];
    char estado_E01[30], estado_E02[30], estado_E03[30], estado_E04[30], estado_F01[30], estado_F02[30], estado_F03[30], estado_F04[30];
    char estado_G01[30], estado_G02[30], estado_G03[30], estado_G04[30], estado_H01[30], estado_H02[30], estado_H03[30], estado_H04[30];

    //Defina as variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char cod_estado_A01[4], cod_estado_A02[4], cod_estado_A03[4], cod_estado_A04[4], cod_estado_B01[4], cod_estado_B02[4], cod_estado_B03[4], cod_estado_B04[4];
    char cod_estado_C01[4], cod_estado_C02[4], cod_estado_C03[4], cod_estado_C04[4], cod_estado_D01[4], cod_estado_D02[4], cod_estado_D03[4], cod_estado_D04[4];
    char cod_estado_E01[4], cod_estado_E02[4], cod_estado_E03[4], cod_estado_E04[4], cod_estado_F01[4], cod_estado_F02[4], cod_estado_F03[4], cod_estado_F04[4];
    char cod_estado_G01[4], cod_estado_G02[4], cod_estado_G03[4], cod_estado_G04[4], cod_estado_H01[4], cod_estado_H02[4], cod_estado_H03[4], cod_estado_H04[4];

    int populacao_A01, populacao_A02, populacao_A03, populacao_A04, populacao_B01, populacao_B02, populacao_B03, populacao_B04;
    int populacao_C01, populacao_C02, populacao_C03, populacao_C04, populacao_D01, populacao_D02, populacao_D03, populacao_D04;
    int populacao_E01, populacao_E02, populacao_E03, populacao_E04, populacao_F01, populacao_F02, populacao_F03, populacao_F04;
    int populacao_G01, populacao_G02, populacao_G03, populacao_G04, populacao_H01, populacao_H02, populacao_H03, populacao_H04;

    float area_km_A01, area_km_A02, area_km_A03, area_km_A04, area_km_B01, area_km_B02, area_km_B03, area_km_B04;
    float area_km_C01, area_km_C02, area_km_C03, area_km_C04, area_km_D01, area_km_D02, area_km_D03, area_km_D04;
    float area_km_E01, area_km_E02, area_km_E03, area_km_E04, area_km_F01, area_km_F02, area_km_F03, area_km_F04;
    float area_km_G01, area_km_G02, area_km_G03, area_km_G04, area_km_H01, area_km_H02, area_km_H03, area_km_H04;

    float PIB_A01, PIB_A02, PIB_A03, PIB_A04, PIB_B01, PIB_B02, PIB_B03, PIB_B04, PIB_C01, PIB_C02, PIB_C03, PIB_C04, PIB_D01, PIB_D02, PIB_D03, PIB_D04;
    float PIB_E01, PIB_E02, PIB_E03, PIB_E04, PIB_F01, PIB_F02, PIB_F03, PIB_F04, PIB_G01, PIB_G02, PIB_G03, PIB_G04, PIB_H01, PIB_H02, PIB_H03, PIB_H04;

    int pontos_turisticos_A01, pontos_turisticos_A02, pontos_turisticos_A03, pontos_turisticos_A04, pontos_turisticos_B01, pontos_turisticos_B02, pontos_turisticos_B03;
    int pontos_turisticos_B04, pontos_turisticos_C01, pontos_turisticos_C02, pontos_turisticos_C03, pontos_turisticos_C04, pontos_turisticos_D01, pontos_turisticos_D02;
    int pontos_turisticos_D03, pontos_turisticos_D04, pontos_turisticos_E01, pontos_turisticos_E02, pontos_turisticos_E03, pontos_turisticos_E04, pontos_turisticos_F01;
    int pontos_turisticos_F02, pontos_turisticos_F03, pontos_turisticos_F04, pontos_turisticos_G01, pontos_turisticos_G02, pontos_turisticos_G03, pontos_turisticos_G04;
    int pontos_turisticos_H01, pontos_turisticos_H02, pontos_turisticos_H03, pontos_turisticos_H04;
    
    // Variáveis de densidade populacional e PIB per Capita:
    float densidade_pp_A01, densidade_pp_A02, densidade_pp_A03, densidade_pp_A04, densidade_pp_B01, densidade_pp_B02, densidade_pp_B03, densidade_pp_B04;
    float densidade_pp_C01, densidade_pp_C02, densidade_pp_C03, densidade_pp_C04, densidade_pp_D01, densidade_pp_D02, densidade_pp_D03, densidade_pp_D04;
    float densidade_pp_E01, densidade_pp_E02, densidade_pp_E03, densidade_pp_E04, densidade_pp_F01, densidade_pp_F02, densidade_pp_F03, densidade_pp_F04;
    float densidade_pp_G01, densidade_pp_G02, densidade_pp_G03, densidade_pp_G04, densidade_pp_H01, densidade_pp_H02, densidade_pp_H03, densidade_pp_H04;

    float PIB_capita_A01, PIB_capita_A02, PIB_capita_A03, PIB_capita_A04, PIB_capita_B01, PIB_capita_B02, PIB_capita_B03, PIB_capita_B04;
    float PIB_capita_C01, PIB_capita_C02, PIB_capita_C03, PIB_capita_C04, PIB_capita_D01, PIB_capita_D02, PIB_capita_D03, PIB_capita_D04;
    float PIB_capita_E01, PIB_capita_E02, PIB_capita_E03, PIB_capita_E04, PIB_capita_F01, PIB_capita_F02, PIB_capita_F03, PIB_capita_F04;
    float PIB_capita_G01, PIB_capita_G02, PIB_capita_G03, PIB_capita_G04, PIB_capita_H01, PIB_capita_H02, PIB_capita_H03, PIB_capita_H04;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.


    // Cadastro do País_A:
    printf("Digite o nome do País: \n");
    scanf("%s", pais_A);

    printf("\n ----- País cadastrado com sucesso ----- \n\n");

    //Cadastro do primeiro Estado:
    printf("Digite o nome do primeiro Estado: \n");
    scanf("%s", estado_A01);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_A01);

    printf("Digite a população: \n");
    scanf("%d", &populacao_A01);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_A01);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_A01);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_A01);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_A01 = (float) populacao_A01 / area_km_A01;
    PIB_capita_A01 = (float) PIB_A01 / populacao_A01;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do segundo Estado:
    printf("Digite o nome do segundo Estado: \n");
    scanf("%s", estado_A02);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_A02);

    printf("Digite a população: \n");
    scanf("%d", &populacao_A02);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_A02);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_A02);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_A02);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_A02 = (float) populacao_A02 / area_km_A02;
    PIB_capita_A02 = (float) PIB_A02 / populacao_A02;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do terceiro Estado:
    printf("Digite o nome do terceiro Estado: \n");
    scanf("%s", estado_A03);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_A03);

    printf("Digite a população: \n");
    scanf("%d", &populacao_A03);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_A03);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_A03);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_A03);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_A03 = (float) populacao_A03 / area_km_A03;
    PIB_capita_A03 = (float) PIB_A03 / populacao_A03;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do quarto Estado:
    printf("Digite o nome do quarto Estado: \n");
    scanf("%s", estado_A04);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_A04);

    printf("Digite a população: \n");
    scanf("%d", &populacao_A04);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_A04);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_A04);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_A04);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_A04 = (float) populacao_A04 / area_km_A04;
    PIB_capita_A04 = (float) PIB_A04 / populacao_A04;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");


    // Cadastro do País_B:
    printf("Digite o nome do País: \n");
    scanf("%s", pais_B);

    printf("\n ----- País cadastrado com sucesso ----- \n\n");

    //Cadastro do primeiro Estado:
    printf("Digite o nome do primeiro Estado: \n");
    scanf("%s", estado_B01);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_B01);

    printf("Digite a população: \n");
    scanf("%d", &populacao_B01);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_B01);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_B01);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_B01);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_B01 = (float) populacao_B01 / area_km_B01;
    PIB_capita_B01 = (float) PIB_B01 / populacao_B01;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do segundo Estado:
    printf("Digite o nome do segundo Estado: \n");
    scanf("%s", estado_B02);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_B02);

    printf("Digite a população: \n");
    scanf("%d", &populacao_B02);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_B02);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_B02);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_B02);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_B02 = (float) populacao_B02 / area_km_B02;
    PIB_capita_B02 = (float) PIB_B02 / populacao_B02;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do terceiro Estado:
    printf("Digite o nome do terceiro Estado: \n");
    scanf("%s", estado_B03);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_B03);

    printf("Digite a população: \n");
    scanf("%d", &populacao_B03);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_B03);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_B03);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_B03);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_B03 = (float) populacao_B03 / area_km_B03;
    PIB_capita_B03 = (float) PIB_B03 / populacao_B03;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do quarto Estado:
    printf("Digite o nome do quarto Estado: \n");
    scanf("%s", estado_B04);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_B04);

    printf("Digite a população: \n");
    scanf("%d", &populacao_B04);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_B04);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_B04);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_B04);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_B04 = (float) populacao_B04 / area_km_B04;
    PIB_capita_B04 = (float) PIB_B04 / populacao_B04;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");


    // Cadastro do País_C:
    printf("Digite o nome do País: \n");
    scanf("%s", pais_C);

    printf("\n ----- País cadastrado com sucesso ----- \n\n");

    //Cadastro do primeiro Estado:
    printf("Digite o nome do primeiro Estado: \n");
    scanf("%s", estado_C01);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_C01);

    printf("Digite a população: \n");
    scanf("%d", &populacao_C01);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_C01);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_C01);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_C01);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_C01 = (float) populacao_C01 / area_km_C01;
    PIB_capita_C01 = (float) PIB_C01 / populacao_C01;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do segundo Estado:
    printf("Digite o nome do segundo Estado: \n");
    scanf("%s", estado_C02);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_C02);

    printf("Digite a população: \n");
    scanf("%d", &populacao_C02);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_C02);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_C02);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_C02);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_C02 = (float) populacao_C02 / area_km_C02;
    PIB_capita_C02 = (float) PIB_C02 / populacao_C02;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do terceiro Estado:
    printf("Digite o nome do terceiro Estado: \n");
    scanf("%s", estado_C03);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_C03);

    printf("Digite a população: \n");
    scanf("%d", &populacao_C03);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_C03);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_C03);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_C03);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_C03 = (float) populacao_C03 / area_km_C03;
    PIB_capita_C03 = (float) PIB_C03 / populacao_C03;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do quarto Estado:
    printf("Digite o nome do quarto Estado: \n");
    scanf("%s", estado_C04);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_C04);

    printf("Digite a população: \n");
    scanf("%d", &populacao_C04);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_C04);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_C04);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_C04);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_C04 = (float) populacao_C04 / area_km_C04;
    PIB_capita_C04 = (float) PIB_C04 / populacao_C04;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");


    // Cadastro do País_D:
    printf("Digite o nome do País: \n");
    scanf("%s", pais_D);

    printf("\n ----- País cadastrado com sucesso ----- \n\n");

    //Cadastro do primeiro Estado:
    printf("Digite o nome do primeiro Estado: \n");
    scanf("%s", estado_D01);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_D01);

    printf("Digite a população: \n");
    scanf("%d", &populacao_D01);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_D01);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_D01);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_D01);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_D01 = (float) populacao_D01 / area_km_D01;
    PIB_capita_D01 = (float) PIB_D01 / populacao_D01;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do segundo Estado:
    printf("Digite o nome do segundo Estado: \n");
    scanf("%s", estado_D02);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_D02);

    printf("Digite a população: \n");
    scanf("%d", &populacao_D02);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_D02);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_D02);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_D02);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_D02 = (float) populacao_D02 / area_km_D02;
    PIB_capita_D02 = (float) PIB_D02 / populacao_D02;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do terceiro Estado:
    printf("Digite o nome do terceiro Estado: \n");
    scanf("%s", estado_D03);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_D03);

    printf("Digite a população: \n");
    scanf("%d", &populacao_D03);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_D03);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_D03);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_D03);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_D03 = (float) populacao_D03 / area_km_D03;
    PIB_capita_D03 = (float) PIB_D03 / populacao_D03;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do quarto Estado:
    printf("Digite o nome do quarto Estado: \n");
    scanf("%s", estado_D04);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_D04);

    printf("Digite a população: \n");
    scanf("%d", &populacao_D04);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_D04);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_D04);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_D04);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_D04 = (float) populacao_D04 / area_km_D04;
    PIB_capita_D04 = (float) PIB_D04 / populacao_D04;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");


    // Cadastro do País_E:
    printf("Digite o nome do País: \n");
    scanf("%s", pais_E);

    printf("\n ----- País cadastrado com sucesso ----- \n\n");

    //Cadastro do primeiro Estado:
    printf("Digite o nome do primeiro Estado: \n");
    scanf("%s", estado_E01);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_E01);

    printf("Digite a população: \n");
    scanf("%d", &populacao_E01);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_E01);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_E01);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_E01);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_E01 = (float) populacao_E01 / area_km_E01;
    PIB_capita_E01 = (float) PIB_E01 / populacao_E01;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do segundo Estado:
    printf("Digite o nome do segundo Estado: \n");
    scanf("%s", estado_E02);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_E02);

    printf("Digite a população: \n");
    scanf("%d", &populacao_E02);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_E02);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_E02);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_E02);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_E02 = (float) populacao_E02 / area_km_E02;
    PIB_capita_E02 = (float) PIB_E02 / populacao_E02;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do terceiro Estado:
    printf("Digite o nome do terceiro Estado: \n");
    scanf("%s", estado_E03);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_E03);

    printf("Digite a população: \n");
    scanf("%d", &populacao_E03);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_E03);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_E03);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_E03);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_E03 = (float) populacao_E03 / area_km_E03;
    PIB_capita_E03 = (float) PIB_E03 / populacao_E03;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do quarto Estado:
    printf("Digite o nome do quarto Estado: \n");
    scanf("%s", estado_E04);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_E04);

    printf("Digite a população: \n");
    scanf("%d", &populacao_E04);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_E04);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_E04);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_E04);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_E04 = (float) populacao_E04 / area_km_E04;
    PIB_capita_E04 = (float) PIB_E04 / populacao_E04;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");


    // Cadastro do País_F:
    printf("Digite o nome do País: \n");
    scanf("%s", pais_F);

    printf("\n ----- País cadastrado com sucesso ----- \n\n");

    //Cadastro do primeiro Estado:
    printf("Digite o nome do primeiro Estado: \n");
    scanf("%s", estado_F01);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_F01);

    printf("Digite a população: \n");
    scanf("%d", &populacao_F01);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_F01);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_F01);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_F01);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_F01 = (float) populacao_F01 / area_km_F01;
    PIB_capita_F01 = (float) PIB_F01 / populacao_F01;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do segundo Estado:
    printf("Digite o nome do segundo Estado: \n");
    scanf("%s", estado_F02);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_F02);

    printf("Digite a população: \n");
    scanf("%d", &populacao_F02);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_F02);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_F02);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_F02);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_F02 = (float) populacao_F02 / area_km_F02;
    PIB_capita_F02 = (float) PIB_F02 / populacao_F02;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do terceiro Estado:
    printf("Digite o nome do terceiro Estado: \n");
    scanf("%s", estado_F03);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_F03);

    printf("Digite a população: \n");
    scanf("%d", &populacao_F03);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_F03);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_F03);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_F03);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_F03 = (float) populacao_F03 / area_km_F03;
    PIB_capita_F03 = (float) PIB_F03 / populacao_F03;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do quarto Estado:
    printf("Digite o nome do quarto Estado: \n");
    scanf("%s", estado_F04);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_F04);

    printf("Digite a população: \n");
    scanf("%d", &populacao_F04);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_F04);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_F04);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_F04);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_F04 = (float) populacao_F04 / area_km_F04;
    PIB_capita_F04 = (float) PIB_F04 / populacao_F04;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");


    // Cadastro do País_G:
    printf("Digite o nome do País: \n");
    scanf("%s", pais_G);

    printf("\n ----- País cadastrado com sucesso ----- \n\n");

    //Cadastro do primeiro Estado:
    printf("Digite o nome do primeiro Estado: \n");
    scanf("%s", estado_G01);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_G01);

    printf("Digite a população: \n");
    scanf("%d", &populacao_G01);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_G01);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_G01);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_G01);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_G01 = (float) populacao_G01 / area_km_G01;
    PIB_capita_G01 = (float) PIB_G01 / populacao_G01;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do segundo Estado:
    printf("Digite o nome do segundo Estado: \n");
    scanf("%s", estado_G02);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_G02);

    printf("Digite a população: \n");
    scanf("%d", &populacao_G02);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_G02);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_G02);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_G02);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_G02 = (float) populacao_G02 / area_km_G02;
    PIB_capita_G02 = (float) PIB_G02 / populacao_G02;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do terceiro Estado:
    printf("Digite o nome do terceiro Estado: \n");
    scanf("%s", estado_G03);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_G03);

    printf("Digite a população: \n");
    scanf("%d", &populacao_G03);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_G03);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_G03);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_G03);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_G03 = (float) populacao_G03 / area_km_G03;
    PIB_capita_G03 = (float) PIB_G03 / populacao_G03;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do quarto Estado:
    printf("Digite o nome do quarto Estado: \n");
    scanf("%s", estado_G04);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_G04);

    printf("Digite a população: \n");
    scanf("%d", &populacao_G04);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_G04);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_G04);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_G04);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_G04 = (float) populacao_G04 / area_km_G04;
    PIB_capita_G04 = (float) PIB_G04 / populacao_G04;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");


    // Cadastro do País_H:
    printf("Digite o nome do País: \n");
    scanf("%s", pais_H);

    printf("\n ----- País cadastrado com sucesso ----- \n\n");

    //Cadastro do primeiro Estado:
    printf("Digite o nome do primeiro Estado: \n");
    scanf("%s", estado_H01);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_H01);

    printf("Digite a população: \n");
    scanf("%d", &populacao_H01);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_H01);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_H01);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_H01);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_H01 = (float) populacao_H01 / area_km_H01;
    PIB_capita_H01 = (float) PIB_H01 / populacao_H01;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do segundo Estado:
    printf("Digite o nome do segundo Estado: \n");
    scanf("%s", estado_H02);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_H02);

    printf("Digite a população: \n");
    scanf("%d", &populacao_H02);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_H02);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_H02);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_H02);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_H02 = (float) populacao_H02 / area_km_H02;
    PIB_capita_H02 = (float) PIB_H02 / populacao_H02;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do terceiro Estado:
    printf("Digite o nome do terceiro Estado: \n");
    scanf("%s", estado_H03);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_H03);

    printf("Digite a população: \n");
    scanf("%d", &populacao_H03);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_H03);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_H03);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_H03);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_H03 = (float) populacao_H03 / area_km_H03;
    PIB_capita_H03 = (float) PIB_H03 / populacao_H03;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");

    //Cadastro do quarto Estado:
    printf("Digite o nome do quarto Estado: \n");
    scanf("%s", estado_H04);

    printf("Digite o código do Estado: \n");
    scanf("%s", cod_estado_H04);

    printf("Digite a população: \n");
    scanf("%d", &populacao_H04);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area_km_H04);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB_H04);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_H04);

    //Cálculo da densidade populacional:
    //Cálculo do PIB per Capita:
    densidade_pp_H04 = (float) populacao_H04 / area_km_H04;
    PIB_capita_H04 = (float) PIB_H04 / populacao_H04;

    printf("\n **** Carta cadastrada com sucesso **** \n\n");



    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
     
    // País_A
    printf("\n -------- Primeiro Estado do País %s --------\n\n", pais_A);
    printf("Estado: %s\n", estado_A01);
    printf("Código: %s\n", cod_estado_A01);
    printf("População: %d\n", populacao_A01);
    printf("Área: %f\n", area_km_A01);
    printf("PIB: %f\n", PIB_A01);
    printf("Pontos turísticos: %d\n", pontos_turisticos_A01);
    printf("Densidade Populacional: %.2f\n", densidade_pp_A01);
    printf("PIB per Capita: %.2f\n", PIB_capita_A01);

    printf("\n -------- Segundo Estado do País %s --------\n\n", pais_A);
    printf("Estado: %s\n", estado_A02);
    printf("Código: %s\n", cod_estado_A02);
    printf("População: %d\n", populacao_A02);
    printf("Área: %f\n", area_km_A02);
    printf("PIB: %f\n", PIB_A02);
    printf("Pontos turísticos: %d\n", pontos_turisticos_A02);
    printf("Densidade Populacional: %.2f\n", densidade_pp_A02);
    printf("PIB per Capita: %.2f\n", PIB_capita_A02);

    printf("\n -------- Terceiro Estado do País %s --------\n\n", pais_A);
    printf("Estado: %s\n", estado_A03);
    printf("Código: %s\n", cod_estado_A03);
    printf("População: %d\n", populacao_A03);
    printf("Área: %f\n", area_km_A03);
    printf("PIB: %f\n", PIB_A03);
    printf("Pontos turísticos: %d\n", pontos_turisticos_A03);
    printf("Densidade Populacional: %.2f\n", densidade_pp_A03);
    printf("PIB per Capita: %.2f\n", PIB_capita_A03);

    printf("\n -------- Quarto Estado do País %s --------\n\n", pais_A);
    printf("Estado: %s\n", estado_A04);
    printf("Código: %s\n", cod_estado_A04);
    printf("População: %d\n", populacao_A04);
    printf("Área: %f\n", area_km_A04);
    printf("PIB: %f\n", PIB_A04);
    printf("Pontos turísticos: %d\n", pontos_turisticos_A04);
    printf("Densidade Populacional: %.2f\n", densidade_pp_A04);
    printf("PIB per Capita: %.2f\n", PIB_capita_A04);


    // País_B
    printf("\n -------- Primeiro Estado do País %s --------\n\n", pais_B);
    printf("Estado: %s\n", estado_B01);
    printf("Código: %s\n", cod_estado_B01);
    printf("População: %d\n", populacao_B01);
    printf("Área: %f\n", area_km_B01);
    printf("PIB: %f\n", PIB_B01);
    printf("Pontos turísticos: %d\n", pontos_turisticos_B01);
    printf("Densidade Populacional: %.2f\n", densidade_pp_B01);
    printf("PIB per Capita: %.2f\n", PIB_capita_B01);

    printf("\n -------- Segundo Estado do País %s --------\n\n", pais_B);
    printf("Estado: %s\n", estado_B02);
    printf("Código: %s\n", cod_estado_B02);
    printf("População: %d\n", populacao_B02);
    printf("Área: %f\n", area_km_B02);
    printf("PIB: %f\n", PIB_B02);
    printf("Pontos turísticos: %d\n", pontos_turisticos_B02);
    printf("Densidade Populacional: %.2f\n", densidade_pp_B02);
    printf("PIB per Capita: %.2f\n", PIB_capita_B02);

    printf("\n -------- Terceiro Estado do País %s --------\n\n", pais_B);
    printf("Estado: %s\n", estado_B03);
    printf("Código: %s\n", cod_estado_B03);
    printf("População: %d\n", populacao_B03);
    printf("Área: %f\n", area_km_B03);
    printf("PIB: %f\n", PIB_B03);
    printf("Pontos turísticos: %d\n", pontos_turisticos_B03);
    printf("Densidade Populacional: %.2f\n", densidade_pp_B03);
    printf("PIB per Capita: %.2f\n", PIB_capita_B03);

    printf("\n -------- Quarto Estado do País %s --------\n\n", pais_B);
    printf("Estado: %s\n", estado_B04);
    printf("Código: %s\n", cod_estado_B04);
    printf("População: %d\n", populacao_B04);
    printf("Área: %f\n", area_km_B04);
    printf("PIB: %f\n", PIB_B04);
    printf("Pontos turísticos: %d\n", pontos_turisticos_B04);
    printf("Densidade Populacional: %.2f\n", densidade_pp_B04);
    printf("PIB per Capita: %.2f\n", PIB_capita_B04);


    // País_C
    printf("\n -------- Primeiro Estado do País %s --------\n\n", pais_C);
    printf("Estado: %s\n", estado_C01);
    printf("Código: %s\n", cod_estado_C01);
    printf("População: %d\n", populacao_C01);
    printf("Área: %f\n", area_km_C01);
    printf("PIB: %f\n", PIB_C01);
    printf("Pontos turísticos: %d\n", pontos_turisticos_C01);
    printf("Densidade Populacional: %.2f\n", densidade_pp_C01);
    printf("PIB per Capita: %.2f\n", PIB_capita_C01);

    printf("\n -------- Segundo Estado do País %s --------\n\n", pais_C);
    printf("Estado: %s\n", estado_C02);
    printf("Código: %s\n", cod_estado_C02);
    printf("População: %d\n", populacao_C02);
    printf("Área: %f\n", area_km_C02);
    printf("PIB: %f\n", PIB_C02);
    printf("Pontos turísticos: %d\n", pontos_turisticos_C02);
    printf("Densidade Populacional: %.2f\n", densidade_pp_C02);
    printf("PIB per Capita: %.2f\n", PIB_capita_C02);

    printf("\n -------- Terceiro Estado do País %s --------\n\n", pais_C);
    printf("Estado: %s\n", estado_C03);
    printf("Código: %s\n", cod_estado_C03);
    printf("População: %d\n", populacao_C03);
    printf("Área: %f\n", area_km_C03);
    printf("PIB: %f\n", PIB_C03);
    printf("Pontos turísticos: %d\n", pontos_turisticos_C03);
    printf("Densidade Populacional: %.2f\n", densidade_pp_C03);
    printf("PIB per Capita: %.2f\n", PIB_capita_C03);

    printf("\n -------- Quarto Estado do País %s --------\n\n", pais_C);
    printf("Estado: %s\n", estado_C04);
    printf("Código: %s\n", cod_estado_C04);
    printf("População: %d\n", populacao_C04);
    printf("Área: %f\n", area_km_C04);
    printf("PIB: %f\n", PIB_C04);
    printf("Pontos turísticos: %d\n", pontos_turisticos_C04);
    printf("Densidade Populacional: %.2f\n", densidade_pp_C04);
    printf("PIB per Capita: %.2f\n", PIB_capita_C04);


     // País_D
    printf("\n -------- Primeiro Estado do País %s --------\n\n", pais_D);
    printf("Estado: %s\n", estado_D01);
    printf("Código: %s\n", cod_estado_D01);
    printf("População: %d\n", populacao_D01);
    printf("Área: %f\n", area_km_D01);
    printf("PIB: %f\n", PIB_D01);
    printf("Pontos turísticos: %d\n", pontos_turisticos_D01);
    printf("Densidade Populacional: %.2f\n", densidade_pp_D01);
    printf("PIB per Capita: %.2f\n", PIB_capita_D01);

    printf("\n -------- Segundo Estado do País %s --------\n\n", pais_D);
    printf("Estado: %s\n", estado_D02);
    printf("Código: %s\n", cod_estado_D02);
    printf("População: %d\n", populacao_D02);
    printf("Área: %f\n", area_km_D02);
    printf("PIB: %f\n", PIB_D02);
    printf("Pontos turísticos: %d\n", pontos_turisticos_D02);
    printf("Densidade Populacional: %.2f\n", densidade_pp_D02);
    printf("PIB per Capita: %.2f\n", PIB_capita_D02);

    printf("\n -------- Terceiro Estado do País %s --------\n\n", pais_D);
    printf("Estado: %s\n", estado_D03);
    printf("Código: %s\n", cod_estado_D03);
    printf("População: %d\n", populacao_D03);
    printf("Área: %f\n", area_km_D03);
    printf("PIB: %f\n", PIB_D03);
    printf("Pontos turísticos: %d\n", pontos_turisticos_D03);
    printf("Densidade Populacional: %.2f\n", densidade_pp_D03);
    printf("PIB per Capita: %.2f\n", PIB_capita_D03);

    printf("\n -------- Quarto Estado do País %s --------\n\n", pais_D);
    printf("Estado: %s\n", estado_D04);
    printf("Código: %s\n", cod_estado_D04);
    printf("População: %d\n", populacao_D04);
    printf("Área: %f\n", area_km_D04);
    printf("PIB: %f\n", PIB_D04);
    printf("Pontos turísticos: %d\n", pontos_turisticos_D04);
    printf("Densidade Populacional: %.2f\n", densidade_pp_D04);
    printf("PIB per Capita: %.2f\n", PIB_capita_D04);


     // País_E
    printf("\n -------- Primeiro Estado do País %s --------\n\n", pais_E);
    printf("Estado: %s\n", estado_E01);
    printf("Código: %s\n", cod_estado_E01);
    printf("População: %d\n", populacao_E01);
    printf("Área: %f\n", area_km_E01);
    printf("PIB: %f\n", PIB_E01);
    printf("Pontos turísticos: %d\n", pontos_turisticos_E01);
    printf("Densidade Populacional: %.2f\n", densidade_pp_E01);
    printf("PIB per Capita: %.2f\n", PIB_capita_E01);

    printf("\n -------- Segundo Estado do País %s --------\n\n", pais_E);
    printf("Estado: %s\n", estado_E02);
    printf("Código: %s\n", cod_estado_E02);
    printf("População: %d\n", populacao_E02);
    printf("Área: %f\n", area_km_E02);
    printf("PIB: %f\n", PIB_E02);
    printf("Pontos turísticos: %d\n", pontos_turisticos_E02);
    printf("Densidade Populacional: %.2f\n", densidade_pp_E02);
    printf("PIB per Capita: %.2f\n", PIB_capita_E02);

    printf("\n -------- Terceiro Estado do País %s --------\n\n", pais_E);
    printf("Estado: %s\n", estado_E03);
    printf("Código: %s\n", cod_estado_E03);
    printf("População: %d\n", populacao_E03);
    printf("Área: %f\n", area_km_E03);
    printf("PIB: %f\n", PIB_E03);
    printf("Pontos turísticos: %d\n", pontos_turisticos_E03);
    printf("Densidade Populacional: %.2f\n", densidade_pp_E03);
    printf("PIB per Capita: %.2f\n", PIB_capita_E03);

    printf("\n -------- Quarto Estado do País %s --------\n\n", pais_E);
    printf("Estado: %s\n", estado_E04);
    printf("Código: %s\n", cod_estado_E04);
    printf("População: %d\n", populacao_E04);
    printf("Área: %f\n", area_km_E04);
    printf("PIB: %f\n", PIB_E04);
    printf("Pontos turísticos: %d\n", pontos_turisticos_E04);
    printf("Densidade Populacional: %.2f\n", densidade_pp_E04);
    printf("PIB per Capita: %.2f\n", PIB_capita_E04);


     // País_F
    printf("\n -------- Primeiro Estado do País %s --------\n\n", pais_F);
    printf("Estado: %s\n", estado_F01);
    printf("Código: %s\n", cod_estado_F01);
    printf("População: %d\n", populacao_F01);
    printf("Área: %f\n", area_km_F01);
    printf("PIB: %f\n", PIB_F01);
    printf("Pontos turísticos: %d\n", pontos_turisticos_F01);
    printf("Densidade Populacional: %.2f\n", densidade_pp_F01);
    printf("PIB per Capita: %.2f\n", PIB_capita_F01);

    printf("\n -------- Segundo Estado do País %s --------\n\n", pais_F);
    printf("Estado: %s\n", estado_F02);
    printf("Código: %s\n", cod_estado_F02);
    printf("População: %d\n", populacao_F02);
    printf("Área: %f\n", area_km_F02);
    printf("PIB: %f\n", PIB_F02);
    printf("Pontos turísticos: %d\n", pontos_turisticos_F02);
    printf("Densidade Populacional: %.2f\n", densidade_pp_F02);
    printf("PIB per Capita: %.2f\n", PIB_capita_F02);

    printf("\n -------- Terceiro Estado do País %s --------\n\n", pais_F);
    printf("Estado: %s\n", estado_F03);
    printf("Código: %s\n", cod_estado_F03);
    printf("População: %d\n", populacao_F03);
    printf("Área: %f\n", area_km_F03);
    printf("PIB: %f\n", PIB_F03);
    printf("Pontos turísticos: %d\n", pontos_turisticos_F03);
    printf("Densidade Populacional: %.2f\n", densidade_pp_F03);
    printf("PIB per Capita: %.2f\n", PIB_capita_F03);

    printf("\n -------- Quarto Estado do País %s --------\n\n", pais_F);
    printf("Estado: %s\n", estado_F04);
    printf("Código: %s\n", cod_estado_F04);
    printf("População: %d\n", populacao_F04);
    printf("Área: %f\n", area_km_F04);
    printf("PIB: %f\n", PIB_F04);
    printf("Pontos turísticos: %d\n", pontos_turisticos_F04);
    printf("Densidade Populacional: %.2f\n", densidade_pp_F04);
    printf("PIB per Capita: %.2f\n", PIB_capita_F04);


     // País_G
    printf("\n -------- Primeiro Estado do País %s --------\n\n", pais_G);
    printf("Estado: %s\n", estado_G01);
    printf("Código: %s\n", cod_estado_G01);
    printf("População: %d\n", populacao_G01);
    printf("Área: %f\n", area_km_G01);
    printf("PIB: %f\n", PIB_G01);
    printf("Pontos turísticos: %d\n", pontos_turisticos_G01);
    printf("Densidade Populacional: %.2f\n", densidade_pp_G01);
    printf("PIB per Capita: %.2f\n", PIB_capita_G01);

    printf("\n -------- Segundo Estado do País %s --------\n\n" ,pais_G);
    printf("Estado: %s\n", estado_G02);
    printf("Código: %s\n", cod_estado_G02);
    printf("População: %d\n", populacao_G02);
    printf("Área: %f\n", area_km_G02);
    printf("PIB: %f\n", PIB_G02);
    printf("Pontos turísticos: %d\n", pontos_turisticos_G02);
    printf("Densidade Populacional: %.2f\n", densidade_pp_G02);
    printf("PIB per Capita: %.2f\n", PIB_capita_G02);

    printf("\n -------- Terceiro Estado do País %s --------\n\n", pais_G);
    printf("Estado: %s\n", estado_G03);
    printf("Código: %s\n", cod_estado_G03);
    printf("População: %d\n", populacao_G03);
    printf("Área: %f\n", area_km_G03);
    printf("PIB: %f\n", PIB_G03);
    printf("Pontos turísticos: %d\n", pontos_turisticos_G03);
    printf("Densidade Populacional: %.2f\n", densidade_pp_G03);
    printf("PIB per Capita: %.2f\n", PIB_capita_G03);

    printf("\n -------- Quarto Estado do País %s --------\n\n", pais_G);
    printf("Estado: %s\n", estado_G04);
    printf("Código: %s\n", cod_estado_G04);
    printf("População: %d\n", populacao_G04);
    printf("Área: %f\n", area_km_G04);
    printf("PIB: %f\n", PIB_G04);
    printf("Pontos turísticos: %d\n", pontos_turisticos_G04);
    printf("Densidade Populacional: %.2f\n", densidade_pp_G04);
    printf("PIB per Capita: %.2f\n", PIB_capita_G04);


     // País_H
    printf("\n -------- Primeiro Estado do País %s --------\n\n", pais_H);
    printf("Estado: %s\n", estado_H01);
    printf("Código: %s\n", cod_estado_H01);
    printf("População: %d\n", populacao_H01);
    printf("Área: %f\n", area_km_H01);
    printf("PIB: %f\n", PIB_H01);
    printf("Pontos turísticos: %d\n", pontos_turisticos_H01);
    printf("Densidade Populacional: %.2f\n", densidade_pp_H01);
    printf("PIB per Capita: %.2f\n", PIB_capita_H01);

    printf("\n -------- Segundo Estado do País %s --------\n\n", pais_H);
    printf("Estado: %s\n", estado_H02);
    printf("Código: %s\n", cod_estado_H02);
    printf("População: %d\n", populacao_H02);
    printf("Área: %f\n", area_km_H02);
    printf("PIB: %f\n", PIB_H02);
    printf("Pontos turísticos: %d\n", pontos_turisticos_H02);
    printf("Densidade Populacional: %.2f\n", densidade_pp_H02);
    printf("PIB per Capita: %.2f\n", PIB_capita_H02);

    printf("\n -------- Terceiro Estado do País %s --------\n\n", pais_H);
    printf("Estado: %s\n", estado_H03);
    printf("Código: %s\n", cod_estado_H03);
    printf("População: %d\n", populacao_H03);
    printf("Área: %f\n", area_km_H03);
    printf("PIB: %f\n", PIB_H03);
    printf("Pontos turísticos: %d\n", pontos_turisticos_H03);
    printf("Densidade Populacional: %.2f\n", densidade_pp_H03);
    printf("PIB per Capita: %.2f\n", PIB_capita_H03);

    printf("\n -------- Quarto Estado do País %s --------\n\n", pais_H);
    printf("Estado: %s\n", estado_H04);
    printf("Código: %s\n", cod_estado_H04);
    printf("População: %d\n", populacao_H04);
    printf("Área: %f\n", area_km_H04);
    printf("PIB: %f\n", PIB_H04);
    printf("Pontos turísticos: %d\n", pontos_turisticos_H04);
    printf("Densidade Populacional: %.2f\n", densidade_pp_H04);
    printf("PIB per Capita: %.2f\n", PIB_capita_H04);

    return 0;
}

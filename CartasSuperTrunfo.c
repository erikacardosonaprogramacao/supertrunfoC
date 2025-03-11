#include <stdio.h>

int main(){

    char estado1[50], estado2[50], codigocarta1[50], codigocarta2[50], nomedacidade1[50], nomedacidade2[50]; 
    int populacaocarta1, numerodepontosturisticoscarta1, populacaocarta2, numerodepontosturisticoscarta2; 
    float areacarta1, pibcarta1, areacarta2, pibcarta2, densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2; 

    //Início do Programa
    
    printf("Desafio Aventureiro - Super Trunfo\n\n");
    
    printf("Olá! Seja Bem-Vindo!\nPor gentileza, insira os dados da Carta 01:\n\n");

    //INSERÇÃO DOS DADOS DA CARTA 01//

    printf("Estado: ");
    scanf(" %[^\n]", estado1);
    
    printf("Código da Carta: ");
    scanf(" %[^\n]", codigocarta1);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomedacidade1);
    
    printf("População: ");
    scanf("%d", &populacaocarta1);
    
    printf("Área (em Km²): ");
    scanf("%f", &areacarta1);
    
    printf("PIB: ");
    scanf("%f", &pibcarta1);
    
    printf("Nº de Pontos Turísticos: ");
    scanf("%d", &numerodepontosturisticoscarta1);

   //Cálculos da carta 01 referente a densidade populacional e pib per capita

   densidadepopulacional1 = (float)(populacaocarta1 / areacarta1);
   pibpercapita1 = pibpercapita1 = (float)(pibcarta1 / populacaocarta1);

   printf("\n");

   //INSERÇÃO DOS DADOS DA CARTA 02//

    printf("Agora, por gentileza, insira os dados da carta 02\n");

    printf("Estado: ");
    scanf(" %[^\n]", estado2);
    
    printf("Código da Carta: ");
    scanf(" %[^\n]", codigocarta2);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomedacidade2);
    
    printf("População: ");
    scanf("%d", &populacaocarta2);
    
    printf("Área (em Km²): ");
    scanf("%f", &areacarta2);
    
    printf("PIB: ");
    scanf("%f", &pibcarta2);
    
    printf("Nº de Pontos Turísticos: ");
    scanf("%d", &numerodepontosturisticoscarta2);

    //Cálculos da carta 02 referente a densidade populacional e pib per capita

    densidadepopulacional2 = (float)(populacaocarta2 / areacarta2);
    pibpercapita2 = (float)(pibcarta2 / populacaocarta2);

    //finalização de preenchimento da entrada de dados.

    printf("\n\n**********************\n\n");

    printf("CARTA 01: \n\n");

    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacaocarta1);
    printf("Área:  %.2f Km²\n", areacarta1);
    printf("PIB: %.2f Bilhões de Reais\n", pibcarta1);
    printf("Nº Pontos Turísticos: %d\n", numerodepontosturisticoscarta1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per capita: %.2f reais por pessoa\n", pibpercapita1);
    
    

    printf("\n\n**********************\n\n");



    printf("CARTA 02: \n\n");

    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacaocarta2);
    printf("Área:  %.2f Km²\n", areacarta2);
    printf("PIB: %.2f Bilhões de Reais\n", pibcarta2);
    printf("Nº Pontos Turísticos: %d\n", numerodepontosturisticoscarta2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per capita: %.2f reais por pessoa\n", pibpercapita2);

    return 0;

    //FIM DO PROGRAMA
}

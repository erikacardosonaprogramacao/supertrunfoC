#include <stdio.h>

int main(){
        //Variaveis 
    char estado[50] = "São Paulo", estado2[50] = "São Paulo";
    char codigodacarta[50] = "B01", codigodacarta2[50] = "B02";
    char nomedacidade[50] = "Bauru", nomedacidade2[50] = "Arealva";
    int populacao = 379174, populacao2 = 479174;
    float area = 668.684, area2 = 557.573;
    float pib = 16000000000, pib2 = 15000000000;
    int pontosturisticos = 3, pontosturisticos2 = 3;
    float densidadepopulacional = populacao / area, densidadepopulacional2 = populacao2 / area2;
    float pibpercapita = pib / populacao, pibpercapita2 = pib2 / populacao2;
    float inversaDensidade = (densidadepopulacional > 0) ? (1 / densidadepopulacional) : 0;
    float inversadensidade2 = (densidadepopulacional > 0) ? (1 / densidadepopulacional2) : 0;
    float superpoder = populacao + area + pib + pontosturisticos + pibpercapita + inversaDensidade;
    float superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + inversadensidade2;

             //Cadastro das cartas!!

    //Cadastro da Carta 1
    printf("\n*** Carta 1 ***\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigodacarta);
    printf("Nome da Cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área: %.3f\n", area);
    printf("PIB: %.3f\n", pib);
    printf("Pontos Turisticos: %d\n", pontosturisticos);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional);
    printf("PIB per Capita: %.2f\n", pibpercapita);
    printf("SUPER PODER: %.3f\n", superpoder);

    //Cadastro da Carta 2
    printf("\n*** Carta 2 ***\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigodacarta2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f\n", area2);
    printf("PIB: %.3f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);
    printf("SUPER PODER: %.3f\n", superpoder2);

    printf("\n*** Comparação de Atributos ***\n");
    printf("\n*** Carta %s ***\nPopulação: %d\n", codigodacarta, populacao); 
    printf("\n*** Carta %s ***\nPopulação: %d\n", codigodacarta2, populacao2); 

    if(populacao > populacao2){
        printf("\n \U0001F389         \U0001F389        \U0001F389\n");
        printf("\nCarta %s é a Vencedora!\n", codigodacarta);
        printf("\n \U0001F389         \U0001F389        \U0001F389\n");
    } else {
        printf("\n \U0001F389         \U0001F389        \U0001F389\n");
        printf("\nCarta %s é a Vencedora!\n", codigodacarta2);
        printf("\n \U0001F389         \U0001F389        \U0001F389\n");
    }

    return 0;

}
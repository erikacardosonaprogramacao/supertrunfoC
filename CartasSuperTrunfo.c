#include <stdio.h>


int main() {

    int populacao1 = 2003000; 
    int pontosTuristico1 = 30; 
    char estado1[50] = "Amazonas"; 
    char codigoDacarta1[50] = "A02"; 
    char nomeDacidade1[50] = "Manaus"; 
    float PIB1 = 103000000; 
    float area1 = 11401.092;


    int populacao2 = 11451999; 
    int pontosTuristico2 = 30; 
    char estado2[50] = "São Paulo"; 
    char codigoDacarta2[50] = "A02"; 
    char nomeDacidade2[50] = "São Paulo"; 
    float PIB2 = 103000000; 
    float area2 = 152120;


    printf("Desafio Carta 2\n");
    printf("Nome da Cidade: %s\n", nomeDacidade1);
    printf("Estado: %s\n", estado1);
    printf("Populacao: %d\n", populacao1);
    printf("Pontos Turisticos: %d\n", pontosTuristico1);
    printf("Codigo da Carta: %s\n", codigoDacarta1); 
    printf("PIB: %.2f\n", PIB1); 
    printf("Area: %.2f km^2\n", area1); 

    printf("\nDesafio Carta 1\n");
    printf("Nome da Cidade: %s\n", nomeDacidade2);
    printf("Estado: %s\n", estado2);
    printf("Populacao: %d\n", populacao2);
    printf("Pontos Turisticos: %d\n", pontosTuristico2);
    printf("Codigo da Carta: %s\n", codigoDacarta2); 
    printf("PIB: %.2f\n", PIB2); 
    printf("Area: %.2f km^2\n", area2); 

    return 0;
}

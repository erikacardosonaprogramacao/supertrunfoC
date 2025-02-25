#include <stdio.h>

int main() {

   
    int populacao = 2003000; 
    int pontosTuristico = 30; 
    char estado[50] = "Amazonas"; 
    char codigoDacarta[50] = "A01"; 
    char nomeDacidade[50] = "Manaus"; 
    float PIB = 103000000; 
    float area = 11401.092;

    printf("Nome da Cidade: %s\n", nomeDacidade);
    printf("Estado: %s\n", estado);
    printf("Populacao: %d\n", populacao);
    printf("Pontos Turisticos: %d\n", pontosTuristico);
    printf("Codigo da Carta: %s\n", codigoDacarta); 
    printf("PIB: %.2f\n", PIB); 
    printf("Area: %.2f km^2\n", area); 
    


    return 0;

}

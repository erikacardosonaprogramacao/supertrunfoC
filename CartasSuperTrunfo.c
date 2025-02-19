#include <stdio.h>

#define MAX_CARTAS 2

typedef struct {
    char estado[50];
    char codigo[5];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

    
  





int main() {
    Carta carta1 = {"São Paulo", "SP01", "São Paulo", 12300000, 1521.11, 699000.00, 10};
    Carta carta2 = {"Rio de Janeiro", "RJ02", "Rio de Janeiro", 6775561, 1200.27, 364000.50, 15};

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontosTuristicos);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontosTuristicos);
     
        

           

    return 0;
}

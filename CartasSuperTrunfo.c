#include <stdio.h>

int main() {  
    printf("Desafio SuperTriunfo!\n");

    char estado[50];
    char codigo_da_carta[50];
    char nome_da_cidade[50];
    int população;
    float area_em_km2;
    float pib;
    int numeros_de_pontos_turisticos;
    
    printf("Digite seu estado: \n");
    scanf("%s", estado);
    
    printf("Digite o código da carta: \n");
    scanf("%s", codigo_da_carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade);

    printf("Digite a populacão: \n");
    scanf("%d", &população);

    printf("Digite a área em km2: \n");
    scanf("%f", &area_em_km2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numeros_de_pontos_turisticos);
    
    return 0;
}

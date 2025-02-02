#include <stdio.h>

//Cadastro de variaveis//

int main(){
    
    char nome[50];
    char codigo[3];
    float populacao; 
    float area;
    float PIB;
    int turisticos;

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);
    printf("Cidade: %s\n", &nome);

    printf("Digite o codigo da cidade: ");
    scanf("%s", &codigo);
    printf("Codigo: %s\n", &codigo);

    printf("Digite a populacao da cidade: ");
    scanf("%f", &populacao);
    printf("Populacao: %f\n", populacao);

    printf("Digite a area da cidade: ");
    scanf("%f", &area);
    printf("Area da cidade: %f km\n", area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);
    printf("PIB: %f reais\n");

    printf("Digite o numero de pontos turisiticos: ");
    scanf("%d", &turisticos);
    printf("Pontos turisticos: %d",turisticos);

    return 0;

}
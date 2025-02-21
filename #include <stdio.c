#include <stdio.h>

//Cadastro de variaveis//
//Nome da cidade
//Codigo da cidade  
//Populacao da cidade
//Area da cidade
//PIB da cidade
//Numero de pontos turisticos//

char nome[50], codigo[5];
float area, PIB;
int populacao, pontosTuristicos;

void entradaDados(){
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome);
   
    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo);
    
    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao);
   
    printf("Digite a area da cidade: ");
    scanf("%f", &area);
   
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    printf("\n"); // Adiciona uma linha em branco//
    printf("\n"); // Adiciona uma linha em branco//
// Cálculo da média da densidade populacional e do PIB per capita//
}
float calculoMedia(){
    return (populacao) / (area);
    return (PIB) / (populacao);
}

void exibirMedia(float media){; 
    printf("Densidade populacional: %.2fpessoas/km²\n", media);
    printf("PIB per capita: R$%.2f\n", media);
}

int main(){
    entradaDados();
    printf("Cidade: %s\n", nome);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %dmi.\n", populacao);
    printf("Area da cidade: %fkm²\n", area);
    printf("PIB: R$%f\n", PIB);
    printf("Pontos turisticos: %d\n", pontosTuristicos);
    float media = calculoMedia();
    exibirMedia(media);
    return 0;
}

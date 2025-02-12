#include <stdio.h>

int main() {
    int Populacao;
    float Area;
    double PIB;
    int Pontos_Turisticos;
    float Densidade_Populacional;
    double PIB_per_capita;

    printf("\n-------- SUPER TRUNFO --------\n");

    // Cadastrando a Carta
    printf("Insira a quantidade populacional do país: ");
    scanf("%d", &Populacao);  

    printf("Insira a Área do país (em km²): ");
    scanf("%f", &Area);  
    
    printf("Insira o PIB do país (em trilhões): ");
    scanf("%lf", &PIB);  

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &Pontos_Turisticos);  

    // Cálculo das métricas
    Densidade_Populacional = (float)Populacao / Area;  
    PIB_per_capita = (PIB * 1e12) / Populacao;  

    // Exibindo informações
    printf("\n--------  Informações da sua Carta  --------\n");
    printf("População do país: %d habitantes\n", Populacao);
    printf("Área do país: %.2f km²\n", Area);
    printf("PIB do país: %.2lf trilhões\n", PIB);
    printf("Pontos turísticos: %d\n", Pontos_Turisticos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", Densidade_Populacional);
    printf("PIB per Capita: %.2lf reais\n", PIB_per_capita);

    return 0;
}

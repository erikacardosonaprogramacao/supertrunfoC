#include <stdio.h>

int main() {
    int Populacao;
    float Area;
    double PIB;
    int Pontos_Turisticos;

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

    // Fim do cadastro
    printf("\nCarta cadastrada com sucesso!!\n");

    // Exibindo valores cadastrados
    printf("População do país: %d habitantes\n", Populacao);
    printf("Área do país: %.2f km²\n", Area);
    printf("PIB do país: %.2lf trilhões\n", PIB);
    printf("Pontos turísticos: %d\n", Pontos_Turisticos);

    return 0;
}

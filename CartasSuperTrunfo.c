#include <stdio.h>

int main() {
    int Populacao, Populacao2;
    float Area, Area2;
    double PIB, PIB2;
    int Pontos_Turisticos, Pontos_Turisticos2;
    float Densidade_Populacional, Densidade_Populacional2;

    printf("\n-------- SUPER TRUNFO --------\n");

    // Cadastrando a Carta A
    printf("Insira a quantidade populacional do país A: ");
    scanf("%d", &Populacao);  

    printf("Insira a Área do país A (em km²): ");
    scanf("%f", &Area);  

    printf("Insira o PIB do país A (em trilhões): ");
    scanf("%lf", &PIB);  

    printf("Insira a quantidade de pontos turísticos do país A: ");
    scanf("%d", &Pontos_Turisticos);  

    // Cálculo da densidade populacional da Carta A
    Densidade_Populacional = (float)Populacao / Area;  

    // Cadastrando a Carta B
    printf("\n--------  Informações da Carta B  --------\n");
    printf("Insira a quantidade populacional do país B: ");
    scanf("%d", &Populacao2);  

    printf("Insira a Área do país B (em km²): ");
    scanf("%f", &Area2);  

    printf("Insira o PIB do país B (em trilhões): ");
    scanf("%lf", &PIB2);  

    printf("Insira a quantidade de pontos turísticos do país B: ");
    scanf("%d", &Pontos_Turisticos2);  

    // Cálculo da densidade populacional da Carta B
    Densidade_Populacional2 = (float)Populacao2 / Area2;  

    // Comparando as cartas
    printf("\n--------  Resultados  --------\n");

    // Comparação da densidade populacional (menor valor vence)
    if (Densidade_Populacional < Densidade_Populacional2) {
        printf("Densidade Populacional: Carta A vence com %.2f habitantes/km²\n", Densidade_Populacional);
    } else if (Densidade_Populacional > Densidade_Populacional2) {
        printf("Densidade Populacional: Carta B vence com %.2f habitantes/km²\n", Densidade_Populacional2);
    } else {
        printf("Densidade Populacional: Empate com %.2f habitantes/km²\n", Densidade_Populacional);
    }

    // Comparação da população (maior valor vence)
    if (Populacao > Populacao2) {
        printf("População: Carta A vence com %d habitantes\n", Populacao);
    } else if (Populacao < Populacao2) {
        printf("População: Carta B vence com %d habitantes\n", Populacao2);
    } else {
        printf("População: Empate com %d habitantes\n", Populacao);
    }

    // Comparação da área (maior valor vence)
    if (Area > Area2) {
        printf("Área: Carta A vence com %.2f km²\n", Area);
    } else if (Area < Area2) {
        printf("Área: Carta B vence com %.2f km²\n", Area2);
    } else {
        printf("Área: Empate com %.2f km²\n", Area);
    }

    // Comparação do PIB (maior valor vence)
    if (PIB > PIB2) {
        printf("PIB: Carta A vence com %.2lf trilhões\n", PIB);
    } else if (PIB < PIB2) {
        printf("PIB: Carta B vence com %.2lf trilhões\n", PIB2);
    } else {
        printf("PIB: Empate com %.2lf trilhões\n", PIB);
    }

    // Comparação dos pontos turísticos (maior valor vence)
    if (Pontos_Turisticos > Pontos_Turisticos2) {
        printf("Pontos turísticos: Carta A vence com %d pontos turísticos\n", Pontos_Turisticos);
    } else if (Pontos_Turisticos < Pontos_Turisticos2) {
        printf("Pontos turísticos: Carta B vence com %d pontos turísticos \n", Pontos_Turisticos2);
    } else {
        printf("Pontos turísticos: Empate com %d pontos\n", Pontos_Turisticos);
    }

    return 0;
}

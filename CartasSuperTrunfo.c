#include <stdio.h>

int main() {
    int Populacao, Populacao2;
    float Area, Area2;
    double PIB, PIB2;
    int Pontos_Turisticos, Pontos_Turisticos2;
    float Densidade_Populacional, Densidade_Populacional2;
    float PIB_Per_Capita , PIB_Per_Capita2;
    int Escolha;

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
    PIB_Per_Capita = PIB / Populacao;
    PIB_Per_Capita2 = PIB2 / Populacao2;
    // Comparando as cartas
    printf("\n--------  Resultados  --------\n");

    // Menu para poder escolher qual parametro vai ser comparado

    printf("Escolha o número desejado para fazer a comparação da carta: \n 1 - População \n 2 - Área \n 3 - PIB \n 4 - Densidade Populacional \n 5 - PIB per capita \n");
    scanf("%d" , &Escolha);
    if (Escolha == 1)
    {
        if (Populacao > Populacao2)
        {
            printf("Carta A venceu com a População de : %d", Populacao);
        }
        else if (Populacao < Populacao2){
            printf("Carta B vence com a População de : %d", Populacao2);
        }
        
    }
    else if (Escolha == 2){
      if (Area > Area2)
        {
            printf("Carta A vence com %.2f km²\n", Area);
        }
        else if (Area < Area2){
            printf("Carta B vence com %.2f km²\n", Area2);
        
        } else {
        printf("Área: Empate com %.2f km²\n", Area);
    }
    }
    
    else if (Escolha == 3){
        // Comparação do PIB (maior valor vence)
        if (PIB > PIB2) {
            printf("PIB: Carta A vence com %.2lf trilhões\n", PIB);
        } else if (PIB < PIB2) {
            printf("PIB: Carta B vence com %.2lf trilhões\n", PIB2);
        } else {
            printf("PIB: Empate com %.2lf trilhões\n", PIB);
        }

        
    }
    else if (Escolha == 4){
        // Comparação do PIB (maior valor vence)
        if (Densidade_Populacional > Densidade_Populacional2) {
            printf("Densidade Populacional: Carta A vence com %f \n", Densidade_Populacional);
        } else if (Densidade_Populacional < Densidade_Populacional2) {
            printf("Densidade Populacional: Carta B vence com %.f \n", Densidade_Populacional2);
        } else {
            printf("Densidade Populacional: Empate com %.f \n", Densidade_Populacional);
        }


    }
    else if (Escolha == 5){
        // Comparação do PIB (maior valor vence)
        if (PIB_Per_Capita > PIB_Per_Capita2) {
            printf("PIB per capita : Carta A vence com %f \n", PIB_Per_Capita);
        } else if (PIB_Per_Capita < PIB_Per_Capita2) {
            printf("PIB per capita : Carta B vence com %.f \n", PIB_Per_Capita2);
        } else {
            printf("PIB per capita : Empate com %.f \n", PIB_Per_Capita);
        }


    }

    
    return 0;
}

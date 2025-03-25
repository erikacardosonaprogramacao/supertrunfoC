#include <stdio.h>

int main() {
    char nome1[] = "Brasil", nome2[] = "França";
    int populacao1 = 214000000, populacao2 = 67500000;
    float area1 = 8515767, area2 = 551695;
    float pib1 = 1.8, pib2 = 2.7;
    int pontos_turisticos1 = 50, pontos_turisticos2 = 45;
    float densidade1 = 25.1, densidade2 = 121.6;
    int escolha;
    
    printf("\nEscolha um atributo para comparar:\n");
    printf("1. Nome\n2. População\n3. Área\n4. PIB\n5. Pontos Turísticos\n6. Densidade Demográfica\n");
    scanf("%d", &escolha);

    printf("\nComparando: %s vs %s\n", nome1, nome2);
    
    switch (escolha) {
        case 1:
            printf("Atributo: Nome\n%s vs %s\n", nome1, nome2);
            break;
        case 2:
            printf("Atributo: População\n%s: %d | %s: %d\n%s venceu!\n", nome1, populacao1, nome2, populacao2, populacao1 > populacao2 ? nome1 : populacao1 < populacao2 ? nome2 : "Empate");
            break;
        case 3:
            printf("Atributo: Área\n%s: %.2f km² | %s: %.2f km²\n%s venceu!\n", nome1, area1, nome2, area2, area1 > area2 ? nome1 : area1 < area2 ? nome2 : "Empate");
            break;
        case 4:
            printf("Atributo: PIB\n%s: %.2f trilhões | %s: %.2f trilhões\n%s venceu!\n", nome1, pib1, nome2, pib2, pib1 > pib2 ? nome1 : pib1 < pib2 ? nome2 : "Empate");
            break;
        case 5:
            printf("Atributo: Pontos Turísticos\n%s: %d | %s: %d\n%s venceu!\n", nome1, pontos_turisticos1, nome2, pontos_turisticos2, pontos_turisticos1 > pontos_turisticos2 ? nome1 : pontos_turisticos1 < pontos_turisticos2 ? nome2 : "Empate");
            break;
        case 6:
            printf("Atributo: Densidade Demográfica (Menor vence)\n%s: %.2f hab/km² | %s: %.2f hab/km²\n%s venceu!\n", nome1, densidade1, nome2, densidade2, densidade1 < densidade2 ? nome1 : densidade1 > densidade2 ? nome2 : "Empate");
            break;
        default:
            printf("Opção inválida!\n");
    }
    
    return 0;
}
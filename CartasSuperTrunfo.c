#include <stdio.h>

int main() {
    // Declaração de variáveis
    char estado; 
    char nome_da_cidade[20];
    char codigo_da_carta[10];
    float populacao;
    float area;
    float pib;
    int pontosTuristicos;

    // Solicitando os dados para cadastro
    printf("Desafio Super Trunfo - Países!\n");

    printf("Digite a letra do estado: (A a H)\n");
    scanf("%c", &estado); 

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome_da_cidade); 

    printf("Digite o código da carta:\n");
    scanf("%s", &codigo_da_carta); 

    printf("Digite a população:\n");
    scanf("%f", &populacao);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o pib: \n");
    scanf("%f", &pib);

    printf("Digite os pontos turísticos:\n");
    scanf(" %d", &pontosTuristicos);

    // Exibindo o resultado
    printf("\nO resultado é:\n");
    printf("Estado: %c\n", estado);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("Código da Carta: %s\n", codigo_da_carta);
    printf("População: %.3f\n", populacao);
    printf("Area: %.1f km²\n", area),
    printf("pib: %.2f \n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

    printf("Obrigado por usar o sistema!");

    return 0;
}

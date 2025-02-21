
#include <stdio.h>

int main() {
    char codigo[5];          
    char estado[20];
    char cidade[15];
    float area;
    int populacao;
    float pib;
    int pontostur;

    printf("Digite o codigo:\n");        //aparecer na tela para o usuario digitar o codigo da carta
    scanf("%s", &codigo);                //entrada para identificar que o usuario digitou o codigo 

    printf("Digite o nome do estado:\n");     //aparecer na tela para o usuario digitar o nome do estado
    scanf("%s", &estado);                     //entrada para identificar que o usuario digitou o nome do estado

    printf("Digite o nome da cidade:\n");    //aparecer na tela para o usuario digitar o nome da cidade
    scanf("%s", &cidade);                    //entrada para identificar que o usuario digitou o nome da cidade

    printf("Digite a área da cidade:\n");    //aparecer na tela para o usuario digitar a area da cidade
    scanf("%f", &area);                      //entrada para identificar que o usuario digitou a area da cidade

    printf("Digite a população da cidade:\n");    //aparecer na tela para o usuario digitar a população da cidade
    scanf("%d", &populacao);                     //entrada para identificar que o usuario digitou a população da cidade

    printf("Digite o PIB da cidade:\n");        //aparecer na tela para o usuario digite o pib da cidade
    scanf("%f", &pib);                         //entrada para identificar que o usuario digitou o pib da cidade

    printf("Digite o número de pontos turísticos:\n"); //aparecer na tela para o usuario digitar o numero de pontos turisticos
    scanf("%d", &pontostur);                           //entrada para identificar que o usuario digitu o  numero de pontos turisticos

    printf("codigo: %s\n", codigo);
    printf("nome do estado: %s\n", estado);
    printf("nome da cidade: %s\n", cidade);                //resumidamente, todas essas linhas ate o return0, foram para apresentar para o usuario que seus dados 
    printf("a area é: %f\n", area);                        // digitados foram coletados
    printf("numero da população: %d\n", populacao);
    printf("o pib é: %f\n", pib);
    printf("numero de pontos turisticos: %d\n", pontostur);

       densidadePopulacional = (float) populacao / area;
    pibPerCapita = pib / populacao;

    printf("codigo: %s\n", codigo);
    printf("nome do estado: %s\n", estado);
    printf("nome da cidade: %s\n", cidade);
    printf("a area é: %f\n", area);
    printf("numero da população: %d\n", populacao);
    printf("o pib é: %f\n", pib);
    printf("numero de pontos turisticos: %d\n", pontostur);

    printf("A densidade populacional é: %f\n", densidadePopulacional);
    printf("o pib per capita é: %f\n", pibPerCapita);

    return 0;
}

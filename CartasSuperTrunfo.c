#include <stdio.h>
#include <string.h>

int main(){

    // declarando variaveis para a primeira cidade
    char state1, cardCode1[5], cityName1[30];
    int populationCity1, turistsPointCity1;
    float kilometersAreaCity1, populationDensityCity1, PIBperCapitaCity1;
    double PIBCity1;

    printf("Informe os dados da primeira carta:\n");
    printf("Digite a letra do estado (A-H): \n");
    scanf(" %c", &state1);
    getchar();

    printf("Digite o código da carta (ex: A01): \n");
    scanf(" %4s", cardCode1);
    getchar();

    printf("Digite o nome da cidade: \n");
    fgets(cityName1, sizeof(cityName1), stdin);
    cityName1[strcspn(cityName1, "\n")] = '\0'; // Remove o '\n'

    printf("Digite a população da cidade: \n");
    scanf("%i", &populationCity1);

    printf("Digite a area (em km²) da cidade: \n");
    scanf("%f", &kilometersAreaCity1);

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &PIBCity1);

    printf("Digite número de pontos turisticos da cidade: \n");
    scanf("%d", &turistsPointCity1);

    printf("Todos os dados da primeira carta foram adicionados com sucesso. Vamos para os dados da segunda carta\n");

    // declarando variáveis para a segunda cidade
    char state2, cardCode2[5], cityName2[30];
    int populationCity2, turistsPointCity2;
    float kilometersAreaCity2, populationDensityCity2, PIBperCapitaCity2;
    double PIBCity2;

    printf("Informe os dados da segunda carta:\n");
    printf("Digite a letra do estado (A-H): \n");
    scanf(" %2s", &state2);
    getchar();

    printf("Digite o código da carta (ex: A01): \n");
    scanf(" %4s", cardCode2);
    getchar();

    printf("Digite o nome da cidade: \n");
    fgets(cityName2, sizeof(cityName2), stdin);
    cityName2[strcspn(cityName2, "\n")] = '\0'; // Remove o '\n'

    printf("Digite a população da cidade: \n");
    scanf("%i", &populationCity2);

    printf("Digite a area (em km²) da cidade: \n");
    scanf("%f", &kilometersAreaCity2);

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &PIBCity2);

    printf("Digite número de pontos turisticos da cidade: \n");
    scanf("%d", &turistsPointCity2);

    
    // retornando as informações inseridas pelo usuário sobre a primeira cidade
    printf("Carta 1: \n");
    printf("Estado: %c\n", state1);
    printf("Código: %s\n", cardCode1);
    printf("Nome da Cidade: %s\n", cityName1);
    printf("População: %d\n", populationCity1);
    printf("Área: %.2f km²\n", kilometersAreaCity1);
    printf("PIB: %.2lf bilhões de reais\n", PIBCity1 / 1e9);
    printf("Número de Pontos Turísticos: %d\n", turistsPointCity1);

    populationDensityCity1 = (float)populationCity1 / kilometersAreaCity1;
    printf("Densidade Populacional: %.2f hab/km²\n", populationDensityCity1);

    PIBperCapitaCity1 = PIBCity1 / (float)populationCity1;
    printf("PIB per Capita: %.2f reais\n", PIBperCapitaCity1);

    // retornando as informações inseridas pelo usuário sobre a segunda cidade
    printf("Carta 2: \n");
    printf("Estado: %c\n", state2);
    printf("Código: %s\n", cardCode2);
    printf("Nome da Cidade: %s\n", cityName2);
    printf("População: %d\n", populationCity2);
    printf("Área: %.2f km²\n", kilometersAreaCity2);
    printf("PIB: %.2lf bilhões de reais\n", PIBCity2 / 1e9);
    printf("Número de Pontos Turísticos: %d\n", turistsPointCity2);

    populationDensityCity2 = (float)populationCity2 / kilometersAreaCity2;
    printf("Densidade Populacional: %.2f hab/km²\n", populationDensityCity2);

    PIBperCapitaCity2 = PIBCity2 / (float)populationCity2;
    printf("PIB per Capita: %.2f reais\n", PIBperCapitaCity2);
    
    return 0;
}
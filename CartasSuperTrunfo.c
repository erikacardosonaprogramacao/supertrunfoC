#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_ENTRIES 100
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
typedef struct {
    char codigoCarta[5];
    char cityName[20];
    int population;
    float areaInKm2;
    float pib;
    int numberOfTouristSpots;
    float populationDensity;
    float pibPerCapta;
    float superPower;
} Registro;  

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    Registro registros[MAX_ENTRIES]; 
    int count = 0;                   
    char letra = 'a';
    int numero = 1;
    char continuar;
    
    // Cadastro das Cartas:
    printf("--------BEM VINDO AO SUPER TRUNFO PAISES---------\n");
    printf("Digite abaixo uma letra de A ate H para cadastrar uma carta:\n");
    scanf(" %c", &letra);

    letra = toupper(letra);

    //Aqui uso um laço de repetição para receber os cadastros de A01 até H04, ao chegar ao limite ou o usuário resolver interromper o cadastro

    if (letra >= 'A' && letra <= 'H') {
        do {
           snprintf(registros[count].codigoCarta, sizeof(registros[count].codigoCarta), "%c%02d", letra, numero);
           
            printf("\n--------//////------------\n");
            printf("Estado: %c\n", letra);
            printf("Codigo da carta: %s\n", registros[count].codigoCarta);
            printf("Digite o nome da cidade: \n");
            scanf(" %19[^\n]", registros[count].cityName);
            printf("Digite o numero populacional: \n");
            scanf("%d", &registros[count].population);
            printf("Digite a area em quilometros quadrados: \n");
            scanf("%f", &registros[count].areaInKm2);
            printf("Digite o PIB: \n");
            scanf("%f", &registros[count].pib);
            printf("Digite a quantidade de pontos turisticos: \n");
            scanf("%d", &registros[count].numberOfTouristSpots);

            //Soma dos atributos de densidade populacional e pib per capita
            registros[count].populationDensity = registros[count].population / registros[count].areaInKm2;
            registros[count].pibPerCapta = registros[count].pib / registros[count].population;
            //Soma do super poder convertendo para double para não perder precisão
            registros[count].superPower = 
                                    (long double) registros[count].population +  
                                    registros[count].areaInKm2 +  
                                    registros[count].pib +  
                                    (long double) registros[count].numberOfTouristSpots +  
                                    registros[count].populationDensity +  
                                    registros[count].pibPerCapta;

            numero++;
            if (numero > 4) {
                numero = 1;
                letra++;
            }


            if (letra > 'H') {
                printf("Limite maximo de codigos (H04) atingido.\n");
                break;
            }

            count++;

            if (count >= MAX_ENTRIES) {
                printf("Limite maximo de registros (%d) atingido.\n", MAX_ENTRIES);
                break;
            }

            printf("Deseja continuar o cadastro? (s/n): ");
            scanf(" %c", &continuar);

        } while (continuar == 's' || continuar == 'S');

        //Imprime as cartas cadastradas ao usuário
        printf("\n-------CARTAS CADASTRADAS:--------\n");
        for (int i = 0; i < count; i++) {
            printf("Codigo da carta: %s\nNome da cidade: %s\nPopulacao: %d\nArea: %Lf quilometros quadrados \n",
                registros[i].codigoCarta, registros[i].cityName, registros[i].population, 
                registros[i].areaInKm2
            );
            //Formata o valor do pib
            if (registros[i].pib >= 1e9) {
                printf("PIB: R$%.2f bilhoes\n", registros[i].pib /  1e9);
            }
            else if (registros[i].pib >= 1e6) {
                printf("PIB: R$%.2f milhoes\n", registros[i].pib /  1e6);
            }
            else {
                printf("PIB: R$%.2f\n", registros[i].pib);
            }

            printf("Numero de Pontos Turisticos: %d\n", registros[i].numberOfTouristSpots);
            printf("Densidade populacional: %f\n", registros[i].populationDensity);
            printf("PIB per capita: %f\n", registros[i].pibPerCapta);
            printf("Super poder: %f\n", registros[i].superPower);
            printf("\n--------//////------------\n");
        }

        //Comparação de cartas
        char codigo1[5], codigo2[5];
        int index1 = -1, index2 = -1;

        printf("\nDigite o codigo de duas cartas para comparar:\n");
        printf("Codigo da primeira carta: \n");
        scanf(" %4s", codigo1);
        printf("\nCodigo da segunda carta: \n");
        scanf(" %4s", codigo2);

        for (int i = 0; i < count; i++) {
            if (strcmp(registros[i].codigoCarta, codigo1) == 0) {
                index1 = i;
            }
            if (strcmp(registros[i].codigoCarta, codigo2) == 0) {
                index2 = i;
            }
        }

        if (index1 == -1 || index2 == -1) {
            printf("Uma ou ambas as cartas não foram encontradas.\n");
        }
        else {
            printf("\nComparacao de Cartas:\n");

            printf("Populacao: Carta %s venceu (%d)\n", 
                (registros[index1].population > registros[index2].population) ? registros[index1].codigoCarta : registros[index2].codigoCarta, 
                (registros[index1].population > registros[index2].population) ? 1 : 0);

            printf("Area: Carta %s venceu (%d)\n", 
                (registros[index1].areaInKm2 > registros[index2].areaInKm2) ? registros[index1].codigoCarta : registros[index2].codigoCarta, 
                (registros[index1].areaInKm2 > registros[index2].areaInKm2) ? 1 : 0);

            printf("PIB: Carta %s venceu (%d)\n", 
                (registros[index1].pib > registros[index2].pib) ? registros[index1].codigoCarta : registros[index2].codigoCarta, 
                (registros[index1].pib > registros[index2].pib) ? 1 : 0);

            printf("Pontos Turisticos: Carta %s venceu (%d)\n", 
                (registros[index1].numberOfTouristSpots > registros[index2].numberOfTouristSpots) ? registros[index1].codigoCarta : registros[index2].codigoCarta, 
                (registros[index1].numberOfTouristSpots > registros[index2].numberOfTouristSpots) ? 1 : 0);

            printf("Densidade Populacional: Carta %s venceu (%d)\n", 
                (registros[index1].populationDensity < registros[index2].populationDensity) ? registros[index1].codigoCarta : registros[index2].codigoCarta, 
                (registros[index1].populationDensity < registros[index2].populationDensity) ? 1 : 0);

            printf("PIB per Capita: Carta %s venceu (%d)\n", 
                (registros[index1].pibPerCapta > registros[index2].pibPerCapta) ? registros[index1].codigoCarta : registros[index2].codigoCarta, 
                (registros[index1].pibPerCapta > registros[index2].pibPerCapta) ? 1 : 0);

            printf("Super Poder: Carta %s venceu (%d)\n", 
                (registros[index1].superPower > registros[index2].superPower) ? registros[index1].codigoCarta : registros[index2].codigoCarta, 
                (registros[index1].superPower > registros[index2].superPower) ? 1 : 0);


        }

    }else {
        printf("Digite uma letra entre A e H somente!\n");
    }

    printf("Fim da operacao\n");
    return 0;
}

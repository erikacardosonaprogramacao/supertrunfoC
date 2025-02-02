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

    letra = tolower(letra);

    //Aqui uso um laço de repetição para receber os cadastros de A01 até H04, ao chegar ao limite ou o usuário resolver parar o laço para.

    if (letra >= 'a' && letra <= 'h') {
        do {
           snprintf(registros[count].codigoCarta, sizeof(registros[count].codigoCarta), "%c%02d", letra, numero);
           letra = toupper(letra);

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

            numero++;
            if (numero > 4) {
                numero = 1;
                letra++;
            }


            if (letra > 'h') {
                printf("Limite maximo de codigos (h04) atingido.\n");
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
            printf("Codigo da carta: %s\n Nome da cidade: %s\n Populacao: %d\n Area: %.2f quilometros quadrados \n",
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

            printf("Numero de Pontos Turisticos: %d\n\n", registros[i].numberOfTouristSpots);
        }

    }else {
        printf("Digite uma letra entre A e H somente!\n");
    }

    printf("Cadastro encerrado\n");
    return 0;
}

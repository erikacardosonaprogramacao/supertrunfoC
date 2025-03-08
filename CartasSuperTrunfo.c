#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
int main()
{
    // Declaração das variáveis da primeira carta:
    char c1_estado[60];
    char c1_codigo[3];
    char c1_nome_cidade[60];
    unsigned long int c1_populacao;
    int c1_pontos_turisticos;
    float c1_area;
    float c1_PIB;
    float c1_densidade_populacional;
    float c1_pib_per_capita;
    double c1_super_poder;

    // Recebendo do usuário os dados da primeira carta:
    printf("Carta 1:\n");

    printf("Estado: ");
    scanf("%[^\n]", c1_estado);

    printf("Código: ");
    scanf(" %[^\n]", c1_codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", c1_nome_cidade);

    printf("População: ");
    scanf(" %ld", &c1_populacao);

    printf("Área: ");
    scanf(" %f", &c1_area);

    printf("PIB: ");
    scanf(" %f", &c1_PIB);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &c1_pontos_turisticos);

    // Cálculo da densidade populacional, super poder e PIB per capita da primeira carta
    c1_densidade_populacional = c1_populacao / c1_area;
    c1_pib_per_capita = (c1_PIB * 10e8) / c1_populacao;
    c1_super_poder = c1_populacao + 
                     c1_area + 
                     c1_PIB + 
                     c1_pontos_turisticos + 
                     c1_pib_per_capita + 
                     (c1_area / c1_populacao);


    // Declaração das variáveis da segunda carta:
    char c2_estado[60];
    char c2_codigo[3];
    char c2_nome_cidade[60];
    unsigned long int c2_populacao;
    int c2_pontos_turisticos;
    float c2_area;
    float c2_PIB;
    float c2_densidade_populacional;
    float c2_pib_per_capita;
    double c2_super_poder;

    // Recebendo do usuário os dados da segunda carta:
    printf("\nCarta 2:\n");

    printf("Estado: ");
    scanf(" %[^\n]", c2_estado);

    printf("Código: ");
    scanf(" %[^\n]", c2_codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", c2_nome_cidade);

    printf("População: ");
    scanf(" %ld", &c2_populacao);

    printf("Área: ");
    scanf(" %f", &c2_area);

    printf("PIB: ");
    scanf(" %f", &c2_PIB);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &c2_pontos_turisticos);

    // Cálculo da densidade populacional, super poder e PIB per capita da segunda carta
    c2_densidade_populacional = c2_populacao / c2_area;
    c2_pib_per_capita = (c2_PIB * 10e8) / c2_populacao;
    c2_super_poder = c2_populacao + 
                     c2_area + 
                     c2_PIB + 
                     c2_pontos_turisticos + 
                     c2_pib_per_capita + 
                     (c2_area / c2_populacao);

    
    printf("\nQual atributo deseja comparar?\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super poder\n");

    printf("\nOpção: ");
    int opcao;
    scanf(" %d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nAtributo utilizado para comparação: População\n\n");

            printf("Carta 1 - Estado: %s\n", c1_estado);
            printf("Carta 1 - População: %d habitantes\n", c1_populacao);
            printf("Carta 2 - Estado: %s\n", c2_estado);
            printf("Carta 2 - População: %d habitantes\n\n", c2_populacao);
            
            if (c1_populacao > c2_populacao) {
                printf("População: Carta 1 venceu (1)\n");
            } else if (c1_populacao < c2_populacao) {
                printf("População: Carta 2 venceu (0)\n");
            } else {
                printf("População: Empate!\n");
            }

            break;

        case 2:
            printf("\nCarta 1 - Estado: %s\n", c1_estado);
            printf("Carta 2 - Estado: %s\n", c2_estado);
            printf("Atributo utilizado para comparação: Área\n\n");
            printf("Carta 1 - Área: %.2f\n", c1_area);
            printf("Carta 2 - Área: %.2f\n\n", c2_area);

            if (c1_area > c2_area) {
                printf("Área: Carta 1 venceu (1)\n");
            } else if (c1_area < c2_area) {
                printf("Área: Carta 2 venceu (0)\n");
            } else {
                printf("Área: Empate!\n");
            }

            break;
        
        case 3:
            printf("\nCarta 1 - Estado: %s\n", c1_estado);
            printf("Carta 2 - Estado: %s\n", c2_estado);
            printf("Atributo utilizado para comparação: PIB\n\n");
            printf("Carta 1 - PIB: %.2f\n", c1_PIB);
            printf("Carta 2 - PIB: %.2f\n\n", c2_PIB);

            if (c1_area > c2_area) {
                printf("PIB: Carta 1 venceu (1)\n");
            } else if (c1_area < c2_area) {
                printf("PIB: Carta 2 venceu (0)\n");
            } else {
                printf("PIB: Empate!\n");
            }

            break;

        case 4:
            printf("\nCarta 1 - Estado: %s\n", c1_estado);
            printf("Carta 2 - Estado: %s\n", c2_estado);
            printf("Atributo utilizado para comparação: Número de pontos turísticos\n\n");
            printf("Carta 1 - Número de pontos turísticos: %d\n", c1_pontos_turisticos);
            printf("Carta 2 - Número de pontos turísticos: %d\n\n", c2_pontos_turisticos);

            if (c1_area > c2_area) {
                printf("Número de pontos turísticos: Carta 1 venceu (1)\n");
            } else if (c1_area < c2_area) {
                printf("Número de pontos turísticos: Carta 2 venceu (0)\n");
            } else {
                printf("Número de pontos turísticos: Empate!\n");
            }

            break;

        case 5:
            printf("\nCarta 1 - Estado: %s\n", c1_estado);
            printf("Carta 2 - Estado: %s\n", c2_estado);
            printf("Atributo utilizado para comparação: Densidade populacional\n\n");
            printf("Carta 1 - Densidade populacional: %.2f\n", c1_densidade_populacional);
            printf("Carta 2 - Densidade populacional: %.2f\n\n", c2_densidade_populacional);

            if (c1_area > c2_area) {
                printf("Densidade populacional: Carta 1 venceu (1)\n");
            } else if (c1_area < c2_area) {
                printf("Densidade populacional: Carta 2 venceu (0)\n");
            } else {
                printf("Densidade populacional: Empate!\n");
            }

            break;

        case 6:
            printf("\nCarta 1 - Estado: %s\n", c1_estado);
            printf("Carta 2 - Estado: %s\n", c2_estado);
            printf("Atributo utilizado para comparação: PIB per capita\n\n");
            printf("Carta 1 - PIB per capita: %.2f\n", c1_pib_per_capita);
            printf("Carta 2 - PIB per capita: %.2f\n\n", c2_pib_per_capita);

            if (c1_area > c2_area) {
                printf("PIB per capita: Carta 1 venceu (1)\n");
            } else if (c1_area < c2_area) {
                printf("PIB per capita: Carta 2 venceu (0)\n");
            } else {
                printf("PIB per capita: Empate!\n");
            }

            break;

        case 7:
            printf("\nCarta 1 - Estado: %s\n", c1_estado);
            printf("Carta 2 - Estado: %s\n", c2_estado);
            printf("Atributo utilizado para comparação: Super poder\n\n");
            printf("Carta 1 - Super poder: %.2f\n", c1_super_poder);
            printf("Carta 2 - Super poder: %.2f\n\n", c2_super_poder);

            if (c1_area > c2_area) {
                printf("Super poder: Carta 1 venceu (1)\n");
            } else if (c1_area < c2_area) {
                printf("Super poder: Carta 2 venceu (0)\n");
            } else {
                printf("Super poder: Empate!\n");
            }

            break;

        default:
            printf("\nOpção inválida! Tenta novamente.\n");
            break;
    }

}
/*
    // Mostrando no terminal os dados das cartas cadastradas:
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", c1_estado);
    printf("Código: %s\n", c1_codigo);
    printf("Nome da Cidade: %s\n", c1_nome_cidade);
    printf("População: %d\n", c1_populacao);
    printf("Área: %.2f km²\n", c1_area);
    printf("PIB: %.2f bilhões de reais\n", c1_PIB);
    printf("Número de Pontos Turísticos: %d\n", c1_pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n", c1_densidade_populacional);
    printf("PIB per capita: %.2f reais\n", c1_pib_per_capita);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", c2_estado);
    printf("Código: %s\n", c2_codigo);
    printf("Nome da Cidade: %s\n", c2_nome_cidade);
    printf("População: %d\n", c2_populacao);
    printf("Área: %.2f km²\n", c2_area);
    printf("PIB: %.2f bilhões de reais\n", c2_PIB);
    printf("Número de Pontos Turísticos: %d\n", c2_pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n", c2_densidade_populacional);
    printf("PIB per capita: %.2f reais\n", c2_pib_per_capita);


    if (c1_PIB > c2_PIB) {
        printf("PIB: Carta 1 venceu (1)\n");
    } else if (c1_PIB < c2_PIB) {
        printf("PIB: Carta 2 venceu (0)\n");
    } else {
        printf("PIB: Empate!\n");
    }

    if (c1_pontos_turisticos > c2_pontos_turisticos) {
        printf("Pontos turísticos: Carta 1 venceu (1)\n");
    } else if (c1_pontos_turisticos < c2_pontos_turisticos) {
        printf("Pontos turísticos: Carta 2 venceu (0)\n");
    } else {
        printf("Pontos turísticos: Empate!\n");
    }

    if (c1_densidade_populacional < c2_densidade_populacional) {
        printf("Densidade populacional: Carta 1 venceu (1)\n");
    } else if (c1_densidade_populacional > c2_densidade_populacional) {
        printf("Densidade populacional: Carta 2 venceu (0)\n");
    } else {
        printf("Densidade populacional: Empate!\n");
    }

    if (c1_pib_per_capita > c2_pib_per_capita) {
        printf("PIB per capita: Carta 1 venceu (1)\n");
    } else if (c1_pib_per_capita < c2_pib_per_capita) {
        printf("PIB per capita: Carta 2 venceu (0)\n");
    } else {
        printf("PIB per capita: Empate!\n");
    }

    if (c1_super_poder > c2_super_poder) {
        printf("Super poder: Carta 1 venceu (1)\n");
    } else if (c1_super_poder < c2_super_poder) {
        printf("Super poder: Carta 2 venceu (0)\n");
    } else {
        printf("Super poder: Empate!\n");
    }
*/
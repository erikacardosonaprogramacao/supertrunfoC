#include <stdio.h>
#include <string.h>

#define MAX_ESTADOS 8
#define MAX_CIDADES 4

// Estrutura para armazenar as informações de uma cidade
struct Cidade {
    char nome[10];  // Nome da cidade (1 a 4)
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    int numeroCarta; // Número do grupo da carta
    float densidadePopulacional; // Densidade populacional
    float pibPerCapita; // PIB per capita
};

// Estrutura para armazenar as informações de um estado
struct Estado {
    char nome[2]; // Nome do estado (A a H)
    struct Cidade cidades[MAX_CIDADES];  // 4 cidades por estado
};

int main() {
    struct Estado estados[MAX_ESTADOS];  // 8 estados: A a H
    int i, j;

    // Atribui os nomes dos estados (A a H) e cidades (1 a 4)
    for(i = 0; i < MAX_ESTADOS; i++) {
        // Define o nome do estado como A, B, ..., H
        estados[i].nome[0] = 'A' + i;
        estados[i].nome[1] = '\0'; // Adiciona o caractere nulo para a string

        for(j = 0; j < MAX_CIDADES; j++) {
            // Define o nome da cidade como 1, 2, 3 ou 4
            sprintf(estados[i].cidades[j].nome, "%d", j + 1); 

            // Entrada de dados para cada cidade
            printf("\nEstado %s, Cidade %s:\n", estados[i].nome, estados[i].cidades[j].nome);
            
            printf("Digite a populacao da cidade %s\n:", estados[i].cidades[j].nome);
            scanf( "%d", &estados[i].cidades[j].populacao);

            printf("Digite a area da cidade %s (em m²): ", estados[i].cidades[j].nome);
            scanf( "%f", &estados[i].cidades[j].area);

            printf("Digite o PIB da cidade %s: ", estados[i].cidades[j].nome);
            scanf( "%f", &estados[i].cidades[j].pib);

            printf("Digite o numero de pontos turisticos da cidade %s: ", estados[i].cidades[j].nome);
            scanf( "%d", &estados[i].cidades[j].pontosTuristicos);

            // Coleta o número do grupo da carta
            printf("Digite o numero do grupo da carta à qual a cidade %s pertence: ", estados[i].cidades[j].nome);
            scanf( "%d", &estados[i].cidades[j].numeroCarta);

            // Cálculo da densidade populacional
            if (estados[i].cidades[j].area > 0) {
                estados[i].cidades[j].densidadePopulacional = estados[i].cidades[j].populacao / estados[i].cidades[j].area;
            } else {
                estados[i].cidades[j].densidadePopulacional = 0;
            }

            // Cálculo do PIB per capita
            if (estados[i].cidades[j].populacao > 0) {
                estados[i].cidades[j].pibPerCapita = estados[i].cidades[j].pib / estados[i].cidades[j].populacao;
            } else {
                estados[i].cidades[j].pibPerCapita = 0;
            }

            getchar(); // Limpar o buffer do teclado
        }
    }

    // Exibe as informações coletadas
    for(i = 0; i < MAX_ESTADOS; i++) {
        printf("\nEstado %s:\n", estados[i].nome);
        for(j = 0; j < MAX_CIDADES; j++) {
            printf("\nCidade %s:\n", estados[i].cidades[j].nome);
            printf("População: %d\n", estados[i].cidades[j].populacao);
            printf("Área: %.2f m²\n", estados[i].cidades[j].area);
            printf("PIB: %.2f\n", estados[i].cidades[j].pib);
            printf("Pontos turísticos: %d\n", estados[i].cidades[j].pontosTuristicos);
            printf("Número da carta: %d\n", estados[i].cidades[j].numeroCarta);
            printf("Densidade populacional: %.2f habitantes/m²\n", estados[i].cidades[j].densidadePopulacional);
            printf("PIB per capita: %.2f\n", estados[i].cidades[j].pibPerCapita);
        }
    }

    // Comparações simples entre as cidades usando operadores relacionais
    int superPoderCidade1 = 0, superPoderCidade2 = 0;

    // Comparações entre as cidades 1 e 2 de cada estado
    for(i = 0; i < MAX_ESTADOS; i++) {
        printf("\nComparando cidades do Estado %s:\n", estados[i].nome);
        
        // Comparações para cidade 1 vs cidade 2 no mesmo estado
        if(estados[i].cidades[0].populacao > estados[i].cidades[1].populacao) {
            printf("Cidade 1 tem mais população que Cidade 2.\n");
            superPoderCidade1 += estados[i].cidades[0].populacao;
        } else {
            printf("Cidade 2 tem mais população ou são iguais.\n");
            superPoderCidade2 += estados[i].cidades[1].populacao;
        }

        if(estados[i].cidades[0].area > estados[i].cidades[1].area) {
            printf("Cidade 1 tem maior área que Cidade 2.\n");
            superPoderCidade1 += estados[i].cidades[0].area;
        } else {
            printf("Cidade 2 tem maior área ou são iguais.\n");
            superPoderCidade2 += estados[i].cidades[1].area;
        }

        if(estados[i].cidades[0].pib > estados[i].cidades[1].pib) {
            printf("Cidade 1 tem maior PIB que Cidade 2.\n");
            superPoderCidade1 += estados[i].cidades[0].pib;
        } else {
            printf("Cidade 2 tem maior PIB ou são iguais.\n");
            superPoderCidade2 += estados[i].cidades[1].pib;
        }

        if(estados[i].cidades[0].pontosTuristicos > estados[i].cidades[1].pontosTuristicos) {
            printf("Cidade 1 tem mais pontos turísticos que Cidade 2.\n");
            superPoderCidade1 += estados[i].cidades[0].pontosTuristicos;
        } else {
            printf("Cidade 2 tem mais pontos turísticos ou são iguais.\n");
            superPoderCidade2 += estados[i].cidades[1].pontosTuristicos;
        }

        // Super poder das cidades comparadas
        printf("\nSuper poder Cidade 1: %d\n", superPoderCidade1);
        printf("Super poder Cidade 2: %d\n", superPoderCidade2);

        if(superPoderCidade1 > superPoderCidade2) {
            printf("\nCidade 1 é mais forte!\n");
        } else if(superPoderCidade2 > superPoderCidade1) {
            printf("\nCidade 2 é mais forte!\n");
        } else {
            printf("\nAs duas cidades têm o mesmo super poder.\n");
        }
    }

    return 0;
}

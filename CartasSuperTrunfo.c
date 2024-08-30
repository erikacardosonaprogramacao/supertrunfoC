#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Inclua esta biblioteca para usar strcat

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

char estado[3]; // Deve ter espaço para 2 caracteres + '\0'
char codigo[12]; // Deve ter espaço suficiente para o estado + código (2 + 10 = 12)
char nome_cidade[50];
long int populacao;
double PIB;
double area;
int num_pontos_turisticos;
double densidade_populacional;
double PIB_per_capita;

double calcular_densidade_populacional(long int populacao, double area) {
    return populacao / area;
}

double calcular_PIB_per_capita(double PIB, long int populacao) {
    return PIB / populacao;
}

void cadastrarCarta() {
    
    printf("Digite o estado (2 letras): ");
    scanf("%2s", estado); // Limita a entrada a 2 caracteres
    
    printf("Digite o código da carta: ");
    scanf("%s", codigo);

    // Concatenar o estado ao código
    char codigo_completo[12];
    strcpy(codigo_completo, estado); // Copia o estado para o código_completo
    strcat(codigo_completo, codigo); // Concatena o código ao código_completo
    
    strcpy(codigo, codigo_completo); // Salva o código completo de volta em código
    
    printf("Código completo: %s\n", codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]%*c", nome_cidade); // Lê e armazene a string até que encontrar uma nova linha

    printf("Digite a população: ");
    scanf("%ld", &populacao);

    printf("Digite o PIB: ");
    scanf("%lf", &PIB); // %lf para leitura de double

    printf("Digite a área (em km²): ");
    scanf("%lf", &area); // %lf para leitura de double

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &num_pontos_turisticos);

    // Calcular densidade populacional e PIB per capita
    densidade_populacional = calcular_densidade_populacional(populacao, area);
    PIB_per_capita = calcular_PIB_per_capita(PIB, populacao);

    printf("Carta cadastrada com sucesso!\n");
}

void exibirCarta() {
    printf("\nInformações da Carta:\n");
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %ld\n", populacao);
    printf("Área: %.2lf km²\n", area);
    printf("Densidade Populacional: %.2lf habitantes/km²\n", densidade_populacional);
    printf("PIB: %.2lf bilhões de reais\n", PIB);
    printf("PIB per capita: %.2lf reais\n", PIB_per_capita);
    printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos);
}

int main() {
    int opcao;
    do {
        printf("\n\nMenu:\n");
        printf("1. Adicionar Carta\n");
        printf("2. Listar Carta\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarCarta();
                break;
            case 2:
                exibirCarta();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao inválida!\n");
                break;
        }
    } while (opcao != 0);
    
    return 0;
}

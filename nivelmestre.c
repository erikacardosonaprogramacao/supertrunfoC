#include <stdio.h>

// Função para exibir o resultado final
int exibirResultado(int atributo1_Brasil, int atributo2_Brasil, int atributo1_Franca, int atributo2_Franca, int soma_Brasil, int soma_Franca, const char *atributo1, const char *atributo2) {
    printf("\nComparando cartas: Brasil vs França\n");
    printf("Atributo 1: %s\n", atributo1);
    printf("Atributo 2: %s\n", atributo2);
    printf("Brasil - %s: %d, %s: %d\n", atributo1, atributo1_Brasil, atributo2, atributo2_Brasil);
    printf("França - %s: %d, %s: %d\n", atributo1, atributo1_Franca, atributo2, atributo2_Franca);
    printf("Soma dos atributos - Brasil: %d, França: %d\n", soma_Brasil, soma_Franca);

    // Determinação do vencedor com operador ternário
    return (soma_Brasil > soma_Franca) ? printf("A carta do Brasil venceu a rodada!\n") :
           (soma_Franca > soma_Brasil) ? printf("A carta da França venceu a rodada!\n") :
           printf("Empate!\n");
}

int main() {
    int atributo1_Brasil, atributo2_Brasil, atributo1_Franca, atributo2_Franca;
    int soma_Brasil, soma_Franca;
    int escolha1, escolha2;

    // Atributos dos países
    int densidadePopulacional_Brasil = 25, densidadePopulacional_Franca = 119;
    int pibPerCapita_Brasil = 10600, pibPerCapita_Franca = 41600;
    int populacao_Brasil = 211000000, populacao_Franca = 67000000;

    // Menu de seleção de atributos
    printf("Escolha dois atributos para comparar:\n");
    printf("1. Densidade Populacional\n");
    printf("2. PIB per Capita\n");
    printf("3. População\n");

    // Primeira escolha (somente valores válidos)
    printf("Escolha o primeiro atributo (1-3): ");
    scanf("%d", &escolha1);
    if (escolha1 < 1 || escolha1 > 3) {
        printf("Escolha inválida! Atribuindo atributo padrão: Densidade Populacional.\n");
        escolha1 = 1; // Atribui Densidade Populacional por padrão
    }

    // Segunda escolha (somente valores válidos e diferente da primeira)
    printf("Escolha o segundo atributo (1-3), diferente do primeiro: ");
    scanf("%d", &escolha2);
    if (escolha2 < 1 || escolha2 > 3 || escolha2 == escolha1) {
        printf("Escolha inválida ou igual à primeira escolha! Atribuindo atributo padrão: PIB per Capita.\n");
        escolha2 = (escolha1 == 2) ? 3 : 2; // Atribui PIB per Capita ou População se inválido
    }

    // Atribuindo os valores para os atributos selecionados
    switch(escolha1) {
        case 1:
            atributo1_Brasil = densidadePopulacional_Brasil;
            atributo1_Franca = densidadePopulacional_Franca;
            break;
        case 2:
            atributo1_Brasil = pibPerCapita_Brasil;
            atributo1_Franca = pibPerCapita_Franca;
            break;
        case 3:
            atributo1_Brasil = populacao_Brasil;
            atributo1_Franca = populacao_Franca;
            break;
    }

    switch(escolha2) {
        case 1:
            atributo2_Brasil = densidadePopulacional_Brasil;
            atributo2_Franca = densidadePopulacional_Franca;
            break;
        case 2:
            atributo2_Brasil = pibPerCapita_Brasil;
            atributo2_Franca = pibPerCapita_Franca;
            break;
        case 3:
            atributo2_Brasil = populacao_Brasil;
            atributo2_Franca = populacao_Franca;
            break;
    }

    // Comparação dos atributos com as regras de exceção para a densidade populacional
    // Caso a densidade populacional, o valor menor vence
    int vitoria1 = (escolha1 == 1) ? (atributo1_Brasil < atributo1_Franca) : (atributo1_Brasil > atributo1_Franca);
    int vitoria2 = (escolha2 == 1) ? (atributo2_Brasil < atributo2_Franca) : (atributo2_Brasil > atributo2_Franca);

    // Somando os atributos
    soma_Brasil = atributo1_Brasil + atributo2_Brasil;
    soma_Franca = atributo1_Franca + atributo2_Franca;

    // Exibindo o resultado final
    printf("\nResultado da comparação:\n");

    // Exibindo o resultado detalhado e verificando quem venceu
    exibirResultado(atributo1_Brasil, atributo2_Brasil, atributo1_Franca, atributo2_Franca, soma_Brasil, soma_Franca, "Atributo 1", "Atributo 2");

    return 0;
}

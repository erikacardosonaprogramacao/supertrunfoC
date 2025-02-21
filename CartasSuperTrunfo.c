#include <stdio.h>

typedef struct {
    int idade; // Número do estado representado em números de "1" a "8"
    int populacao; // População da cidade
    int quantidade; // Quantidade de pontos turísticos
    double area; // Área em km²
    double pibbilhoesdereais; // Produto Interno Bruto da cidade
    char estado; // Nome do estado representado por uma letra de "A" a "H"
    char codigo[4]; // Letra inicial do estado seguido de um número ex: A01, A02, A03
    char nomedacidade[20]; // Nome da cidade
} Cidade;

void imprimirCarta(Cidade cidade) {
    // Cálculo da densidade populacional
    float densidadePopulacional = (float)cidade.populacao / cidade.area;
    
    // Cálculo do PIB per capita
    float pibPerCapita = (float)cidade.pibbilhoesdereais * 1e9 / cidade.populacao; // Convertendo PIB de bilhões para reais

     // Somando todos os valores
    float superPoder = cidade.populacao + cidade.area + cidade.pibbilhoesdereais * 1e9 + pibPerCapita + densidadePopulacional + cidade.quantidade;

    printf("Carta: %d\n", cidade.idade);
    printf("Estado: %c\n", cidade.estado);
    printf("Código: %s\n", cidade.codigo);
    printf("Nome da Cidade: %s\n", cidade.nomedacidade);
    printf("População: %d\n", cidade.populacao);
    printf("Área: %.3f km²\n", cidade.area);
    printf("PIB: %.9f bilhões de reais\n", cidade.pibbilhoesdereais);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);
    printf("Número de Pontos Turísticos: %d\n", cidade.quantidade);
    printf("Super Poder (float): %.1f\n", cidade.populacao + cidade.area + cidade.pibbilhoesdereais + pibPerCapita + densidadePopulacional + cidade.quantidade);
    
}

 int main() {
    printf("Cartas Super Trunfo\n");
    printf("Novo Commit Diego\n");

   


    Cidade cidade1 = {1, 11450000, 36, 1.521, 2.719751231, 'A', "A01", "São Paulo"};
    Cidade cidade2 = {2, 5000000, 20, 1.234, 1.123456789, 'B', "B01", "Rio de Janeiro"};

    imprimirCarta(cidade1);
    printf("\n"); // Linha em branco entre as cartas
    imprimirCarta(cidade2);

    return 0;
}



    























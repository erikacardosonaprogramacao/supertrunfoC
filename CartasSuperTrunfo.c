#include <stdio.h>

int main() {

    char estado[2] = "A";
    char codigo[4] = "A01";
    char nome[20] = "São Paulo";
    int populacao = 10500035;
    float area = 25000.00;
    float pib = 310000000.00;
    int pontos = 241;

    printf("A carta está pronta!\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f Km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turiscos: %d\n", pontos);

    return 0;
}

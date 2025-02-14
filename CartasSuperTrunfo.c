#include <stdio.h>
#include <string.h>

// Definindo a estrutura da carta
struct Cidade {
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

// Função para cadastrar uma cidade
void cadastrarCidade(struct Cidade *cidade) {
    printf("\n=== Cadastro de Cidade ===\n");
    
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", cidade->codigo);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", cidade->nome);
    
    printf("Digite a população: ");
    scanf("%d", &cidade->populacao);
    
    printf("Digite a área (km²): ");
    scanf("%f", &cidade->area);
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &cidade->pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &cidade->pontos_turisticos);
}

// Função para exibir os dados de uma cidade
void exibirCidade(struct Cidade cidade) {
    printf("\n=== Dados da Cidade (%s) ===\n", cidade.nome);
    printf("Código: %s\n", cidade.codigo);
    printf("Nome: %s\n", cidade.nome);
    printf("População: %d habitantes\n", cidade.populacao);
    printf("Área: %.2f km²\n", cidade.area);
    printf("PIB: %.2f bilhões\n", cidade.pib);
    printf("Pontos Turísticos: %d\n", cidade.pontos_turisticos);
    printf("========================\n");
}

int main() {
    struct Cidade cidades[32]; // 8 estados * 4 cidades = 32 cartas
    int num_cidades;
    
    printf("=== Super Trunfo - Países ===\n");
    printf("Quantas cidades deseja cadastrar? ");
    scanf("%d", &num_cidades);
    
    // Cadastro das cidades
    for(int i = 0; i < num_cidades; i++) {
        printf("\nCidade %d de %d", i+1, num_cidades);
        cadastrarCidade(&cidades[i]);
    }
    
    // Exibição das cidades cadastradas
    printf("\n=== Cidades Cadastradas ===\n");
    for(int i = 0; i < num_cidades; i++) {
        exibirCidade(cidades[i]);
    }
    
    return 0;
}
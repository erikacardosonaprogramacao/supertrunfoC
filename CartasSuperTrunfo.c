/*
    Desafio Super Trunfo da matéria de C no curso de Engenharia de Software da Estácio de Sá.
    Jogo de Super Trunfo com o tema Países.
*/

#include <stdio.h> // Bibloteca padrão de entrada e saída

/*
    Definição das estruturas de dados para armazenar as informações dos países, estados e cidades.
    A estrutura de dados é composta por um país que possui 8 estados e cada estado possui 4 cidades.
    Cada cidade possui informações como população, área, PIB e quantidade de pontos turísticos.

    Como já tenho uma noção de programação pensei no uso de objetos para criar as estruturas de dados.
    Então, criei uma estrutura para cidade, uma para estado e uma para país.
*/

struct cidade
{
    int cidade;
    int populacao;
    int area;
    int pib;
    int pontos_turisticos;
};

struct estado
{
    char nome[50];
    struct cidade cidades[4];
};

struct pais
{
    char nome[50];
    struct estado estados[8];
};

int main()
{

    // Declaração de variáveis
    int qtd_paises = 1;
    int qtd_estados = 8;
    int qtd_cidades = 4;
    char *cod_estado[8] = {"A", "B", "C", "D", "E", "F", "G", "H"};
    char *cod_cidade[4] = {"01", "02", "03", "04"};

    // Mensagem de boas-vindas
    printf("Bem-vindo ao jogo de Super Trunfo com o tema Países!\n");
    printf("Cada país será divido em 8 estados com 4 cidades cada.\n");
    printf("Por exemplo, a cidade A01 é a cidade 1 do estado A.\n");
    printf("Vamos começar cadastrando as informações das cidades.\n");

    // Declaração de array estático para armazenar a quantidade de países
    struct pais paises[1];

    // Laço para cadastrar as informações das cartas cadastradas
    for (int i = 0; i < qtd_paises; i++)
    {
        printf("\nDigite o nome do país %d: ", i + 1);
        scanf("%s", paises[i].nome);

        for (int j = 0; j < qtd_estados; j++)
        {
            printf("\nDigite o nome do estado %d: ", j + 1);
            scanf("%s", paises[i].estados[j].nome);

            for (int k = 0; k < qtd_cidades; k++)
            {
                printf("\nCidade %s%s\n", cod_estado[j], cod_cidade[k]);
                printf("Digite a população da cidade %d: ", k + 1);
                scanf("%d", &paises[i].estados[j].cidades[k].populacao);
                printf("Digite a área da cidade %d: ", k + 1);
                scanf("%d", &paises[i].estados[j].cidades[k].area);
                printf("Digite o PIB da cidade %d: ", k + 1);
                scanf("%d", &paises[i].estados[j].cidades[k].pib);
                printf("Digite a quantidade de pontos turísticos da cidade %d: ", k + 1);
                scanf("%d", &paises[i].estados[j].cidades[k].pontos_turisticos);
            }
        }
    }

    // Laço para exibir as informações das cartas cadastradas
    printf("\nAs informações dos países foram cadastradas com sucesso!\n");
    printf("Agora é hora de jogar!\n");
    for (int i = 0; i < qtd_paises; i++)
    {
        printf("\nPaís %d: %s\n", i + 1, paises[i].nome);
        for (int j = 0; j < qtd_estados; j++)
        {
            printf("\nEstado %s\n", cod_estado[j]);
            for (int k = 0; k < qtd_cidades; k++)
            {
                printf("\nCidade %s%s\n", cod_estado[j], cod_cidade[k]);
                printf("População: %d\n", paises[i].estados[j].cidades[k].populacao);
                printf("Área: %dm²\n", paises[i].estados[j].cidades[k].area);
                printf("PIB: R$%d\n", paises[i].estados[j].cidades[k].pib);
                printf("Pontos turísticos: %d\n", paises[i].estados[j].cidades[k].pontos_turisticos);
            }
        }
    }
}
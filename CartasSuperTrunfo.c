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

// Declaração de array estático para armazenar a quantidade de países
struct pais paises[1];

// Declaração de variáveis
int opcao;
int qtd_estados = 8;
int qtd_cidades = 4;
char *cod_estado[8] = {"A", "B", "C", "D", "E", "F", "G", "H"};
char *cod_cidade[4] = {"01", "02", "03", "04"};

// Função para cadastrar as informações das cartas
void cadastrarCartas()
{
    printf("Vamos começar cadastrando as informações das cidades.\n");
    for (int j = 0; j < qtd_estados; j++)
    {
        for (int k = 0; k < qtd_cidades; k++)
        {
            printf("\nCidade %s%s\n", cod_estado[j], cod_cidade[k]);
            printf("Digite a população da cidade %d: ", k + 1);
            scanf("%d", &paises[0].estados[j].cidades[k].populacao);
            printf("Digite a área da cidade %d: ", k + 1);
            scanf("%d", &paises[0].estados[j].cidades[k].area);
            printf("Digite o PIB da cidade %d: ", k + 1);
            scanf("%d", &paises[0].estados[j].cidades[k].pib);
            printf("Digite a quantidade de pontos turísticos da cidade %d: ", k + 1);
            scanf("%d", &paises[0].estados[j].cidades[k].pontos_turisticos);
        }
    }
    printf("\nAs informações das cidades foram cadastradas com sucesso!\n");
}

// Função para exibir as informações das cartas cadastradas
void exibeCartas()
{

    for (int j = 0; j < qtd_estados; j++)
    {
        printf("\nEstado %s\n", cod_estado[j]);
        for (int k = 0; k < qtd_cidades; k++)
        {
            printf("\nCidade %s%s\n", cod_estado[j], cod_cidade[k]);
            printf("População: %d\n", paises[0].estados[j].cidades[k].populacao);
            printf("Área: %dm²\n", paises[0].estados[j].cidades[k].area);
            printf("PIB: R$ %d\n", paises[0].estados[j].cidades[k].pib);
            printf("Pontos turísticos: %d\n", paises[0].estados[j].cidades[k].pontos_turisticos);
        }
    }
}

int main()
{

    do
    {
        // Mensagem de boas-vindas
        printf("Bem-vindo ao jogo de Super Trunfo com o tema Países!\n");
        printf("1 - Para começar o jogo\n");
        printf("2 - para ler as regras do jogo\n");
        printf("3 - para sair do jogo\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastrarCartas();
            exibeCartas();
            break;
        case 2:
            printf("\n\nCada país será divido em 8 estados com 4 cidades cada.\n");
            printf("Por exemplo, a cidade A01 é a cidade 1 do estado A.\n");
            printf("Cada cidade possui informações como população, área, PIB e quantidade de pontos turísticos.\n");
            printf("O jogador que tiver a carta com a maior população, área, PIB ou quantidade de pontos turísticos ganha o jogo.\n");
            printf("Divirta-se!\n\n");
            break;
        case 3:
            printf("Obrigado por jogar! Até a próxima!\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n\n\n");
            break;
        }
    } while (opcao != 3);

    return 0;
}

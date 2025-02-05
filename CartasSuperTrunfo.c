#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// teste larissa

// declara um tipo cidade
typedef struct
{
    int pop;
    int pontos_turisticos;
    char nome_cidade[40];
    char codigo_cidade[9];
    float area;
    double pib;
    double densidade_populacional;
    double pib_per_capta;
    double super_poder;
    
}cidade;


cidade entrada_dados(cidade cidades[2])
{
    
    for(int i = 0; i < 2; i++)
    {
        printf("\n\t\t~~~Entrada de dados da Cidade %i~~~\n", i+1);

        printf("Digite o nome da cidade: ");
        scanf(" %s", &cidades[i].nome_cidade);

        printf("Digite o código de %s: ", cidades[i].nome_cidade);
        scanf(" %s", &cidades[i].codigo_cidade);

        printf("Digite a área de %s em km²: ", cidades[i].nome_cidade);
        scanf(" %f", &cidades[i].area);

        printf("Digite a população total de %s: ", cidades[i].nome_cidade);
        scanf(" %i", &cidades[i].pop);

        printf("Digite o pib de %s: ", cidades[i].nome_cidade);
        scanf(" %lf", &cidades[i].pib);

        printf("Digite quantos pontos turisticos %s possui: ", cidades[i].nome_cidade);
        scanf(" %i", &cidades[i]);

        // calculo da densidade populacional e pib per capta da cidade 
        cidades[i].densidade_populacional = (float) cidades[i].pop / cidades[i].area;
        cidades[i].pib_per_capta = cidades[i].pib / (float) cidades[i].pop;

        // calculo do super poder
        cidades[i].super_poder = cidades[i].pop + cidades[i]. pib + cidades[i].area 
        + cidades[i].pontos_turisticos + cidades[i].densidade_populacional + cidades[i]. pib_per_capta;
    };
}

int validacao(double num1, double num2);

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    cidade cidades[2];    

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    entrada_dados(cidades);    

    // Exibição dos Dados das Cartas:
    // Exibe os valores inseridos para cada atributo da cidade, um por linha.    


    printf("\n\t\t~~~Saida de dados~~~\n");

    for (int i = 0; i < 1; i++)
    {
        for(int a = 0; a < 2; a++)
        {
            printf("População de %s:\t\t%i\t\t", cidades[a].nome_cidade, cidades[a].pop);
        }
        printf("\n");
        for(int b = 0; b < 2; b++)
        {
            printf("Área de %s:\t\t%i\t\t", cidades[b].nome_cidade, cidades[b].area);
        }
        printf("\n");
        for(int c = 0; c < 2; c++)
        {
            printf("Pib de %s:\t\t%i\t\t", cidades[c].nome_cidade, cidades[c].pib);
        }
        printf("\n");
        for(int d = 0; d < 2; d++)
        {
            printf("pontos turisticos de %s:\t\t%i\t\t", cidades[d].nome_cidade, cidades[d].pontos_turisticos);
        }
        printf("\n");
        for(int e = 0; e < 2; e++)
        {
            printf("Densidade populacional de %s:\t\t%i\t\t", cidades[e].nome_cidade, cidades[e].densidade_populacional);
        }
        printf("\n");
        for(int f = 0; f < 2; f++)
        {
            printf("pib per capta de %s:\t\t%i\t\t", cidades[f].nome_cidade, cidades[f]. pib_per_capta);
        }
        printf("\n");
        for(int g = 0; g < 2; g++)
        {
            printf("pib per capta de %s:\t\t%i\t\t", cidades[g].nome_cidade, cidades[g].super_poder);
        }
        printf("\n");
    }

     printf("\t\t~~~Fim do programa~~~\n");
    return 0;
}

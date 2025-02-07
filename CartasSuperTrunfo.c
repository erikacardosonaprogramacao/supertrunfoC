#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// teste larissa
typedef struct
{ 
    // cria um tipo cidade que contem todas as variaveis necessarias para comparação
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


void entrada_dados(cidade cidades[2])
{
    // recebe as propriedades das duas cidades
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
        scanf(" %i", &cidades[i].pontos_turisticos);

        // calculo da densidade populacional e pib per capta da cidade 
        cidades[i].densidade_populacional = (float) cidades[i].pop / cidades[i].area;
        cidades[i].pib_per_capta = cidades[i].pib / (float) cidades[i].pop;
        // calculo do superpoder 
        cidades[i].super_poder = cidades[i].densidade_populacional + cidades[i].pib_per_capta 
        + (float) cidades[i].pontos_turisticos + cidades[i].pib + (float) cidades[i].pop + cidades[i].area;
        
    };
}

int vencedor(double num1, double num2)
{
    // compara dois valores e retorna um valor que será subtraido ou somado
    if(num1 > num2)
    {
        printf("Cidade 1 venceu!\n");
        return 1;
    }
    else if(num1 < num2)
    {
        printf("Cidade 2 Venceu!\n");
        return -1;
    }
    else{
        printf("Empate\n");
        return 0;
    };
    
}

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    cidade cidades[2];
    int vitorias = 0;    

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    entrada_dados(cidades);    

    // Exibição dos Dados das Cartas:
    // Exibe os valores inseridos para cada atributo da cidade, um por linha.    


    printf("\n\t\t\t~~~Saida de dados~~~\n\n");

    printf("População: \t\t\t%s (%i vs %i) %s\n", cidades[0].nome_cidade, cidades[0].pop, cidades[1].pop, cidades[1].nome_cidade);
    vitorias += vencedor(cidades[0].pop, cidades[1].pop);
    printf("\n");

    printf("Area: \t\t\t\t%s (%.2f vs %.2f) %s\n", cidades[0].nome_cidade, cidades[0].area, cidades[1].area, cidades[1].nome_cidade);
    vitorias += vencedor(cidades[0].area, cidades[1].area);
    printf("\n");

    printf("Pib: \t\t\t\t%s (%.2f vs %.2f) %s\n", cidades[0].nome_cidade, cidades[0].pib, cidades[1].pib, cidades[1].nome_cidade);
    vitorias += vencedor(cidades[0].pib, cidades[1].pib);
    printf("\n");

    printf("Pontos turisticos: \t\t%s (%i vs %i) %s\n", cidades[0].nome_cidade, cidades[0].pontos_turisticos, cidades[1].pontos_turisticos, cidades[1].nome_cidade);
    vitorias += vencedor(cidades[0].pontos_turisticos, cidades[1].pontos_turisticos);
    printf("\n");

    printf("Densidade Populacional: \t%s (%.2f vs %.2f) %s\n", cidades[0].nome_cidade, cidades[0].densidade_populacional, cidades[1].densidade_populacional, cidades[1].nome_cidade);
    vitorias += vencedor(cidades[0].densidade_populacional, cidades[1].densidade_populacional);
    printf("\n");

    printf("Pib per capta: \t\t\t%s (%.2f vs %.2f) %s\n", cidades[0].nome_cidade, cidades[0].pib_per_capta, cidades[1].pib_per_capta, cidades[1].nome_cidade);
    vitorias += vencedor(cidades[0].pib_per_capta, cidades[1].pib_per_capta);
    printf("\n");

    printf("SUPER PODER: \t\t\t%s (%.2f vs %.2f) %s\n", cidades[0].nome_cidade, cidades[0].super_poder, cidades[1].super_poder, cidades[1].nome_cidade);
    vitorias += vencedor(cidades[0].super_poder, cidades[1].super_poder);
    printf("\n");

    if(vitorias > 0)
    {
        printf("VENCEDOR GERAL: %s\n", cidades[0].nome_cidade);
    }
    else if(vitorias < 0)
    {
        printf("VENCEDOR GERAL: %s\n", cidades[1].nome_cidade);
    }
    else
    {
        printf("EMPATE GERAL!\n");
    }

    printf("\t\t\t~~~Fim do programa~~~\n");

    
    return 0;
}
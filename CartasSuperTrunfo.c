#include <stdio.h>
#define NUM_ESTADOS 8
#define CIDADE_POR_ESTADO 4


typedef struct 
{

    char codigo[4];         // Código da cidade (ex: A01, B02)
    int populacao;          // População   
    float area;             // Área
    float pib;              // PIB
    int pontosTuristicos;   // Número de pontos turístico
} Cidade;

void cadastrarCartas(Cidade cidades[NUM_ESTADOS][CIDADE_POR_ESTADO])
{
    for (int i = 0; i < NUM_ESTADOS; i++) 
    {
        for ( int j = 0; j < CIDADE_POR_ESTADO; j++) 
        {
            // Gerar o codigo da cidade
            snprintf(cidades[i][j].codigo, sizeof(cidades[i][j].codigo), "%c%02d", 'A' + i, j + 1);
            
            //Solicita os dados da cidade
            printf("\n --- Cadastro da Cidade %s ---\n", cidades[i][j].codigo);
            printf("População: ");
            scanf("%d", &cidades[i][j].populacao);
            printf("Área (km²): ");
            scanf("%f", &cidades[i][j].area);
            printf("PIB (milhões): ");
            scanf("%f", &cidades[i][j].pib);
            printf("Número de pontos turísticos: ");
            scanf("%d", &cidades[i][j].pontosTuristicos);

        }
    }
}

// função que exibi as cartas para o usuário
void exibirCartas(Cidade cidades[NUM_ESTADOS][CIDADE_POR_ESTADO])
{
    printf("\n\n --- Cartas Cadastradas --- \n");
    for (int i = 0 ; i < NUM_ESTADOS; i++)
    {
        for (int j = 0 ; j < CIDADE_POR_ESTADO ; j++) 
        {
            Cidade cidade = cidades[i][j];
            printf("\nCarta: %s\n", cidade.codigo);
            printf("População: %d\n", cidade.populacao);
            printf("Área: %2.f Km²\n", cidade.area);
            printf("PIB: %2.f milhões\n", cidade.pib);
            printf("Pontos turísticos: %d\n", cidade.pontosTuristicos);      
        }
    }
}





int main() {

    // Matriz para armazenar as cidades de cada estado
    Cidade cidades[NUM_ESTADOS][CIDADE_POR_ESTADO];
  
    printf("Bem-vindo ao sistema Super Trunfo de Países!\n");
    
    //Cadastro das cartas
    cadastrarCartas(cidades);

    // exibir as cartas para o usuário
    exibirCartas(cidades);
    

    return 0;
}

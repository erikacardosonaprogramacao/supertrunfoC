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
            // Gera o c[odigo da cidade
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





int main() {

    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Bem-vindo ao sistema Super Trunfo de Países!\n");
    
    

    return 0;
}

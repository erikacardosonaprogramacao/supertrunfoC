#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Diego

int main() {
          
    
    char Estado = 'A';                       // Estado
    int CodigoCarta [50] = 'A01';            // Código da Carta
    char NomeCidade[50] = "São Paulo";       // Nome da Cidade
    long Populacao = 11.45;                  // População
    float Area = 1.521;                      // Área em km²
    float PIB = 2.719751;                    // PIB
    int NumeroPontosTuristicos = 36;         // Número de pontos turísticos

    // Leitura dos dados da carta

    printf ("Digite o Estado: \n");
    scanf ("%s", &carta.estado);

    printf ("Digite o Código da Carta: \n");
    scanf ("%d", &carta.codigoCarta);

    printf ("Digite o nome da Cidade: \n");
    scanf ("%s", &nomeCidade);

    printf("Digite a População: \n");
    scanf("%ld", &Populacao);

    printf ("Digite a Área em km²: \n");
    sscanf("%f", &carta.area);

    printf ("PIB: \n");
    scanf("%f", &carta.PIB);

    printf("Número de Ponto Turísticos: \n");
    scanf("%d", &carta.numPontosTurísticos);

    printf ("Cartas Super Trunfo\n");   
    printf ("Novo Commint\n");
    printf ("Estado: %s\n, carta.estado");                  
    printf ("Código da Carta: %d\n", carta.codigoCarta);   
    printf ("Nome da Cidade; %s\n", carta.nomeCidade);     
    printf ("População: %ld", carta.populacao);          
    printf ("Área: %.2f km²\n", carta.area);             
    printf ("PIB: %.2f\n, carta.pib");                
    printf("Número de Pontos Turísticos: %d\n", carta.numPontosTuristicos);



    


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    

    return 0;
}

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Diego

int main() {
    printf ("Cartas Super Trunfo\n");
    printf ("Novo Commint\n");
    


    char Estado = 'A';
    char Código [50] = 'A01'; 
    char Cidade[50] = "São Paulo";
    int População = 11.45;  
    float Área em km² = 1.521;
    double PIB = 2.719751;
    int Número de Pontos Turísticos = 36;

    printf ("Estado: \n");
    scanf ("%s", &Estado);

    printf ("Código da Carta: \n");
    scanf ("%s", &Código);

    printf ("Cidade: \n");
    scanf ("%s", &Cidade);

    printf("População: \n");
    scanf("%d", &População);

    printf ("Área em km²: \n");
    sscanf("%f", &Área em km²);

    printf ("PIB: \n");
    scanf("%f", &PIB);

    printf("Número de Ponto Turísticos: \n");
    scanf("%d", &Número de Pontos Turísticos);







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

#include <stdio.h>

int main(){


      // Declaração de variáveis---------------------------------------------------------------------------------------------------------

      char estado;               // Armazena o estado da cidade (A-H)
      char codigo[4];            // Armazena o código da cidade (ex: A1)
      char nome[100];            // Armazena o nome da cidade
      int populacao;             // Armazena a população da cidade
      float area;                // Armazena a área da cidade em km²
      float pib;                 // Armazena o PIB da cidade
      int pontosturisticos;      // Armazena o número de pontos turísticos
      int contadorcidades;       // Contador para o loop

      //---------------------------------------------------------------------------------------------------------------------------------


      // Mensagem de boas-vindas e explicação do jogo------------------------------------------------------------------------------------

      printf("Seja Bem-vindo ao Super Trunfo - Países!\n");
      printf("No jogo Super Trunfo -Países, os jogadores comparam as propriedades das cartas para determinar a mais forte.\n");
      printf("Cada país será dividido em oito estados, identificados pelas letras de A a H.\n");
      printf("Cada estado terá quatro cidades, numeradas de 1 a 4.\n");
      printf("A combinação da letra do estado e o número da cidade define o código da carta.\n");
      printf("No total serão 32 cartas para cada pais.\n");
      printf("Vamos começar!\n");

      //---------------------------------------------------------------------------------------------------------------------------------


      // Loop para cadastrar até 32 cidades----------------------------------------------------------------------------------------------

      for (contadorcidades = 0; contadorcidades < 32; contadorcidades++) {     // Define o estado e o código da cidade
        estado = 'A' + (contadorcidades / 4);                                  // A, B, C, D, E, F, G, H
        codigo[0] = estado;                                                    // Primeiro caractere é o estado
        codigo[1] = '0' + ((contadorcidades % 4) + 1);                         // Segundo caractere é o número da cidade (1 a 4)
        codigo[2] = '\0';                                                      // Termina a sequência de caracteres com o caractere nulo

      //---------------------------------------------------------------------------------------------------------------------------------


      // Entrada de dados----------------------------------------------------------------------------------------------------------------

      printf("Cadastro da Cidade %d:\n", contadorcidades + 1); // Exibe o número do cadastro da cidade atual (1 a 32)
        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]", nome); // Lê o nome da cidade, permitindo espaços
        
        printf("Digite a população: ");
        scanf("%d", &populacao); // Lê a população
        
        printf("Digite a área em km²: ");
        scanf("%f", &area); // Lê a área
        
        printf("Digite o PIB: ");
        scanf("%f", &pib); // Lê o PIB
        
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontosturisticos); // Lê o número de pontos turísticos

        //---------------------------------------------------------------------------------------------------------------------------------


        // Exibição dos dados cadastrados--------------------------------------------------------------------------------------------------

        printf("\nDados da Cidade Cadastrada:\n");
        printf("Estado: %c\n", estado);
        printf("Código da Carta: %s\n", codigo);
        printf("Nome da Cidade: %s\n", nome);
        printf("População: %d\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: R$ %.2f\n", pib);
        printf("Número de Pontos Turísticos: %d\n", pontosturisticos);
        printf("\n");

        //---------------------------------------------------------------------------------------------------------------------------------
    }

        // Mensagem final após o cadastro--------------------------------------------------------------------------------------------------

    printf("Cadastro completo! Total de cidades cadastradas: %d\n", contadorcidades);
    return 0; // Indica que o programa terminou com sucesso

        //---------------------------------------------------------------------------------------------------------------------------------

}
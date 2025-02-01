#include <stdio.h>

  int main() {

// Cadastro de paises; 
// Serao cadastrados 8 paises com 4 cidades cada;
// Cada cidade contem informações como: população, aréa, pib e numero de pontos turisticos;

// tipos de variaveis;

char pais[50] = "A";
char estado[50] = "A";
char cidade[50] = "A001";
float populacao = 50.569;
float area = 50.7852;
float pib = 60.000;
int pontos_turisticos = 4;

/*
%d: Imprime um inteiro no formato decimal.
%i: equivalente a %d.
%f: imprime um numero de ponto flutuante no formato padrao.
%e: imprime um numero de ponto flutuante na conotacao cientifica.
%c: imprime um unico caracter.
%s: imprime uma cadeia (string) de caracteres.
*/

printf("Entre com o nome do pais:\n");
scanf(" %s", &pais);

printf("Entre com o nome do estado:\n");
scanf(" %s", &estado);

printf("Entre com o codigo da cidade:\n");
scanf(" %s", &cidade);

printf("Entre com numero da populacao:\n");
scanf(" %f", &populacao);

printf("Entre com a area total:\n");
scanf(" %f", &area);

printf("Entre com o pib:\n");
scanf(" %f", &pib);

printf("Entre com os pontos turisticos:\n");
scanf(" %d", &pontos_turisticos);

   printf("Nome do pais: %s\n", pais);
   printf("Nome do estado: %s\n", estado);
   printf("Nome da cidade: %s\n", cidade);
   printf("População: %f\n", populacao);
   printf("Área em km2: %f\n", area);
   printf("PIB: %f\n", pib);
   printf("Pontos turisticos: %d\n", pontos_turisticos);


return 0;










  }

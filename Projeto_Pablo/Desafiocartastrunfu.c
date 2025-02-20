#include <stdio.h>

  int main() {

// Cadastro de paises; 
// Serão cadastrados 02 cartas;
// As cartas são preenchidos com valor de A e B;
// Estado você pode escolher um dos 27 estados brasileiros:
// Cidade você escolhe um do estado em que você escolheu:
// Codigo se for da primeira carta será A001 ou se for a segunda será B001:
// Cada carta contem informações como: população, aréa, pib e numero de pontos turisticos;
// Os valores devem ser preenchidos sem virgula separando os numeros;

// tipos de variaveis;
char carta01[50];
char estado01[50];
char cidade01[50];
char codigo01[50];
float populacao01;
float area01;
float pib01;
int pontos_turisticos01;

char carta02[50];
char estado02[50];
char cidade02[50];
char codigo02[50];
float populacao02;
float area02;
float pib02;
int pontos_turisticos02;

/*
%d: Imprime um inteiro no formato decimal.
%i: equivalente a %d.
%f: imprime um numero de ponto flutuante no formato padrao.
%e: imprime um numero de ponto flutuante na conotacao cientifica.
%c: imprime um unico caracter.
%s: imprime uma cadeia (string) de caracteres.
*/

printf("Vamos entrar com a informações da primeira carta: \n");


printf("Entre com a letra da carta:\n");
scanf(" %s", &carta01);

printf("Entre com o nome do estado:\n");
scanf(" %s", &estado01);

printf("Entre com o nome da cidade:\n");
scanf(" %s", &cidade01);

printf("Entre com o codigo:\n");
scanf(" %s", &codigo01);

printf("Entre com numero da populacao:\n");
scanf(" %f", &populacao01);

printf("Entre com a area total:\n");
scanf(" %f", &area01);

printf("Entre com o pib:\n");
scanf(" %f", &pib01);

printf("Entre com os pontos turisticos:\n");
scanf(" %d", &pontos_turisticos01);

printf("Agora vamos entrar com a informações da segunda carta: \n");

printf("Entre com a letra da carta:\n");
scanf(" %s", &carta02);

printf("Entre com o nome do estado:\n");
scanf(" %s", &estado02);

printf("Entre com o nome da cidade:\n");
scanf(" %s", &cidade02);

printf("Entre com o codigo:\n");
scanf(" %s", &codigo02);

printf("Entre com numero da populacao:\n");
scanf(" %f", &populacao02);

printf("Entre com a area total:\n");
scanf(" %f", &area02);

printf("Entre com o pib:\n");
scanf(" %f", &pib02);

printf("Entre com os pontos turisticos:\n");
scanf(" %d", &pontos_turisticos02);

printf("Informações da carta 01:\n");
   printf("Nome da carta: %s\n", carta01);
   printf("Nome do estado: %s\n", estado01);
   printf("Nome da cidade: %s\n", cidade01);
   printf("Codigo: %s\n", codigo01);
   printf("População: %f\n", populacao01);
   printf("Área em km2: %f\n", area01);
   printf("PIB: %f\n", pib01);
   printf("Pontos turisticos: %d\n", pontos_turisticos01);

printf("Informações da carta 02:\n");
   printf("Nome da carta: %s\n", carta02);
   printf("Nome do estado: %s\n", estado02);
   printf("Nome da cidade: %s\n", cidade02);
   printf("Codigo: %s\n", codigo02);
   printf("População: %f\n", populacao02);
   printf("Área em km2: %f\n", area02);
   printf("PIB: %f\n", pib02);
   printf("Pontos turisticos: %d\n", pontos_turisticos02);


return 0;










  }

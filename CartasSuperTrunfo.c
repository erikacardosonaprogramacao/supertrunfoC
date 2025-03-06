#include <stdio.h>


int main() {
    
    
 //Variáveis Carta 1
 int pontos_turisticos;
 int populacao;
 float pib;
 float area;
 char nome[30];
 char codigo[10];
 char estado[10];


 //Variáveis Carta 2


 int populacao2;
 int pontos_turistico2; 
 char estado2[10]; 
 char codigo2[10]; 
 char nome2[10]; 
 float pib2; 
 float area2;

 // Dados da primeira carta, Cadastro 


 printf("Vamos cadastrar a primeira carta, digite o codigo da carta 1: ");
 scanf ("%s", &codigo);

 printf("Qual o nome da cidade da carta 1: ");
 scanf ("%s", &nome);

 printf("Qual o nome do estado da carta 1: ");
 scanf ("%s", &estado);

 printf ("Qual a população da primeira carta: ");
 scanf ("%f", &area);

 printf("Qual o pib : ");
 scanf("%f", &pib);

 printf("Qual a quantidade de pontos turisticos carta 1: ");
 scanf("%d", &pontos_turisticos);

 // Cadastro da segunda carta 

 printf("Vamos cadastrar a segunda carta, digite o codigo da carta 2: ");
 scanf("%s", &codigo2);

 printf("Qual o nome da cidade da carta 2: ");
 scanf("%s", &nome2);

 printf("Qual a população da segunda carta: ");
 scanf("%d", &populacao2);

 printf("Qual a area da segunda carta: ");
 scanf("%f", &area2);

 printf("Qual o pib da segunda carta: ");
 scanf("%f", &pib2);

 printf("Qual a quantidade de pontos turisticos da segunda carta: ");
 scanf("%d", &pontos_turistico2);



 // Impressão da carta 1

 printf("Carta 1\n");

 printf("Codigo da carta 1: %s\n", codigo);

 printf("Cidade da carta 1 %s\n", nome);

 printf("Populacao da carta 1: %.d\n", populacao);

 printf("Area da carta 1: %f\n", area); 

 printf("PIB da carta 1: %.2f\n", pib);

 printf("Pontos turisticos da carta 1: %d\n", pontos_turisticos);

// Impressão da carta 2

 printf("Carta 2\n");

 printf("Codigo da carta 2 %s\n", codigo2);

 printf("Cidade da carta 2 %s\n", nome2);

 printf("Populacao da carta 2: %d\n", populacao2);

 printf("Area da carta 2: %f\n", area2);

 printf("PIB da carta 2: %.2f\n", pib2);

 printf("Pontos turisticos da carta 2: %d\n",pontos_turistico2);





 return 0;
}

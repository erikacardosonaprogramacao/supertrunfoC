#include <stdio.h>

int main() {

int populacao = 11451999; 
int pontosTuristico = 30; 
char estado[50] = "São Paulo"; 
char codigoDacarta[50] = "A02"; 
char nomeDacidade[50] = "São paulo"; 
float PIB = 103000000; 
float area = 152120;

printf ("Desafio Carta 1 \n" );
printf("Nome da Cidade: %s\n", nomeDacidade);
printf("Estado: %s\n", estado);
printf("Populacao: %d\n", populacao);
printf("Pontos Turisticos: %d\n", pontosTuristico);
printf("Codigo da Carta: %s\n", codigoDacarta); 
printf("PIB: %.2f\n", PIB); 
printf("Area: %.2f km^2\n", area); 


return 0;

}

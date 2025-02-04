#include <stdio.h>

int main(){

char codigo[4] = "A01";
char nome[50] = "São paulo";
char estado[1] = "a";
int populaçao = 12345678;
int area = 1521;

printf("carta criada com sucesso!\n");
printf("codigo: %s\n", codigo);
printf("nome da cidade: %s\n", nome);
printf("estado: %s\n", estado);
printf("populaçao: %d habitantes\n", populaçao);
printf("area: %d km²\n", area);

("\n-----------------------------\n");

char codigo2[4] = "B02";
char nome2[50] = "RIO DE JANEIRO";
char estado2[1] = "B";
int populacao2 = 67890123;
int area2 = 1202;

printf("carta criada com sucesso!\n");
printf("codigo: %s\n", codigo2);
printf("nome da cidade: %s\n", nome2);
printf("estado: %s\n", estado2);
printf("populaçao: %d habitantes\n", populacao2);
printf("area: %d km²\n", area2);

return 0;

}

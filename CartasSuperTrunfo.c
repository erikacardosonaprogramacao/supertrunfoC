#include <stdio.h>

int main(){

    printf("Cartas Super Trunfo\n");
    
    int carta = 1;
    int populacao = 11450000;
    int numerodepontosturisticos = 36;
    double area = 1.521;
    float pibbilhoesdereais = 2.719751231; 
    char estado = 'A';
    char codigo[4] = "A01";
    char nomedaCidade[20] = "São Paulo";
     
    
   




    printf ("Carta: %d\n", carta);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomedaCidade);
    printf("População: %.2d\n", populacao);
    printf("Área: %.3f km²\n", area);
    printf("PIB: %.9f bilhões de reais\n", pibbilhoesdereais);
    printf("Números de Pontos Turísticos: %d\n", numerodepontosturisticos); 
    
    

    /*
printf("%formato1 %formato2 %formato3", variavel1 variavel2, variavel3, ...);

// Multiplicando por 1000 para converter para km²
    float areaEmKm2 = Areakm² * 1000;

%d: Imprime um inteiro no formato decimal.
%i: Equivalente a %d.
%f: Imprime um número de ponto flutuante no formato parão.
%e: Imprime um número de ponto flutuante na notação científica.
%C: Imprime um único caractere.
%s: Imprime uma cadeia (string) de caracteres.
*/

return 0;

}
























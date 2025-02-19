#include <stdio.h>

int main(){

    printf("Cartas Super Trunfo\n");
    printf("Novo Commit Diego\n");
    
    
    
    int idade = 1;                                      // Numero do estado representado em numeros de "1" a "8" 
    int populacao = 11450000;                               // População da cidade
    int quantidade = 36;                                        // Quantidade de idade
    double area = 1.521;                                   // Área em km²
    double pibbilhoesdereais = 2.719751231;                 // Produto interno bruto da cidade
    char estado = 'A';                                     // Nome do estado representado por um letra de "A" a "H"
    char codigo[4] = "A01";                                // Letra inicial do estado seguido de um numero ex: A01, A02, A03
    char nomedacidade[12] = "São Paulo";                  // Nome da cidade
     
    printf("Carta: %d\n", idade);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf ("Nome da Cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área: %.3f km²\n", area);
    printf("PIB: %.9f bilhões de reais\n", pibbilhoesdereais);
    printf("Números de Pontos Turísticos: %d\n", quantidade);

   
   
   
    printf ("Carta: %d\n", idade);
    scanf("%d", &idade);
    

    printf("Estado: %c\n", estado);
    scanf(" %c", &estado); // Note o espaço antes de %c para limpar o buffer
    

    printf("Código: %s\n", codigo);
    scanf("%3s", codigo);
    

    printf ("Nome da Cidade: %s\n", nomedacidade);
    scanf ("%11s", nomedacidade);
    

    printf("População: %d\n", populacao);
    scanf("%d", &populacao);
    

    printf("Área: %.3f km²\n", area);  // Corrigido para %lf
    scanf("%lf", &area); 
    

    printf("PIB: %.9f bilhões de reais\n", pibbilhoesdereais);
    scanf("%lf", &pibbilhoesdereais);  // Corrigido para %lf
    

    printf("Números de Pontos Turísticos: %d\n", quantidade);
    scanf("%d", &quantidade);

    

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
























#include <stdio.h>
int main() {
    int populacao1, populacao2;
    int pontos1, pontos2;
    float area1, area2;
    float pib1, pib2;
    char nome1[50], nome2[50];
    char opcao1, opcao2;
    char codigo1[20], codigo2[20];


    // LEITURA DA CARTA 1
    printf("VAMOS MONTAR JUNTOS NOSSAS CARTAS 'SUPER TRUNFO'?\n");
    printf("NOSSA PRIMEIRA ETAPA É MONTAR A PRIMEIRA CARTA DO JOGO!\n");
    printf("FIQUE ATENTO AOS CAMPOS DE PREENCHIMENTO PARA QUE POSSAMOS\n");
    printf("PREENCHER CONFORME SOLICITADO EM CADA LINHA.\n");
    printf("ENTÃO VAMOS NESSA!!!\n");
    printf("\n");
    printf("---------------------------------------------------\n");
    printf("\n");
    printf("Digite a letra do Estado da 1ª carta (A a H): ");
    scanf("%c", &opcao1);
    printf("Digite o Código da 1ª Carta (01 a 04): ");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade da 1ª Carta (Não pode ser nome composto): ");
    scanf("%s", &nome1);
    printf("Digite a quatidade de habitantes da cidade da 1ª Carta (Número inteiro): ");
    scanf("%d", &populacao1);
    printf("Digite o tamanho da área em km² da cidade da 1ª Carta (Número inteiro): ");
    scanf("%f", &area1);
    printf("Digite o valor do PIB da cidade da 1ª Carta (Número inteiro): ");
    scanf("%f", &pib1);
    printf("Digite quantos pontos turísticos tem na cidade da 1ª Carta (Número inteiro): ");
    scanf("%d", &pontos1);
    

    // IMPRESSÃO DA CARTA 1
    
    
    printf("\n");
    printf("---------------------------------------------------\n");
    printf("\n");
    printf("Carta 1:\n"); //Esta é a Carta 1 do jogo
    printf("Estado: %c\n", opcao1); //Campo para a informação da letra do Estado
    printf("Código: %c%s\n", opcao1, codigo1); //Campo para a informação do Códico com a letra do Estado e o número da carta
    printf("Nome da cidade: %s\n", nome1); //Campo para a informação do nome da cidade (Nome simple, ex.: FORTALEZA)
    printf("População: %d\n", populacao1); //Campo para a informação do número da população
    printf("Área: %.2f km²\n", area1); //Campo para a informação do tamanho da área da cidade informada acima em Km²
    printf("PIB: %.2f\n", pib1); //Campo para a informação do PIB (Produto Interno Bruto)
    printf("Numero de Pontos Turísticos: %d\n", pontos1); //Campo para a informação de quantos pontos turístico existem na cidade (Aproximadamente)
    printf("\n");
    printf("---------------------------------------------------\n");
    printf("\n");
    

    // LEITURA DA CARTA 2
    
    printf("UHUUU!!! CHEGAMOS A NOSSA SEGUNDA CARTA\n");
    printf("NA SEGUNDA CARTA, MANTEREMOS O MESMO PADRÃO DE CADASTRAMENTO.\n");
    printf("USAREMOS INFORMAÇÕES DE UMA OUTRA CIDADE E ESTADO COM\n");
    printf("CÓDIGOS DIFERENTES DA PRIMEIRA CARTA.\n");
    printf("ENTÃO, MÃOS A OBRA!!!\n");
    printf("\n");
    printf("---------------------------------------------------\n");
    printf("\n");
    printf("Digite a letra do Estado da 2ª carta (A a H): ");
    scanf("%s", &opcao2);
    printf("Digite o Código da 2ª Carta (01 a 04): ");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade da 2ª Carta (Não pode ser nome composto): ");
    scanf("%s", &nome2);
    printf("Digite a quatidade de habitantes da cidade da 2ª Carta (Número inteiro): ");
    scanf("%d", &populacao2);
    printf("Digite o tamanho da área em km² da cidade da 2ª Carta (Número inteiro): ");
    scanf("%f", &area2);
    printf("Digite o valor do PIB da cidade da 2ª Carta (Número inteiro): ");
    scanf("%f", &pib2);
    printf("Digite quantos pontos turísticos tem na cidade da 2ª Carta (Número inteiro): ");
    scanf("%d", &pontos2);    
    

    // IMPRESSÃO DA CARTA 2


    printf("\n");
    printf("---------------------------------------------------\n");
    printf("\n");
    printf("Carta 2:\n"); //Esta é a Carta 2 do jogo
    printf("Estado: %c\n", opcao2); //Campo para a informação da letra do Estado
    printf("Código: %c%s\n", opcao2, codigo2); //Campo para a informação do Códico com a letra do Estado e o número da carta
    printf("Nome da cidade: %s\n", nome2); //Campo para a informação do nome da cidade (Nome simple, ex.: FORTALEZA)
    printf("População: %d\n", populacao2); //Campo para a informação do número da população
    printf("Área: %.2f km²\n", area2); //Campo para a informação do tamanho da área da cidade informada acima em Km²
    printf("PIB: %.2f\n", pib2); //Campo para a informação do PIB (Produto Interno Bruto)
    printf("Numero de Pontos Turísticos: %d\n", pontos2); //Campo para a informação de quantos pontos turístico existem na cidade (Aproximadamente)
    printf("\n");
    printf("---------------------------------------------------\n");
    printf("\n");
}

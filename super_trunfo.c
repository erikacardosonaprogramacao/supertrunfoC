#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado01, estado02;
    char codigo01[3], codigo02[3];
    char nomecidade01[20], nomecidade02[20];
    unsigned long int populacao01, populacao02;
    float area01, area02;
    float pib01, pib02;
    int pturisticos01, pturisticos02;
    float densidade01, densidade02;
    float pib_percapita01, pib_percapita02;
    float superpoder01, superpoder02, inverso_densidade01, inverso_densidade02;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("====Cadastro das Cartas====\n");
    printf(">>>PRIMEIRA CARTA<<<\n");
    printf("Digite uma leta de 'A' a 'H' (representando um estado): ");
    scanf(" %c", &estado01); // Armazena a letra que corresponde ao estado
    printf("Digite o código da cidade: "); 
    scanf("%s", codigo01); // Armazena o código da carta
    printf("Digite o nome da cidade: ");
    getchar();
    scanf(" %[^\n]", nomecidade01); // Armazena o nome da cidade
    printf("Digite a população: ");
    scanf("%lu", &populacao01); // Armazena a população
    printf("Digite a área (km²): ");
    scanf("%f", &area01); //Armazena a área
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib01); //Armazena o PIB
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pturisticos01);//Armazena o número de pontos turísticos
    printf("+-+-+- CARTA CADASTRADA COM SUCESSO -+-+-+\n");

    printf("\n");

    printf(">>>SEGUNDA CARTA<<<\n");
    printf("Digite uma leta de 'A' a 'H' (representando um estado): ");
    scanf(" %c", &estado02);
    printf("Digite o código da cidade: ");
    getchar();
    scanf("%s", codigo02);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomecidade02);
    printf("Digite a população: ");
    scanf("%lu", &populacao02);
    printf("Digite a área (km²): ");
    scanf("%f", &area02);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib02);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pturisticos02);
    printf("+-+-+- CARTA CADASTRADA COM SUCESSO -+-+-+\n"); 

    // Calculo da Densidade populacional e do PIB per Capita
    densidade01 = populacao01 / area01;
    densidade02 = populacao02 / area02;

    pib_percapita01 = pib01 / populacao01;
    pib_percapita02 = pib02 / populacao02;
    
    /*Cálculo do inverso da densidade populacional:
      Divisão de 1 pelo valor da densidade,
      identificando o maior valor como o com menor densidade populacional*/
    inverso_densidade01 = 1 / (densidade01 + 0.0001);
    inverso_densidade02 = 1 / (densidade02 + 0.0001);

    //Soma dos atributos para obter o super poder (população, área, PIB,pontos turísticos, PIB per capita e o inverso da densidade populacional)
    superpoder01 = populacao01 + area01 + pib01 + pturisticos01 + pib_percapita01 + inverso_densidade01;
    superpoder02 = populacao02 + area02 + pib02 + pturisticos02 + pib_percapita02 + inverso_densidade02;

    printf("\n");
    
    int escolha;

    printf("====HORA DE COMPARAR AS CARTAS====\n");
    printf("[1] Nome da cidade (somente para exibir as informações)\n");
    printf("[2] População\n");
    printf("[3] Área\n");
    printf("[4] PIB\n");
    printf("[5] Número de Pontos Turísticos\n");
    printf("[6] Densidade demográfica\n");
    printf("Escolha um atributa para comparar: \n");
    scanf("%d", &escolha);
    
    switch (escolha)
    {
      case 1:
        printf("===CARTA 01===\n");
        printf("Estado: %c\n", estado01); //Exibe a letra que corresponde ao estado
        printf("Código: %3s\n", codigo01);// Exibe o código da carta
        printf("Nome da cidade: %s\n", nomecidade01); //Exibe o nome da cidade
        printf("População: %lu habitantes\n", populacao01); //Exie a número total da população
        printf("Área: %.2f km²\n", area01); // Exibe a área
        printf("PIB (Produto Interno Bruto): R$%.2f\n", pib01); //Exibe o PIB
        printf("Número de pontos turísticos: %d\n", pturisticos01); //Exibe o número de pontos turísticos
        printf("Densidade demográfica: %.2f hab/km²\n", densidade01); // Exibe o número de densidade demográfica
        printf("PIB per Capita: R$%.2f\n", pib_percapita01); //Exibe o PIB per Capita
        printf("Super Poder: %.2f\n", superpoder01); //Exibe a soma dos atributos
        printf("\n");
    
        printf("===CARTA 02===\n");
        printf("Estado: %c\n", estado02);
        printf("Código: %3s\n", codigo02);
        printf("Nome da cidade: %s\n", nomecidade02);
        printf("População: %lu habitantes\n", populacao02);
        printf("Área: %.2f km²\n", area02);
        printf("PIB (Produto Interno Bruto): R$%.2f\n", pib02);
        printf("Número de pontos turísticos: %d\n", pturisticos02);
        printf("Densidade demográfica: %.2f hab/km²\n", densidade02);
        printf("PIB per Capita: R$%.2f\n", pib_percapita02);
        printf("Super Poder: %.2f\n", superpoder02);
        printf("\n");
        break;

      case 2:
        printf("+-+-+-+-COMPARANDO A POPULAÇAO+-+-+-+-\n");
        printf("Carta 01: %lu habitantes\n", populacao01);
        printf("Carta 02: %lu habitantes\n", populacao02);
        printf("Resultado: ");
        if (populacao01 > populacao02)
        {
          printf("CARTA 01 VENCEU!!!");
        }
        else if (populacao01 < populacao02)
        {
          printf("CARTA 02 VENCEU!!!");
        }
        else
        {
          printf("EMPATE!!");
        }
        break;
      
      case 3:
        printf("+-+-+-+-COMPARANDO A ÁREA+-+-+-+-\n");
        printf("Carta 01: %.2f\n", area01);
        printf("Carta 02: %.2f\n", area02);
        printf("Resultado: ");
        if (area01 > area02)
        {
          printf("CARTA 01 VENCEU!!!");
        }
        else if (area01 < area02)
        {
          printf("CARTA 02 VENCEU!!!"); 
        }
        else
        {
          printf("EMPATE!!");
        }
        break;

      case 4:
        printf("+-+-+-+-COMPARANDO O PIB+-+-+-+-\n");
        printf("Carta 01: R$%.2f\n", pib01);
        printf("Carta 02: R$%.2f\n", pib02);
        printf("Resultado: ");
        if (pib01 > pib02)
        {
          printf("CARTA 01 VENCEU!!!");
        }
        else if (pib01 < pib02)
        {
          printf("CARTA 02 VENCEU!!!");
        }
        else
        {
          printf("EMPATE!!");
        }
        break;

      case 5:
        printf("+-+-+-+-COMPARANDO O NÚMERO DE PONTOS TURÍSTICOS+-+-+-+-\n");
        printf("Carta 01: %d pontos turísticos\n", pturisticos01);
        printf("Carta 02: %d pontos turísticos\n", pturisticos02);
        printf("Resultado: ");
        if (pturisticos01 > pturisticos02)
        {
          printf("CARTA 01 VENCEU!!!");
        }
        else if (pturisticos01 < pturisticos02)
        {
          printf("CARTA 02 VENCEU!!!");
        }
        else
        {
          printf("EMPATE!!");
        }
        break;

      case 6:
        printf("+-+-+-+-COMPARANDO A DENSIDADE DEMOGRÁFICA+-+-+-+-\n");
        printf("Carta 01: %.2f hab/km²\n", densidade01);
        printf("Carta 02: %.2f hab/km²\n", densidade02);
        printf("Resultado: ");
        if (densidade01 < densidade02)
        {
          printf("CARTA 01 VENCEU!!!");
        }
        else if (densidade01 > densidade02)
        {
          printf("CARTA 02 VENCEU!!!");
        }
        else
        {
          printf("EMPATE!!");
        }
        break;

      default:
        printf("Opção inválida! Tente novamente!\n");
    }

    
    return 0;
}

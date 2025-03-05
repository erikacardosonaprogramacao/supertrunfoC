#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Variáveis carta 1
    char estado[50] = "Sao Paulo";
    char codigodacarta[50] = "B01";
    char nomedacidade[50] = "Bauru";
    int populacao = 379174;
    float area = 668.684;
    float pib = 16000000000;
    int pontosturisticos = 3;
    float densidadepopulacional = (float)populacao / area;
    float pibpercapita = pib / populacao;

    // Variáveis carta 2
    char estado2[50] = "Sao Paulo";
    char codigodacarta2[50] = "B02";
    char nomedacidade2[50] = "Arealva";
    int populacao2 = 479174;
    float area2 = 557.573;
    float pib2 = 15000000000;
    int pontosturisticos2 = 3;
    float densidadepopulacional2 = (float)populacao2 / area2;
    float pibpercapita2 = pib2 / populacao2;

    // Jogador
    int escplayer1, escplayer2, escplayer3, esccpu1, esccpu2, esccpu3; 

    // Variáveis de cálculo
    float inversaDensidade = (densidadepopulacional > 0) ? (1 / densidadepopulacional) : 0;
    float inversadensidade2 = (densidadepopulacional2 > 0) ? (1 / densidadepopulacional2) : 0;
    float superpoder = populacao + area + pib + pontosturisticos + pibpercapita + inversaDensidade;
    float superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + inversadensidade2;

    char* exbir[50];
    
    srand(time(0));

    // Menu
    printf("*** Menu Principal ***\n");
    printf("1- Jogar\n");
    printf("2- Regras do Jogo\n");
    printf("3- Desistir\n");
    scanf("%d", &escplayer1);

    switch (escplayer1) {
    case 1:
        printf("Vamos jogar!\n");
        break;
    case 2:
        printf("A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.\n");
        break;
    case 3:
        printf("Obrigado por jogar!\n");
        return 0;
    default:
        printf("Opção inválida!\n");
        break;
    }

    

    printf("\nEscolha uma carta:\n");
    printf("1- %s\n", codigodacarta);
    printf("2- %s\n", codigodacarta2);
    scanf("%d", &escplayer1);

    esccpu1 = (escplayer1 == 1) ? 2 : 1;

    //exibir carta 1 
    
    switch (escplayer1) {
        case 1:
            // Exibição da Carta 1
            printf("\n###   CARTA JOGADOR   ###\n");
            printf("\n*** Carta %s ***\n", codigodacarta);
            printf("Estado: %s\n", estado);
            printf("Nome da Cidade: %s\n", nomedacidade);
            printf("1- Populacao: %d\n", populacao);
            printf("2- Area: %.3f\n", area);
            printf("3- PIB: %.3f\n", pib);
            printf("4- Pontos Turísticos: %d\n", pontosturisticos);
            printf("5- Densidade Populacional: %.2f\n", densidadepopulacional);
            printf("6- PIB per Capita: %.2f\n", pibpercapita);
            printf("7- SUPER PODER: %.3f\n", superpoder);
            break;
        case 2:
            // Exibição da Carta 2
            printf("\n###   CARTA JOGADOR   ###\n");
            printf("\n*** Carta %s ***\n", codigodacarta2);
            printf("Estado: %s\n", estado2);
            printf("Código da carta: %s\n", codigodacarta2);
            printf("Nome da Cidade: %s\n", nomedacidade2);
            printf("1- Populacao: %d\n", populacao2);
            printf("2- Area: %.3f\n", area2);
            printf("3- PIB: %.3f\n", pib2);
            printf("4- Pontos Turísticos: %d\n", pontosturisticos2);
            printf("5- Densidade Populacional: %.2f\n", densidadepopulacional2);
            printf("6- PIB per Capita: %.2f\n", pibpercapita2);
            printf("7- SUPER PODER: %.3f\n", superpoder2);
            break;
        default:
            printf("Desculpe, nao temos essa carta!\n");
            break;
        }
        switch (esccpu1) {
            case 1:
                // Exibição da Carta 1
                printf("\n###   CARTA COMPUTADOR   ###\n");
                printf("\n*** Carta %s ***\n", codigodacarta);
                printf("Estado: %s\n", estado);
                printf("Nome da Cidade: %s\n", nomedacidade);
                printf("1- Populacao: %d\n", populacao);
                printf("2- Area: %.3f\n", area);
                printf("3- PIB: %.3f\n", pib);
                printf("4- Pontos Turísticos: %d\n", pontosturisticos);
                printf("5- Densidade Populacional: %.2f\n", densidadepopulacional);
                printf("6- PIB per Capita: %.2f\n", pibpercapita);
                printf("7- SUPER PODER: %.3f\n", superpoder);
                break;
            case 2:
                // Exibição da Carta 2
                printf("\n###   CARTA COMPUTADOR   ###\n");
                printf("\n*** Carta %s ***\n", codigodacarta2);
                printf("Estado: %s\n", estado2);
                printf("Código da carta: %s\n", codigodacarta2);
                printf("Nome da Cidade: %s\n", nomedacidade2);
                printf("1- Populacao: %d\n", populacao2);
                printf("2- Area: %.3f\n", area2);
                printf("3- PIB: %.3f\n", pib2);
                printf("4- Pontos Turísticos: %d\n", pontosturisticos2);
                printf("5- Densidade Populacional: %.2f\n", densidadepopulacional2);
                printf("6- PIB per Capita: %.2f\n", pibpercapita2);
                printf("7- SUPER PODER: %.3f\n", superpoder2);
                break;
            default:
                printf("Desculpe, nao temos essa carta!\n");
                break;
            }

    char* cidade = (escplayer1 == 1) ? nomedacidade : nomedacidade2;
    char* cod = (escplayer1 == 1) ? codigodacarta : codigodacarta2;
    char* cidade1 = (esccpu1 == 1) ? nomedacidade : nomedacidade2;
    char* cod1 = (esccpu1 == 1) ? codigodacarta : codigodacarta2;            

    printf("Escolha um dos Atributos: ");
    scanf("%d", &escplayer2);

    esccpu2 = escplayer2;
    
    

    int atributo = escplayer2;
    float valorJogador = 0;
    float valorCPU = 0;
    char* cidadeJogador = (escplayer1 == 1) ? nomedacidade : nomedacidade2;
    char* cidadeCPU = (esccpu1 == 1) ? nomedacidade : nomedacidade2;

    
    switch (atributo) {
    case 1:
        valorJogador = (escplayer1 == 1) ? populacao : populacao2;
        valorCPU = (esccpu1 == 1) ? populacao : populacao2;
        break;
    case 2:
        valorJogador = (escplayer1 == 1) ? area : area2;
        valorCPU = (esccpu1 == 1) ? area : area2;
            break;
    case 3:
        valorJogador = (escplayer1 == 1) ? pib : pib2;
        valorCPU = (esccpu1 == 1) ? pib : pib2;
        break;
    case 4:
        valorJogador = (escplayer1 == 1) ? pontosturisticos : pontosturisticos2;
        valorCPU = (esccpu1 == 1) ? pontosturisticos : pontosturisticos2;
        break;
    case 5:
        valorJogador = (escplayer1 == 1) ? densidadepopulacional : densidadepopulacional2;
        valorCPU = (esccpu1 == 1) ? densidadepopulacional : densidadepopulacional2;
        break;
    case 6:
        valorJogador = (escplayer1 == 1) ? pibpercapita : pibpercapita2;
        valorCPU = (esccpu1 == 1) ? pibpercapita : pibpercapita2;
        break;
    case 7:
        valorJogador = (escplayer1 == 1) ? superpoder : superpoder2;
        valorCPU = (esccpu1 == 1) ? superpoder : superpoder2;
        break;
    default:
        printf("Desculpe, nao temos esse Atributo!\n");
        return 0;
    }
    
    printf("Escolha o segundo atribudo: ");
    scanf("%d", &escplayer3);

    esccpu3 = escplayer3;
    
    

    int atributo2 = escplayer3;
    float valorJogador1 = 0;
    float valorCPU1 = 0;

    if (atributo == atributo2)
    {
        printf("Voce escolheu o mesmo atributo!!");
        return 0;
    }
    

    switch (atributo2) {
    case 1:
        valorJogador1 = (escplayer1 == 1) ? populacao : populacao2;
        valorCPU1 = (esccpu1 == 1) ? populacao : populacao2;
        break;
    case 2:
        valorJogador1 = (escplayer1 == 1) ? area : area2;
        valorCPU1 = (esccpu1 == 1) ? area : area2;
            break;
    case 3:
        valorJogador = (escplayer1 == 1) ? pib : pib2;
        valorCPU1 = (esccpu1 == 1) ? pib : pib2;
        break;
    case 4:
        valorJogador1 = (escplayer1 == 1) ? pontosturisticos : pontosturisticos2;
        valorCPU1 = (esccpu1 == 1) ? pontosturisticos : pontosturisticos2;
        break;
    case 5:
        valorJogador1 = (escplayer1 == 1) ? densidadepopulacional : densidadepopulacional2;
        valorCPU1 = (esccpu1 == 1) ? densidadepopulacional : densidadepopulacional2;
        break;
    case 6:
        valorJogador1 = (escplayer1 == 1) ? pibpercapita : pibpercapita2;
        valorCPU1 = (esccpu1 == 1) ? pibpercapita : pibpercapita2;
        break;
    case 7:
        valorJogador1 = (escplayer1 == 1) ? superpoder : superpoder2;
        valorCPU1 = (esccpu1 == 1) ? superpoder : superpoder2;
        break;
    default:
        printf("Desculpe, nao temos esse Atributo!\n");
        return 0;
    }
    float soma = valorJogador + valorJogador1;     
    float soma1 = valorCPU + valorCPU1;

    // Exibição player ATRIBUTO 1
    switch (escplayer2) {
        case 1:
        printf("\n### - CARTA JOGADOR (%s) - ###\n", cod);
        printf("Cidade: %s\n", cidade);
            if (valorJogador > valorCPU) {
                printf("1- Populacao: %d Venceu! \n", (int)valorJogador);
            } else if (valorJogador < valorCPU) {
                printf("1- Populacao: %d Perdeu!! \n", (int)valorJogador);
            } else {
                printf("1- Populacao: %d Empatou!\n", (int)valorJogador);
            }
            break;
        case 2:
        printf("\n### - CARTA JOGADOR (%s) - ###\n", cod);
        printf("Cidade: %s\n", cidade);
        if (valorJogador > valorCPU) {
            printf("2- Area: %.3f Venceu! \n", (float)valorJogador); 
        } else if (valorJogador < valorCPU) {
            printf("2- Area: %.3f Perdeu! \n", (float)valorJogador);
        } else {
            printf("2- Area: %.3f Empatou! \n", (float)valorJogador);
        }
           break;
        case 3:
        printf("\n### - CARTA JOGADOR (%s) - ###\n", cod);
        printf("Cidade: %s\n", cidade);
        if (valorJogador > valorCPU) {
            printf("3- PIB: %.3f Venceu!! \n", (float)valorJogador); 
        } else if (valorJogador < valorCPU) {
            printf("3- PIB: %.3f Perdeu!! \n", (float)valorJogador);
        } else {
            printf("3- PIB: %.3f Empatou! \n", (float)valorJogador);
        }
            break;
        case 4:
        printf("\n### - CARTA JOGADOR (%s) - ###\n", cod);
        printf("Cidade: %s\n", cidade);
        if (valorJogador > valorCPU) {
            printf("4- Pontos Turisticos: %d Venceu! \n", (int)valorJogador);
        } else if (valorJogador < valorCPU) {
            printf("4- Pontos Turisticos: %d Perdeu!! \n", (int)valorJogador);
        } else {
            printf("4- Pontos Turisticos: %d Empatou! \n", (int)valorJogador);  
        }
            break;
        case 5:
        printf("\n### - CARTA JOGADOR (%s) - ###\n", cod);
        printf("Cidade: %s\n", cidade);
            // Regra invertida para a densidade populacional
        if (valorJogador < valorCPU) {
            printf("5- Densidade Populacional: %.2f Venceu! \n", (float)valorJogador);                
        } else if (valorJogador > valorCPU) {
            printf("5- Densidade Populacional: %.2f Perdeu! \n", (float)valorJogador); 
        } else {
            printf("5- Densidade Populacional: %.2f Empatou! \n", (float)valorJogador); 
        }
            break;
        case 6:
        printf("\n### - CARTA JOGADOR (%s) - ###\n", cod);
        printf("Cidade: %s\n", cidade);
        if (valorJogador > valorCPU) {
            printf("6- PIB per Capita: %.2f Venceu! \n", (float)valorJogador); 
        } else if (valorJogador < valorCPU) {
            printf("6- PIB per Capita: %.2f Perdeu! \n", (float)valorJogador);
        } else {
            printf("6- PIB per Capita: %.2f Empatou! \n", (float)valorJogador);
        }
            break;
        case 7:
        printf("\n### - CARTA JOGADOR (%s) - ###\n", cod);
        printf("Cidade: %s\n", cidade);
        if (valorJogador > valorCPU) {
            printf("7- SUPER PODER: %.3f Venceu! \n", (float)valorJogador); 
        } else if (valorJogador < valorCPU) {
            printf("7- SUPER PODER: %.3f Perdeu! \n", (float)valorJogador);
        } else {
            printf("7- SUPER PODER: %.3f Empatou! \n", (float)valorJogador);
        }
            break;
        default:
        printf("Desculpe, nao temos esse Atributo!\n");
            return 0;
    }
        //ATRIBUTO 2
        switch (escplayer3) {
            case 1:
                if (valorJogador1 > valorCPU1) {
                    printf("1- Populaçao: %d Venceu! \n", (int)valorJogador1);
                } else if (valorJogador1 < valorCPU1) {
                    printf("1- Populaçao: %d Perdeu!! \n", (int)valorJogador1);
                } else {
                    printf("1- Populaçao: %d Empatou!\n", (int)valorJogador1);
                }
                break;
            case 2:
            if (valorJogador1 > valorCPU1) {
                printf("2- Area: %.3f Venceu! \n", (float)valorJogador1); 
            } else if (valorJogador1 < valorCPU1) {
                printf("2- Area: %.3f Perdeu! \n", (float)valorJogador1);
            } else {
                printf("2- Area: %.3f Empatou! \n", (float)valorJogador1);
            }
                break;
            case 3:
            if (valorJogador1 > valorCPU1) {
                printf("3- PIB: %.3f Venceu!! \n", (float)valorJogador1); 
            } else if (valorJogador1 < valorCPU1) {
                printf("3- PIB: %.3f Perdeu!! \n", (float)valorJogador1);
            } else {
                printf("3- PIB: %.3f Empatou! \n", (float)valorJogador1);
            }
                break;
            case 4:
            if (valorJogador1 > valorCPU1) {
                printf("4- Pontos Turisticos: %d Venceu! \n", (int)valorJogador1);
            } else if (valorJogador1 < valorCPU1) {
                printf("4- Pontos Turisticos: %d Perdeu!! \n", (int)valorJogador1);
            } else {
                printf("4- Pontos Turisticos: %d Empatou! \n", (int)valorJogador1);  
            }
                break;
            case 5:
                // Regra invertida para a densidade populacional
                if (valorJogador1 < valorCPU1) {
                    printf("5- Densidade Populacional: %.2f Venceu! \n", (float)valorJogador1);                
                } else if (valorJogador1 > valorCPU1) {
                    printf("5- Densidade Populacional: %.2f Perdeu! \n", (float)valorJogador1); 
                } else {
                    printf("5- Densidade Populacional: %.2f Empatou! \n", (float)valorJogador1); 
                }
                break;
            case 6:
            if (valorJogador1 > valorCPU1) {
                printf("6- PIB per Capita: %.2f Venceu! \n", (float)valorJogador1); 
            } else if (valorJogador1 < valorCPU1) {
                printf("6- PIB per Capita: %.2f Perdeu! \n", (float)valorJogador1);
            } else {
                printf("6- PIB per Capita: %.2f Empatou! \n", (float)valorJogador1);
            }
                break;
            case 7:
            if (valorJogador1 > valorCPU1) {
                printf("7- SUPER PODER: %.3f Venceu! \n", (float)valorJogador1); 
            } else if (valorJogador1 < valorCPU1) {
                printf("7- SUPER PODER: %.3f Perdeu! \n", (float)valorJogador1);
            } else {
                printf("7- SUPER PODER: %.3f Empatou! \n", (float)valorJogador1);
            }
                break;
            default:
            printf("Desculpe, nao temos esse Atributo!\n");
                return 0;
            }
            //Soma dos atributos
    if (soma > soma1){
            printf("Soma: %.2f Venceu!\n", soma);
    } else {
            printf("Soma: %.2f Perdeu!\n", soma);
    }
             
    // Exibição atributo 1 CPU
    switch (esccpu2) {
        case 1:
        printf("\n### - CARTA CPU (%s) - ###\n", cod1);
        printf("Cidade: %s\n", cidade1);
            if (valorJogador > valorCPU) {
                printf("1- Populacao: %d Perdeu! \n", (int)valorCPU);
            } else if (valorJogador < valorCPU) {
                printf("1- Populacao: %d Venceu! \n", (int)valorCPU);
            } else {
                printf("1- Populacao: %d Empatou!\n", (int)valorCPU);
            }
            break;
        case 2:
        printf("\n### - CARTA CPU (%s) - ###\n", cod1);
        printf("Cidade: %s\n", cidade1);
        if (valorJogador > valorCPU) {
            printf("2- Area: %.3f Perdeu! \n", (float)valorCPU); 
        } else if (valorJogador < valorCPU) {
            printf("2- Area: %.3f Venceu! \n", (float)valorCPU);
        } else {
            printf("2- Area: %.3f Empatou! \n", (float)valorCPU);
        }
            break;
        case 3:
        printf("\n### - CARTA CPU (%s) - ###\n", cod1);
        printf("Cidade: %s\n", cidade1);
        if (valorJogador > valorCPU) {
            printf("3- PIB: %.3f Perdeu! \n", (float)valorCPU); 
        } else if (valorJogador < valorCPU) {
            printf("3- PIB: %.3f Venceu! \n", (float)valorCPU);
        } else {
            printf("3- PIB: %.3f Empatou! \n", (float)valorCPU);
        }
            break;
        case 4:
        printf("\n### - CARTA CPU (%s) - ###\n", cod1);
        printf("Cidade: %s\n", cidade1);
        if (valorJogador > valorCPU) {
            printf("4- Pontos Turisticos: %d Perdeu! \n", (int)valorCPU);
        } else if (valorJogador < valorCPU) {
            printf("4- Pontos Turisticos: %d Venceu! \n", (int)valorCPU);
        } else {
            printf("4- Pontos Turisticos: %d Empatou! \n", (int)valorCPU);  
        }         
            break;
        case 5:
        printf("\n### - CARTA CPU (%s) - ###\n", cod1);
        printf("Cidade: %s\n", cidade1);
        // Regra invertida para a densidade populacional
        if (valorJogador < valorCPU) {
            printf("5- Densidade Populacional: %.2f Perdeu! \n", (float)valorCPU);                
        } else if (valorJogador > valorCPU) {
            printf("5- Densidade Populacional: %.2f Venceu! \n", (float)valorCPU); 
        } else {
            printf("5- Densidade Populacional: %.2f Empatou! \n", (float)valorCPU); 
        }            break;
        case 6:
        printf("\n### - CARTA CPU (%s) - ###\n", cod1);
        printf("Cidade: %s\n", cidade1);
        if (valorJogador > valorCPU) {
            printf("6- PIB per Capita: %.2f Perdeu! \n", (float)valorCPU); 
        } else if (valorJogador < valorCPU) {
            printf("6- PIB per Capita: %.2f Venceu! \n", (float)valorCPU);
        } else {
            printf("6- PIB per Capita: %.2f Empatou! \n", (float)valorCPU);
        }
            break;
        case 7:
        printf("\n### - CARTA CPU (%s) - ###\n", cod1);
        printf("Cidade: %s\n", cidade1);
        if (valorJogador > valorCPU) {
            printf("7- SUPER PODER: %.3f Perdeu! \n", (float)valorCPU); 
        } else if (valorJogador < valorCPU) {
            printf("7- SUPER PODER: %.3f Venceu! \n", (float)valorCPU);
        } else {
            printf("7- SUPER PODER: %.3f Empatou! \n", (float)valorCPU);
        }
            break;
        default:
        printf("Desculpe, nao temos esse Atributo!\n");
            return 0;
        }

         // Exibição atributo 1 CPU
    switch (esccpu3) {
        case 1:
        if (valorJogador1 > valorCPU1) {
            printf("1- Populacao: %d Perdeu! \n", (int)valorCPU1);
        } else if (valorJogador1 < valorCPU1) {
            printf("1- Populacao: %d Venceu! \n", (int)valorCPU1);
        } else {
            printf("1- Populacao: %d Empatou!\n", (int)valorCPU1);
        }
            break;
        case 2:
        if (valorJogador1 > valorCPU1) {
            printf("2- Area: %.3f Perdeu! \n", (float)valorCPU1); 
        } else if (valorJogador1 < valorCPU1) {
            printf("2- Area: %.3f Venceu! \n", (float)valorCPU1);
        } else {
            printf("2- Area: %.3f Empatou! \n", (float)valorCPU1);
        }
            break;
        case 3:
        if (valorJogador1 > valorCPU1) {
            printf("3- PIB: %.3f Perdeu! \n", (float)valorCPU1); 
        } else if (valorJogador1 < valorCPU1) {
            printf("3- PIB: %.3f Venceu! \n", (float)valorCPU1);
        } else {
            printf("3- PIB: %.3f Empatou! \n", (float)valorCPU1);
        }
            break;
        case 4:
           if (valorJogador1 > valorCPU1) {
                printf("4- Pontos Turisticos: %d Perdeu! \n", (int)valorCPU1);
            } else if (valorJogador1 < valorCPU1) {
                printf("4- Pontos Turisticos: %d Venceu! \n", (int)valorCPU1);
            } else {
                printf("4- Pontos Turisticos: %d Empatou! \n", (int)valorCPU1);  
            }
            break;
        case 5:
        // Regra invertida para a densidade populacional
        if (valorJogador1 < valorCPU1) {
            printf("5- Densidade Populacional: %.2f Perdeu! \n", (float)valorCPU1);                
        } else if (valorJogador1 > valorCPU1) {
            printf("5- Densidade Populacional: %.2f Venceu! \n", (float)valorCPU1); 
        } else {
            printf("5- Densidade Populacional: %.2f Empatou! \n", (float)valorCPU1); 
        }
            break;
        case 6:
        if (valorJogador1 > valorCPU1) {
            printf("6- PIB per Capita: %.2f Perdeu! \n", (float)valorCPU1); 
        } else if (valorJogador1 < valorCPU) {
            printf("6- PIB per Capita: %.2f Venceu! \n", (float)valorCPU1);
        } else {
            printf("6- PIB per Capita: %.2f Empatou! \n", (float)valorCPU1);
        }
            break;
        case 7:
        if (valorJogador1 > valorCPU1) {
            printf("7- SUPER PODER: %.3f Perdeu! \n", (float)valorCPU1); 
        } else if (valorJogador1 < valorCPU1) {
            printf("7- SUPER PODER: %.3f Venceu! \n", (float)valorCPU1);
        } else {
            printf("7- SUPER PODER: %.3f Empatou! \n", (float)valorCPU1);
        }
            break;
        default:
        printf("Desculpe, nao temos esse Atributo!\n");
            return 0;
        }

        if (soma > soma1){
            printf("Soma: %.2f Perdeu!\n", soma1);
    } else {
            printf("Soma: %.2f Venceu!\n", soma1);
    }

    //Declaração do Vencedor!!
    printf("\n### Vencedor da Rodada ###\n");
    if (soma > soma1){
        printf("Carta: %s \n", cod);
} else {
        printf("Carta: %s \n", cod1);
} 
    

    return 0;
}

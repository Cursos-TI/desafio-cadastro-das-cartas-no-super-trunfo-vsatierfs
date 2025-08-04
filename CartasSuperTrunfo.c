#include <stdio.h>
#include <stdlib.h>

int main() {

    char estado1, estado2;
    char codigoEstado1[5], codigoEstado2[5];
    char nomeCidade1[14], nomeCidade2[14];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontoTuristico1, pontoTuristico2;

    //cadastramento primeira carta
    printf("Insira as informacoes da primeira carta:\n"); 
    printf("Nome do estado (letra de 'A' a 'H'): \n");
    scanf("%c", &estado1);
    printf("Codigo da carta (letra do estado e um numero de 01 a 04): \n");
    scanf("%3s", &codigoEstado1);
    printf("Nome da cidade: \n");
    scanf(" %[^\n]", &nomeCidade1);
    printf("Populacao: \n");
    scanf("%lu", &populacao1);
    printf("Area:  \n");
    scanf("%f", &area1);
    printf("PIB:  \n ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: \n ");
    scanf("%d", &pontoTuristico1);

    //calculo densidade populacional carta 1
    float densidadePopulacional1 = (float)populacao1 / area1;
    //calculo PIB per capita carta 1
    float PIBperCapita1 = (pib1  *  1000000000.0)/ (float)populacao1;
    //superpoder carta 1
    float superPoder1 = populacao1 + area1 + pontoTuristico1 + pib1 + PIBperCapita1 + (1/densidadePopulacional1);

    //cadastramento segunda carta
    printf("Insira as informacoes da segunda carta:\n"); 
    printf("Nome do estado (letra de 'A' a 'H'):\n");
    scanf(" %[^\n]"); //limpeza de buffer
    scanf("%c", &estado2);
    printf("Codigo da carta (letra do estado e um numero de 01 a 04): \n");
    scanf("%3s", &codigoEstado2);
    printf("Nome da cidade: \n");
    scanf(" %[^\n]", &nomeCidade2);
    printf("Populacao: \n");
    scanf("%lu", &populacao2);
    printf("Area:  \n");
    scanf("%f", &area2);
    printf("PIB:  \n ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: \n ");
    scanf("%d", &pontoTuristico2);

    //calculo densidade populacional carta 2
    float densidadePopulacional2 = (float)populacao2 / area2;
    //calculo PIB per capita carta 2
    float PIBperCapita2 = (pib2 * 1000000000.0) / (float)populacao2;
    //superpoder carta 2
    float superPoder2 = populacao2 + area2 + pontoTuristico2 + pib2 + PIBperCapita2 + (1/densidadePopulacional2);

    //dados primeira carta
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo do estado: %s\n", codigoEstado1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f\ km²\n", area1);
    printf("PIB: R$%.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontoTuristico1);
    printf("Densidade populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per capita: R$%.2f\n", PIBperCapita1);
    printf("\n--------------\n");
 
    //dados segunda carta
    printf("Carta 2\n");
    printf("Estado: %c", estado2);
    printf("Codigo do estado: %s\n", codigoEstado2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: R$%.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontoTuristico2);
    printf("Densidade populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per capita: R$%.2F\n", PIBperCapita2);

    
    
    //comparação entre cartas
    printf("Comparacao entre cartas:");
    //população
    printf("Populaçao\n");
    if (populacao1 > populacao2) {
        printf("Carta 1 venceu! (1)\n");
    } else if (populacao2 > populacao1) {
        printf("Carta 2 venceu! (0)\n");
    } else {
        printf("Empate!\n");
    }

    //area
    printf("Area\n");
    if (area1 > area2) {
        printf("Carta 1 venceu! (1)\n");
    } else if (area2 > area1) {
        printf("Carta 2 venceu! (0)\n");
    } else {
        printf("Empate!\n");
    }

    //PIB
    printf("PIB\n");
    if (pib1 > pib2) {
        printf("Carta 1 venceu! (1)\n");
    } else if (pib2 > pib1) {
        printf("Carta 2 venceu! (0)\n");
    } else {
        printf("Empate!\n");
    }

    //pontos turisticos
    printf("Pontos Turisticos\n");
    if (pontoTuristico1 > pontoTuristico2) {
        printf("Carta 1 venceu! (1)\n");
    } else if (pontoTuristico2 > pontoTuristico1) {
        printf("Carta 2 venceu! (0)\n");
    } else {
        printf("Empate!\n");
    }

    //PIB per capita
    printf("PIB per capita\n");
    if (PIBperCapita1 > PIBperCapita2) {
        printf("Carta 1 venceu! (1)\n");
    } else if (PIBperCapita2 > PIBperCapita1) {
        printf("Carta 2 venceu! (0)\n");
    } else {
        printf("Empate!\n");
    }

    //densidade populacional
    printf("Densidade Populacional\n");
    if (densidadePopulacional1 < densidadePopulacional2) {
        printf("Carta 1 venceu! (1)\n");
    } else if (densidadePopulacional2 < densidadePopulacional1) {
        printf("Carta 2 venceu! (0)\n");
    } else {
        printf("Empate!\n");
    }

    //superpoder
    printf("Superpoder \n");
    if (superPoder1 > superPoder2) {
        printf("Carta 1 venceu! (1)\n");
    } else if (superPoder2 > superPoder1) {
        printf("Carta 2 venceu! (0)\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}
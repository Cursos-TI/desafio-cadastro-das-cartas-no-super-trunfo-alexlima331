#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Cidades

// Trabalho de Alex A. de Lima

int main() {
    
    //Definição das variáveis//

    char codigoCidade1; // Preenchida com as letras de A a H - Carta 1 //
    char codigoCarta1[5]; // Código individual dado à carta - Carta 1 //
    char nomeCidade1[30]; // Nome da cidade - Carta 1 //
    unsigned long int populacao1; // Quantidade de habitantes - Carta 1 //
    float area1; // Representa a área da cidade em km2 - Carta 1 //
    double pib1; // O PIB da cidade - Carta 1 //
    int pontosTuristicos1; // Número de pontos turísticos na cidade - Carta 1 //

    char codigoCidade2; // Preenchida com as letras de A a H - Carta 2 //
    char codigoCarta2[5]; // Código individual dado à carta - Carta 2 //
    char nomeCidade2[30]; // Nome da cidade - Carta 2 //
    unsigned long int populacao2; // Quantidade de habitantes - Carta 2 //
    float area2; // Representa a área da cidade em km2 - Carta 2 //
    double pib2; // O PIB da cidade - Carta 2 //
    int pontosTuristicos2; // Número de pontos turísticos na cidade - Carta 2 //

    /*  Variáveis para comportar densidade populacional e PIB per capita */
    float densidadePopulacional1;
    float pibCapita1;
    float densidadePopulacional2;
    float pibCapita2;

    /* Variáveis para incluir o superpoder de cada carta */
    float superPoder1 = (float) populacao1 + area1 + (float) pib1 + (float) pontosTuristicos1 + (1/densidadePopulacional1) + pibCapita1;
    float superPoder2 = (float) populacao2 + area2 + (float) pib2 + (float) pontosTuristicos2 + (1/densidadePopulacional2) + pibCapita2;



    // Solicitações de entrada para a carta 1 //
    printf("Insira o código da cidade para carta 1 (uma letra entre A e H que não se repita):");
    scanf("%c", &codigoCidade1);
    getchar();
    printf("Insira o código da carta para carta 1 (iniciado com a letra que representa o estado e depois um número):");
    fgets(codigoCarta1, 5, stdin);
    codigoCarta1[strcspn(codigoCarta1, "\n")] = 0;
    printf("Insira o nome da cidade para carta 1: ");    
    fgets(nomeCidade1, 30, stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;
    printf("Insira a quantidade de habitantes da cidade para carta 1:");
    scanf("%lu", &populacao1);
    printf("Insira a área da cidade para carta 1(em km2):");
    scanf("%f", &area1);
    printf("Insira o PIB da cidade para carta 1 (em reais):");
    scanf("%lf", &pib1);
    printf("Insira a quantidade de pontos turísticos da cidade para carta 1:");
    scanf("%d", &pontosTuristicos1);

    // Cálculo de densidade populacional e PIB per capita - Carta 1 //
    densidadePopulacional1 = (float) populacao1/area1;
    pibCapita1 = (float) pib1/populacao1;
    

    // Saídas para a carta 1//
    printf("\nCódigo da cidade (carta 1): %c \n", codigoCidade1);
    printf("Código de carta (carta 1): %s \n", codigoCarta1);
    printf("Cidade (carta 1): %s\n", nomeCidade1);
    printf("Habitantes (carta 1): %lu\n", populacao1);
    printf("Área em km2 (carta 1) %.2f km2\n", area1);
    printf("PIB em reais(carta 1): %.2f de reais\n", pib1);
    printf("Quantidade de pontos turísticos (carta 1): %d\n", pontosTuristicos1);
    //Densidade populacional e PIB per capita//
    printf("Densidade populacional (carta 1): %.2f hab/km2\n", densidadePopulacional1);
    printf("PIB per capita (carta 1): %.2f reais\n\n\n", pibCapita1);


    // Solicitações de entrada para a carta 2 //
    getchar();
    printf("Insira o código da cidade para carta 2 (uma letra entre A e H que não se repita):");
    scanf("%c", &codigoCidade2);
    getchar();
    printf("Insira o código da carta para carta 2 (iniciado com a letra que representa o estado e depois um número):");
    fgets(codigoCarta2, 5, stdin);
    codigoCarta2[strcspn(codigoCarta2, "\n")] = 0;
    printf("Insira o nome da cidade para carta 2: ");    
    fgets(nomeCidade2, 30, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;
    printf("Insira a quantidade de habitantes da cidade para carta 2:");
    scanf("%lu", &populacao2);
    printf("Insira a área da cidade para carta 2(em km2):");
    scanf("%f", &area2);
    printf("Insira o PIB da cidade para carta 2 (em reais):");
    scanf("%lf", &pib2);
    printf("Insira a quantidade de pontos turísticos da cidade para carta 2:");
    scanf("%d", &pontosTuristicos2);


    // Cálculo de densidade populacional e PIB per capita - Carta 2 //
    densidadePopulacional2 = (float) populacao2/area2;
    pibCapita2 = (float) pib2/populacao2;


    // Saídas para a carta 2 //
    printf("\nCódigo da cidade (carta 2): %c \n", codigoCidade2);
    printf("Código de carta (carta 2): %s \n", codigoCarta2);
    printf("Cidade (carta 2): %s\n", nomeCidade2);
    printf("Habitantes (carta 2): %lu\n", populacao2);
    printf("Área em km2 (carta 2) %.2f km2\n", area2);
    printf("PIB em reais (carta 2): %.2f de reais\n", pib2);
    printf("Quantidade de pontos turísticos (carta 2): %i\n", pontosTuristicos2);
    //Adicionado no nível aventureiro - Densidade populacional e PIB per capita//
    printf("Densidade populacional (carta 2): %.2f hab/km2\n", densidadePopulacional2);
    printf("PIB per capita (carta 2): %.2f reais\n\n\n", pibCapita2);


    /******************************************************************************************/

    // Booleanos que comparam as características das duas cartas //
    int maiorArea1 = area1>area2;
    int maiorArea2 = area2>area1;
    int maiorPopulacao1 = populacao1>populacao2;
    int maiorPopulacao2 = populacao2>populacao1;
    int maiorPib1 = pib1>pib2;
    int maiorPib2 = pib2>pib1;
    int maiorTuristico1 = pontosTuristicos1 > pontosTuristicos2;
    int maiorTuristico2 = pontosTuristicos2>pontosTuristicos1;
    int menorDensidade1 = densidadePopulacional1<densidadePopulacional2;
    int menorDensidade2 = densidadePopulacional2<densidadePopulacional1;
    int maiorPibCapita1 = pibCapita1>pibCapita2;
    int maiorPibCapita2 = pibCapita2>pibCapita1;


    // Saída para o usuário - Comparação de cartas //

    printf("AGORA É HORA DE VER QUEM VENCEU!\nCASO APAREÇA O NÚMERO 1 AO LADO DA AFIRMAÇÃO É PORQUE VENCEU!!!\nCASO APAREÇA 0 É PORQUE PERDEU :(((\n\n");
    printf("A área da carta 1 é maior que a da carta 2: %i\n", maiorArea1);
    printf("A área da carta 2 é maior que a da carta 1: %i\n", maiorArea2);
    printf("O PIB da carta 1 é maior que a da carta 2: %i\n", maiorPib1);
    printf("O PIB da carta 2 é maior que a da carta 1: %i\n", maiorPib2);
    printf("A população da carta 1 é maior que a da carta 2: %i\n", maiorPopulacao1);
    printf("A população da carta 2 é maior que a da carta 1: %i\n", maiorPopulacao2);
    printf("A quantidade de pontos turísticos da carta 1 é maior que a da carta 2: %i\n", maiorTuristico1);
    printf("A quantidade de pontos turísticos da carta 2 é maior que a da carta 1: %i\n", maiorTuristico2);
    printf("A densidade populacional da carta 1 é menor que a da carta 2: %i\n", menorDensidade1);
    printf("A densidade populacional da carta 2 é menor que a da carta 1: %i\n", menorDensidade2);
    printf("O PIB per capita da carta 1 é maior que a da carta 2: %i\n", maiorPibCapita1);
    printf("O PIB per capita da carta 2 é maior que a da carta 1: %i\n\n\n", maiorPibCapita2);


    return 0;
}

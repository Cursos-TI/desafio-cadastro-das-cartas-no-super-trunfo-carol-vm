#include <stdio.h>

int main()
{
    // Declaração das variáveis da primeira carta
    char estado1;
    char codigo1[4];
    char nome_da_cidade1[50];
    int populacao1, numero_de_pontos_turisticos1;
    float area1, pib1, densidade_populacional1, pib_per_capita1; 
    
    // Leitura dos dados da primeira carta
    printf("Carta 1 \n");
    printf("Estado: Uma letra de 'A' a 'H' \n");
    scanf(" %c", &estado1);  // espaço antes do %c para ignorar enter anterior
 
    printf("Código: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n");
    scanf("%s", codigo1);

    printf("Nome da Cidade: \n");
    scanf("%s", nome_da_cidade1);
    
    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos1);
   
    // Declaração das variáveis da segunda carta
    char estado2;
    char codigo2[4];
    char nome_da_cidade2[50];
    int populacao2, numero_de_pontos_turisticos2;
    float area2, pib2, densidade_populacional2, pib_per_capita2;

    // Leitura dos dados da segunda carta
    printf("\nCarta 2 \n");
    printf("Estado: Uma letra de 'A' a 'H' \n");
    scanf(" %c", &estado2);

    printf("Código: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n");
    scanf("%s", codigo2);

    printf("Nome da Cidade: \n");
    scanf("%s", nome_da_cidade2);
    
    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos2);

    //Cálculo da densidade = população / área da cidade
    densidade_populacional1 = (float) populacao1 / area1; // Utilização de casting explícito para garantir um resultado de ponto flutuante.

    //Cálculo do PIB per capita = PIB / população
    pib_per_capita1 = pib1 / (float) populacao1; 

    // Exibição das informações coletadas da primeira e segunda carta.
    printf("\nCarta 1 \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", nome_da_cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", numero_de_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional1); //Definição de apenas duas casas após a vírgula.
    printf("PIB per Capita: %.2f reais \n\n", pib_per_capita1);

    //Cálculo da densidade = população / área da cidade
    densidade_populacional2 = (float) populacao2 / area2; // Utilização de casting explícito para garantir um resultado de ponto flutuante.

    //Cálculo do PIB per capita = PIB / população
    pib_per_capita2 = pib2 / (float) populacao2; 

    printf("Carta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nome_da_cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais \n\n", pib_per_capita2);

    return 0;
}
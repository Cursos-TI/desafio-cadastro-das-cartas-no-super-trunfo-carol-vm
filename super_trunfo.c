#include <stdio.h>

int main()
{

    // Declaração das variáveis da primeira carta
    char estado1;
    char código1[4];
    char nome_da_cidade1[20];
    int população1, número_de_pontos_turísticos1;
    float área1, pib1;

    // Leitura dos dados da primeira carta
    printf("Carta 1 \n");
    printf("Estado: \n");
    scanf("%c", &estado1);  // espaço antes do %c para ignorar enter anterior

    printf("Código: \n");
    scanf("%s", código1);

    printf("Nome da Cidade: \n");
    scanf("%s", nome_da_cidade1);
    
    printf("População: \n");
    scanf("%d", &população1);

    printf("Área: \n");
    scanf("%f", &área1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &número_de_pontos_turísticos1);

    // Declaração das variáveis da segunda carta
    char estado2;
    char código2[4];
    char nome_da_cidade2[20];
    int população2, número_de_pontos_turísticos2;
    float área2, pib2;

    // Leitura dos dados da segunda carta
    printf("\nCarta 2 \n");
    printf("Estado: \n");
    scanf(" %c", &estado2);

    printf("Código: \n");
    scanf("%s", código2);

    printf("Nome da Cidade: \n");
    scanf("%s", nome_da_cidade2);
    
    printf("População: \n");
    scanf("%d", &população2);

    printf("Área: \n");
    scanf("%f", &área2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &número_de_pontos_turísticos2);

    // Exibição das informações coletadas da primeira e segunda carta.
    printf("\nCarta 1 \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", código1);
    printf("Nome da Cidade: %s \n", nome_da_cidade1);
    printf("População: %d \n", população1);
    printf("Área: %f km² \n", área1);
    printf("PIB: %f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n\n", número_de_pontos_turísticos1);

    printf("Carta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", código2);
    printf("Nome da Cidade: %s \n", nome_da_cidade2);
    printf("População: %d \n", população2);
    printf("Área: %f km² \n", área2);
    printf("PIB: %f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", número_de_pontos_turísticos2);

    return 0;

}
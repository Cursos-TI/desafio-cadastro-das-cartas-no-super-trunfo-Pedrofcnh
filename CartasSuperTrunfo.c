#include <stdio.h>

int main()
{

    // Cidade 1
    char estado1[20];
    char codigo1[20], cidade1[40];
    int populacao1, turistico1;
    float area1, pib1;

    // Cidade 2
    char estado2[20];
    char codigo2[20], cidade2[40];
    int populacao2, turistico2;
    float area2, pib2;

    printf("Seja Bem vindo ao Super Trunfo de Países.\n");
    printf("Você irá fazer o cadastro de Cartas. \n");
    printf("Só é permitido nomes simples, nomes compostos não são aceitos no sistema.\n");

    // Cidade 1
    printf("Digite o nome de um estádo: ");
    scanf("%s", &estado1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1);

    printf("Digite o código da Cidade: ");
    scanf("%s", &codigo1);

    printf("Digite a população da cidade: ");
    scanf("%i", &populacao1);

    printf("Digite quantos pontos turisticos tem a cidade: ");
    scanf("%i", &turistico1);

    printf("Digite a área desta cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB desta cidade: ");
    scanf("%f", &pib1);

    printf("Agora vamos para a próxima carta.\n");

    // Cidade 2
    printf("Digite o nome um estádo: ");
    scanf("%s", &estado2);

    printf("Digite o nome de uma cidade: ");
    scanf("%s", &cidade2);

    printf("Digite o código da cidade: ");
    scanf("%s", &codigo2);

    printf("Digite a população da cidade: ");
    scanf("%i", &populacao2);

    printf("Digite quantos pontos turísticos tem a cidade: ");
    scanf("%i", &turistico2);

    printf("Digite a área desta cidade: ");
    scanf("%f", &area2);

    printf("Digite o pib desta cidade: ");
    scanf("%f", &pib2);

    // Dados das Cidades
    printf("=== Cartas Cadastradas === \n");

    printf("Carta 1:\nEstado: %s \nCódigo: %s \nNome da Cidade: %s \nPopulação: %i \nÁrea: %.2f km² \nPIB: %.2f Bilhões de Reais \nNúmero de Pontos Turísticos: %i\n\n",
           estado1, codigo1, cidade1, populacao1, area1, pib1, turistico1);

    printf("Carta 2:\nEstado: %s \nCódigo: %s \nNome da Cidade: %s \nPopulação: %i \nÁrea: %.2f km² \nPIB: %.2f Bilhões de Reais \nNúmero de Pontos Turísticos: %i\n\n",
           estado2, codigo2, cidade2, populacao2, area2, pib2, turistico2);

    return 0;
}
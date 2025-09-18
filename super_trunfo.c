#include <stdio.h>

int main() {
    char estado, estado02;
    char codigoCarta[20], codigoCarta02[20];
    char nomeCidade[20], nomeCidade02[20];
    int populacao, populacao02;
    float area, area02;
    float pib, pib02;
    int numeroPontosTuristicos, numeroPontosTuristicos02;
    float densidadePopulacional01;
    float densidadePopulacional02;
    float pibPerCapita01;
    float pibPerCapita02;
    
    printf("Digite a letra do estado\n");
    scanf("%c", &estado);
    

    printf("Digite o codigo do estado\n");
    scanf("%s", &codigoCarta);
    

    printf("Digite o nome da cidade\n");
    scanf("%s", &nomeCidade);
   

    printf("Qual e o numero da população?\n");
    scanf("%d", &populacao);
    

    printf("Qual o tamanho da area da cidade?\n");
    scanf("%lf", &area);
   

    printf("Digite o PIB da cidade\n");
    scanf("%f", &pib);
    

    printf("Digite o numero de pontos turisticos da cidade\n");
    scanf("%d", &numeroPontosTuristicos);

    
    

    printf("Digite a letra do estado\n");
    getchar();
    scanf("%c", &estado02);

    printf("Digite o codigo do estado\n");
    scanf("%s", &codigoCarta02);

    printf("Digite o nome da cidade\n");
    scanf("%s", &nomeCidade02);

    printf("Qual e o numero da população?\n");
    scanf("%d", &populacao02);

    printf("Qual o tamanho da area da cidade?\n");
    scanf("%lf", &area02);

    printf("Digite o PIB da cidade\n");
    scanf("%f", &pib02);

    printf("Digite o numero de pontos turisticos da cidade\n");
    scanf("%d", &numeroPontosTuristicos02);

    densidadePopulacional01 = (float) populacao / area;
    densidadePopulacional02 = (float) populacao02 / area;
    pibPerCapita01 = (float) pib / populacao;
    pibPerCapita02 = (float) pib02 / populacao02;

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Area: %.2f km²\n", area );
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", numeroPontosTuristicos);
    printf("Densidade populacional:%.2f\n", densidadePopulacional01);
    printf("PIB per Capita:%.2f\n", pibPerCapita01);

    /*
    Boa tarde professor fiz alterações no meu codigo e espero um retorno seu para correção.
    
    */
    
   
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado02);
    printf("Codigo: %s\n", codigoCarta02);
    printf("Nome da Cidade: %s\n", nomeCidade02);
    printf("População: %d\n", populacao02);
    printf("Area: %.2f km²\n", area02);
    printf("PIB: %.2f bilhões de reais\n", pib02);
    printf("Numero de Pontos Turisticos: %d\n", numeroPontosTuristicos02);
    printf("Densidade populacional:%.2f\n", densidadePopulacional02);
    printf("PIB per Capita:%.2f\n", pibPerCapita02);

return 0;
}
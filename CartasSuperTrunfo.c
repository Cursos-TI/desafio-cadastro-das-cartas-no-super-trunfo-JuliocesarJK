#include <stdio.h>

int main() {
     /* 
     
    Definir o a variavel estado utilizando char
    Definir codigo da carta de acordo com o estado usando char
    Definir o nome da cidade usando char
    Definir número populacional utilizando unsigned long int
    Definir área utilizando float
    Definir PIB utilizando float
    Definir número de pontos turisticos utilizando int
    Definir o PIB per capita utilizando float
    Definir A densidade populacional utilizando float
    Definir O Super Poder utilizando float
    Definir A comparação utilizando int

    */
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nomedacidade1[50], nomedacidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontoturistico1, pontoturistico2;
    float pibpc1, pibpc2;
    float densidade1, densidade2;


    //Criação e coleta de dados da Carta Número 1

    printf(">>>Carta Número 1<<<\n");

    printf("Digite uma única letra representante do estado de A a Z\n");
    scanf(" %c", &estado1);
    
    printf("Digite o código da carta com letra do estado seguida de um número de 01 a 04 (ex: A01, B03)\n");
    scanf("%s", codigo1);

    printf("Digite um nome de cidade que tenha nesse estado\n");
    scanf("%s", nomedacidade1);

    printf("Digite o número populacional dessa cidade\n");
    scanf("%lu", &populacao1);

    printf("Digite a área dessa cidade\n");
    scanf("%f", &area1);

    printf("Digite o PIB dessa cidade\n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turisticos que essa cidade contém\n");
    scanf("%d", &pontoturistico1);

    //Cálculo de PIB per capita

    pibpc1 = PIB1 / populacao1;

    //Cálculo de desensidade populacional

    densidade1 = populacao1 / area1;

    //Criação e coleta de dados da Carta Número 2

    printf(">>>Carta Número 2<<<\n");

    printf("Digite uma única letra representante do estado de A a Z\n");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta com letra do estado seguida de um número de 01 a 04 (ex: A01, B03)\n");
    scanf("%s", codigo2);

    printf("Digite um nome de cidade que tenha nesse estado\n");
    scanf("%s", nomedacidade2);

    printf("Digite o número populacional dessa cidade\n");
    scanf("%lu", &populacao2);

    printf("Digite a área dessa cidade\n");
    scanf("%f", &area2);

    printf("Digite o PIB dessa cidade\n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turisticos que essa cidade contém\n");
    scanf("%d", &pontoturistico2);

    //Cálculo de PIB per capita

    pibpc2 = PIB2 / populacao2;

    //Cálculo de desensidade populacional

    densidade2 = populacao2 / area2;

    //Resultado da coleta de dados da Carta Número 1

    printf(">>>Carta Número 1<<<\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %lu Habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de pontos turísticos: %d\n", pontoturistico1);
    printf("O PIB per Capita é: %.2f\n", pibpc1);
    printf("A Densidade Populacional é: %.2f\n", densidade1);

    //Resultado da coleta de dados da Carta Número 2

    printf(">>>Carta Número 2<<<\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %lu Habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", pontoturistico2);
    printf("O PIB per Capita é: %.2f\n", pibpc2);
    printf("A Densidade Populacional é: %.2f\n", densidade2);

    return 0;
}

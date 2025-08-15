#include <stdio.h>

int main(){
    //carta 1
    char cidade1[20];
    char estado1[20];
    char cod1[10];
    float pib1 ,area1;
    int pontoTuristico1, populacao1;
    printf("Cartas Supertrunfo: \n");
    printf("Carta 1 \n");


    printf("Digite o Estado: \n");
    scanf("%s" , &estado1);

    printf("Digite a cidade: \n");
    scanf("%s" , &cidade1);

    printf("Digite o codigo da cidade: \n");
    scanf("%s" , &cod1);

    printf("Digite a area da cidade: \n");
    scanf("%f" , &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f" , &pib1);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d" , &pontoTuristico1);

    printf("Digite a quantidade de habitantes: \n");
    scanf("%d" , &populacao1);


    

//carta 2 

    char cidade2[20];
    char estado2[20];
    char cod2[10];
    float pib2 ,area2;
    int pontoTuristico2, populacao2;
    
    printf("Carta 2 \n");

    printf("Digite o Estado: \n");
    scanf("%s" , &estado2);

    printf("Digite a cidade: \n");
    scanf("%s" , &cidade2);

    printf("Digite o codigo da cidade: \n");
    scanf("%s" , &cod2);

    printf("Digite a area da cidade: \n");
    scanf("%f" , &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f" , &pib2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d" , &pontoTuristico2);

    printf("Digite a quantidade de habitantes: \n");
    scanf("%d" , &populacao2);

    //amostrando as cartas
    printf("Carta 1");

    printf("-Cidade: %s \n -Estado: %s \n -Codigo de cidade: %s \n", cidade1, estado1, cod1);
    printf("-Area: %f \n -PIB: %f \n -Pontos turisticos: %d \n", area1, pib1, pontoTuristico1);
    printf("-Numero de habitantes: %d \n",populacao1);

    printf("Carta 2");

        printf("-Cidade: %s \n -Estado: %s \n -Codigo de cidade: %s \n", cidade2, estado2, cod2);
    printf("-Area: %f \n -PIB: %f \n -Pontos turisticos: %d \n", area2, pib2, pontoTuristico2);
    printf("-Numero de habitantes: %d \n",populacao2);

    return 0;

}

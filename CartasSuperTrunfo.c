#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Definiçao variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char letracarta1, letracarta2;
    int codigocidade1, codigocidade2;
    char nome1[41], nome2[41];
    float populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pont_turis1, pont_turis2;
    float densidadepop1, densidadepop2;
    float pibcap1,pibcap2;
    float comp_pop1, comp_pop2;
    float comp_area1, comp_area2;
    float comp_pib1, comp_pb2;

    // entradas e saidas de atributos primeira carta

    printf("Defina a letra para o primeira carta: ");
    scanf(" %c", &letracarta1);
    printf("Defina código da cidade: ");
    scanf(" %d", &codigocidade1);
    printf("Qual nome da cidade? ");
    scanf("  %[^\n]", nome1);
    printf("Qual a populacao da cidade de(a)  %s?", nome1);
    scanf(" %f", &populacao1);
    printf("Qual a área da cidade de(a)  %s?", nome1);
    scanf(" %f", &area1);
    printf("Qual o pib da cidade de(a)  %s?", nome1);
    scanf(" %f", &pib1);
    printf("Pontos turisticos da cidade de(a)  %s?", nome1);
    scanf(" %d", &pont_turis1);

    // entradas e saidas de atributos segunda carta
    printf("Defina a letra para o segunda carta: ");
    scanf(" %c", &letracarta2);
    printf("Defina código da cidade: ");
    scanf(" %d", &codigocidade2);
    printf("Qual nome da cidade? ");
    scanf("  %[^\n]", nome2);
    printf("Qual a populacao da cidade de(a) %s?", nome2);
    scanf(" %f", &populacao2);
    printf("Qual a área da cidade de(a)  %s?", nome2);
    scanf(" %f", &area2);
    printf("Qual o pib da cidade de(a)  %s?", nome2);
    scanf(" %f", &pib2);
    printf("Pontos turisticos da cidade de(a)  %s?", nome2);
    scanf(" %d", &pont_turis2);

    printf("\n");
    printf("\n");
    printf("\n");
    // calculando pib per capita e densidade demografica.
    pibcap1=pib1/populacao1;
    pibcap2=pib2/populacao2;
    densidadepop1=populacao1/area1;
    densidadepop2=populacao2/area2;


    // calculando super poderes cartas comparacao

    comp_area1 = area1>area2;
    comp_area2= area2>area1;
    comp_pb2= pib2>pib1;
    comp_pib1=pib1>pib2;
    comp_pop1= populacao1>populacao2;
    comp_pop2=populacao2>populacao1;

    // print das informações na tela da primeira e segunda carta.
    printf("Informações da primeira carta\n");
    printf("Letra da carta :%c\n", letracarta1);
    printf("Código da cidade :%d\n", codigocidade1);
    printf("Nome da cidade :%s\n", nome1);
    printf("Populacão da cidade :%f\n", populacao1);
    printf("Área da cidade em km2: %f\n", area1);
    printf("Pib: %f\n", pib1);
    printf("Pontos turisticos: %d\n", pont_turis1);
    printf("Densidade domografica: %f\n", densidadepop1);
    printf("Pib per capita: %f\n", pibcap1);
    printf("\n");
    printf("\n");

    printf("Informações da segunda carta\n");
    printf("Letra da carta :%c\n", letracarta2);
    printf("Código da cidade :%d\n", codigocidade2);
    printf("Nome da cidade :%s\n", nome2);
    printf("Populacão da cidade :%f\n", populacao2);
    printf("Área da cidade em km2: %f\n", area2);
    printf("Pib: %f\n", pib2);
    printf("Pontos turisticos: %d\n", pont_turis2);
    printf("Densidade domografica: %f\n", densidadepop2);
    printf("Pib per capita: %f\n", pibcap2);
    
    printf("Pontuacao de cartas\n");
    printf("Ponto carta %c em relacao a area: ", letracarta1);
    printf("%f\n", comp_area1);
    printf("Ponto carta %c em relacao a população: ", letracarta1);
    printf("%f\n", comp_pop1);
    printf("Ponto carta %c em relacao ao pib: ", letracarta1);
    printf("%f\n", comp_pib1);
    
    
    printf("Pontuacao de cartas\n");
    printf("Ponto carta %c em relacao a area: ", letracarta2);
    printf("%f\n", comp_area2);
    printf("Ponto carta %c em relacao a população: ", letracarta2);
    printf("%f\n", comp_pop2);
    printf("Ponto carta %c em relacao ao pib: ", letracarta2);
    printf("%f\n", comp_pb2);
    

    return 0;       
}

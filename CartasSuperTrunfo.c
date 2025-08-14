#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Definiçao variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char letracarta1, letracarta2;
    int codigocidade1, codigocidade2;
    char nome1[41], nome2[41];
    int populacao1, populacao2;
    

    // entradas e saidas de atributos primeira carta

    printf("Defina a letra para o primeira carta: ");
    scanf(" %c", &letracarta1);
    printf("Defina código da cidade: ");
    scanf(" %d", &codigocidade1);
    printf("Qual nome da cidade? ");
    scanf("  %[^\n]", nome1);
    printf("Qual a populacao da cidade de(a)  %s?", nome1);
    scanf(" %d", &populacao1);

    // entradas e saidas de atributos segunda carta
    printf("Defina a letra para o segunda carta: ");
    scanf(" %c", &letracarta2);
    printf("Defina código da cidade: ");
    scanf(" %d", &codigocidade2);
    printf("Qual nome da cidade? ");
    scanf("  %[^\n]", nome2);
    printf("Qual a populacao da cidade de(a) %s?", nome2);
    scanf(" %d", &populacao2);
    
    printf("\n");
    printf("\n");
    printf("\n");

    // print das informações na tela da primeira e segunda carta.
    printf("Informações da primeira carta\n");
    printf("Letra da carta :%c\n", letracarta1);
    printf("Código da cidade :%d\n", codigocidade1);
    printf("Nome da cidade :%s\n", nome1);
    printf("Populacão da cidade :%d\n", populacao1);
    printf("\n");
    printf("\n");

    printf("Informações da segunda carta\n");
    printf("Letra da carta :%c\n", letracarta2);
    printf("Código da cidade :%d\n", codigocidade2);
    printf("Nome da cidade :%s\n", nome2);
    printf("Populacão da cidade :%d\n", populacao2);

    
    
    
    

    return 0;       
}

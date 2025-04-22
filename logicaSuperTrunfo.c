#include <stdio.h>

int main(){

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
 
    // Dados da Carta 1
    char estado1 = 'S';
    char codigo1[] = "A01";
    char Cidade1[] = "Sao Paulo";
    int populacao1 = 12300000;
    float Area1 = 1521.11;
    float PIB1 = 699.28;
    int PontosTuristico1 = 50;
    float DensidadePopulacional1 = (Area1 > 0) ? (float)populacao1 / Area1 : 0;
    float PIBperCapita1 = (populacao1 > 0) ? PIB1 / populacao1 : 0;

    // Dados da Carta 2
    char estado2 = 'R';
    char codigo2[] = "B02";
    char Cidade2[] = "Rio de Janeiro";
    int populacao2 = 6700000;
    float Area2 = 1200.25;
    float PIB2 = 300.50;
    int PontosTuristico2 = 30;
    float DensidadePopulacional2 = (Area2 > 0) ? (float)populacao2 / Area2 : 0;
    float PIBperCapita2 = (populacao2 > 0) ? PIB2 / populacao2 : 0;

    // Atributo para comparação (altere o valor para mudar a comparação)
    int atributoEscolhido = 1; // 1: População, 2: Área, 3: PIB, 4: Densidade Populacional, 5: PIB per Capita

    printf("**BEM VINDO AO JOGO SUPER TRIUNFO**\n");
    printf("\n");

    printf("Comparação de Cartas (Nível Novato):\n");

    if (atributoEscolhido == 1) {
        printf("Atributo Comparado: População\n");
        printf("Carta 1 (%s): %d\n", Cidade1, populacao1);
        printf("Carta 2 (%s): %d\n", Cidade2, populacao2);
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", Cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", Cidade2);
        }
    } else if (atributoEscolhido == 2) {
        printf("Atributo Comparado: Área\n");
        printf("Carta 1 (%s): %.2f\n", Cidade1, Area1);
        printf("Carta 2 (%s): %.2f\n", Cidade2, Area2);
        if (Area1 > Area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", Cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", Cidade2);
        }
    } else if (atributoEscolhido == 3) {
        printf("Atributo Comparado: PIB\n");
        printf("Carta 1 (%s): %.2f\n", Cidade1, PIB1);
        printf("Carta 2 (%s): %.2f\n", Cidade2, PIB2);
        if (PIB1 > PIB2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", Cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", Cidade2);
        }
    } else if (atributoEscolhido == 4) {
        printf("Atributo Comparado: Densidade Populacional\n");
        printf("Carta 1 (%s): %.2f\n", Cidade1, DensidadePopulacional1);
        printf("Carta 2 (%s): %.2f\n", Cidade2, DensidadePopulacional2);
        if (DensidadePopulacional1 < DensidadePopulacional2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", Cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", Cidade2);
        }
    } else if (atributoEscolhido == 5) {
        printf("Atributo Comparado: PIB per Capita\n");
        printf("Carta 1 (%s): %.2f\n", Cidade1, PIBperCapita1);
        printf("Carta 2 (%s): %.2f\n", Cidade2, PIBperCapita2);
        if (PIBperCapita1 > PIBperCapita2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", Cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", Cidade2);
        } 

    return 0;
}


 




















    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.


}

      

#include <stdio.h>

int main(){

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
 
// Dados da Carta 1
    char Pais1[] = "Brasil";
    int populacao1 = 12300000;
    float Area1 = 1521.11;
    float PIB1 = 699.28;
    int PontosTuristicos1 = 50;
    float DensidadeDemografica1 = (Area1 > 0) ? (float)populacao1 / Area1 : 0;

    // Dados da Carta 2
    char Pais2[] = "Argentina";
    int populacao2 = 6700000;
    float Area2 = 1200.25;
    float PIB2 = 300.50;
    int PontosTuristicos2 = 30;
    float DensidadeDemografica2 = (Area2 > 0) ? (float)populacao2 / Area2 : 0;

    int escolha;

    printf("**BEM VINDO AO JOGO SUPER TRUNFO**\n");
    printf("\n");

do {
    printf("Escolha o atributo para comparar \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("0 - Sair\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    printf("\n");

    switch (escolha)
    {
case 1 : // Comparar População
    printf("Atributo Comparado: População\n");
    printf("Carta 1 (%s): %d\n", Pais1, populacao1);
    printf("Carta 2 (%s): %d\n", Pais2, populacao2);
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", Pais1);
    } else if (populacao2 > populacao1){
        printf("Resultado: Carta 2 (%s) venceu!\n", Pais2);
    } else{
        printf("Resultado: Empate!\n");
    }     
        break;

case 2 : // Comparar Área
    printf("Comparando Área:\n");
    printf("%s: %.2f km²\n", Pais1, Area1);
    printf("%s: %.2f km²\n", Pais2, Area2);  
    if (Area1 > Area2) {
       printf("Resultado: %s venceu!\n", Pais1);
    } else if (Area2 > Area1) {
       printf("Resultado: %s venceu!\n", Pais2);
    } else {
       printf("Resultado: Empate!\n");
    } 
      break;
case 3 : // Comparar PIB
      printf("Comparando PIB:\n");
      printf("%s: %.2f trilhões\n", Pais1, PIB1);
      printf("%s: %.2f trilhões\n", Pais2, PIB2);
    if (PIB1 > PIB2) {
      printf("Resultado: %s venceu!\n", Pais1);
    } else if (PIB2 > PIB1) {
      printf("Resultado: %s venceu!\n", Pais2);
    } else {
      printf("Resultado: Empate!\n");
    }
       break; 
case 4 : // Comparar Pontos Turísticos
    printf("Comparando Pontos Turísticos:\n");
    printf("%s: %d\n", Pais1, PontosTuristicos1);
    printf("%s: %d\n", Pais2, PontosTuristicos2);
    if (PontosTuristicos1 > PontosTuristicos2) {
        printf("Resultado: %s venceu!\n", Pais1);
    } else if (PontosTuristicos2 > PontosTuristicos1) {
        printf("Resultado: %s venceu!\n", Pais2);
    } else {
        printf("Resultado: Empate!\n");
    }
       break;     
case 5 : // Comparar Densidade Demográfica
    printf("Comparando Densidade Demográfica:\n");
    printf("%s: %.2f hab/km²\n", Pais1, DensidadeDemografica1);
    printf("%s: %.2f hab/km²\n", Pais2, DensidadeDemografica2);
    if (DensidadeDemografica1 < DensidadeDemografica2) {
        printf("Resultado: %s venceu!\n", Pais1);
    } else if (DensidadeDemografica2 < DensidadeDemografica1) {
        printf("Resultado: %s venceu!\n", Pais2);
    } else {
        printf("Resultado: Empate!\n");
    }
       break;
case 0 : // Sair do jogo
    printf("Saindo do jogo...\n");
       break;
    
default: //Opção inválida
    printf("Opção inválida. Por favor, tente novamente.\n");
        break;
    }

    printf("\n");

}while (escolha != 0);


    return 0;
}


 













      

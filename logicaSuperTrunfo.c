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

    int escolha1, escolha2;

    printf("**BEM VINDO AO JOGO SUPER TRUNFO**\n");
    printf("\n");

//Escolha do primeiro atributo
    printf("Escolha o atributo para comparar \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("0 - Sair\n");
    printf("Digite sua primeira escolha: ");
    scanf("%d", &escolha1);

    printf("\n");

// Validação da primeira escolha
    if (escolha1 < 1 || escolha1 > 5) {
        printf("Opção inválida. Saindo..\n");
        return 1;
    }

    printf("\n");

    // Escolha do segundo atributo (dinâmico)
    printf("Escolha o segundo atributo para comparar:\n");
    if (escolha1 != 1) printf("1 - População\n");
    if (escolha1 != 2) printf("2 - Área\n");
    if (escolha1 != 3) printf("3 - PIB\n");
    if (escolha1 != 4) printf("4 - Pontos Turísticos\n");
    if (escolha1 != 5) printf("5 - Densidade Demográfica\n");
    printf("DIGITE SUA SEGUNDA ESCOLHA:\n");
    scanf("%d", &escolha2);

// Validação da segunda escolha e se é diferente da primeira
    if (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha1) {
        printf("Opção inválida ou igual ao primeiro. Saindo..\n");
        return 1;
    }

    printf("\n");

// Variveis para armazenar os valores dos atributos escolhidos para cada carta.
    float valor1_atributo1 = 0, valor2_atributo1 = 0;
    float valor1_atributo2 = 0, valor2_atributo2 = 0;
    char Atributo1[50] = "", Atributo2[50] = "";

// Comparação do primeiro atributo
    printf("Comparando o primeiro atributo:\n");
    switch (escolha1)
    {
    case 1 :
        // Comparar População
        valor1_atributo1 = populacao1;
        valor2_atributo1 = populacao2;
        printf("%s (%s): população %d\n", Pais1, Atributo1, populacao1);
        printf("%s (%s): população %d\n", Pais2, Atributo1, populacao2);
        break;
    case 2 :
    //comparar Área
       valor1_atributo1 = Area1;
       valor2_atributo1 = Area2;
       printf("%s: área %2.f km²\n", Pais1, Atributo1, Area1);
       printf("%s: área %2.f km²\n", Pais2, Atributo1, Area2);
       break;
    case 3 : 
    //Comparar PIB
       valor1_atributo1 = PIB1;
       valor2_atributo1 = PIB2;
       printf("%s: PIB %2.f trilhões\n", Pais1, Atributo1, PIB1);
       printf("%s: PIB %2.f trilhões\n", Pais2, Atributo1, PIB2);
       break;
    case 4 :
    // Comparar Pontos Turisticos
       valor1_atributo1 = PontosTuristicos1;
       valor2_atributo1 = PontosTuristicos2;
       printf("%s: Pontos Turisticos %d\n", Pais1, Atributo1, PontosTuristicos1);
       printf("%s: Pontos Turisticos %d\n", Pais2, Atributo1, PontosTuristicos2);
       break;
    case 5 :
    //Compara Densidade Demografica
       valor1_atributo1 = DensidadeDemografica1;
       valor2_atributo1 = DensidadeDemografica2;
       printf("%s: Dendidade Dem %2.f hab/km²\n", Pais1, Atributo1, DensidadeDemografica1);
       printf("%s: Densidade Dem %2.f hab/km²\n", Pais2, Atributo1, DensidadeDemografica2);
        break;
    }

    // Determina o vencedor da comparação para o primeiro atributo escolhido.
int vitoria1_atributo1 = (escolha1 == 5) ? (valor1_atributo1 < valor2_atributo1) : (valor1_atributo1 > valor2_atributo1);
int vitoria2_atributo1 = (escolha1 == 5) ? (valor2_atributo1 < valor1_atributo1) : (valor2_atributo1 > valor1_atributo1);
printf("Vitória em %s: %s\n\n", Atributo1, vitoria1_atributo1 ? Pais1 : (vitoria2_atributo1 ? Pais2 : "Empate"));

// Comparação do segundo atributo
    printf("Comparando o segundo atributo:\n");
    switch (escolha2)
    {
    case 1 :
        // Comparar População
        valor1_atributo2 = populacao1;
        valor2_atributo2 = populacao2;
        printf("%s (%s): população %d\n", Pais1, Atributo2, populacao1);
        printf("%s (%s): população %d\n", Pais2, Atributo2, populacao2);
        break;
    case 2 :
    // Comparar Área
        valor1_atributo2 = Area1;
        valor2_atributo2 = Area2;
        printf("%s (%s): área %2.f km²\n", Pais1, Atributo2, Area1);
        printf("%s (%s): área %2.f km²\n", Pais2, Atributo2, Area2);
        break;
    case 3 :
    // Comparar PIB
       valor1_atributo2 = PIB1;
       valor2_atributo2 = PIB2;
       printf("%s (%s): PIB %d\n", Pais1, Atributo2, PIB1);
       printf("%s (%s): PIB %d\n", Pais2, Atributo2, PIB2);
       break;
    case 4 :
    // Comparar Pontos Turísticos
       valor1_atributo2 = PontosTuristicos1;
       valor2_atributo2 = PontosTuristicos2;
       printf("%s (%s): Pontos Turisticos %d\n", Pais1, Atributo2, PontosTuristicos1);
       printf("%s (%s): Pontos Turisticos %d\n", Pais2, Atributo2, PontosTuristicos2);
       break;
    case 5 : 
    //Comparar Densidade Demografica
       valor1_atributo2 = DensidadeDemografica1;
       valor2_atributo2 = DensidadeDemografica2;
       printf("%s (%s): Dens %2.f hab/km²\n", Pais1, Atributo2, DensidadeDemografica1);
       printf("%s (%s): Dens %2.f hab/km²\n", Pais2, Atributo2, DensidadeDemografica2);
        break;
    }

    // Determina o vencedor da comparação para o segundo atributo escolhido
int vitoria1_atributo2 = (escolha2 == 5) ? (valor1_atributo2 < valor2_atributo2) : (valor1_atributo2 > valor2_atributo2);
int vitoria2_atributo2 = (escolha2 == 5) ? (valor2_atributo2 < valor1_atributo2) : (valor2_atributo2 > valor1_atributo2);
printf("Vitória em %s: %s\n\n", Atributo2, vitoria1_atributo2 ? Pais1 : (vitoria2_atributo2 ? Pais2 : "Empate"));

// Calculo da soma dos atributos da carta
int  pontosCarta1 = (vitoria1_atributo1 ? 1 : 0) + (vitoria1_atributo2 ? 1 : 0);
int  pontosCarta2 = (vitoria2_atributo1 ? 1 : 0) + (vitoria2_atributo2 ? 1 : 0);

printf("** RESULTADO FINAL DA RODADA**\n");
printf("Pontuação %s: %d\n", Pais1, pontosCarta1);
printf("Pontuação %s: %d\n", Pais2, pontosCarta2);

// Determinação do vencedor com base na soma dos atributos (operador ternário)
(pontosCarta1 > pontosCarta2) ? printf("Vencedor da rodada: %s!\n", Pais1) :
(pontosCarta2 > pontosCarta1) ? printf("Vencedor da rodada: %s!\n", Pais2) :
printf("Rodada Empatada!\n");

    return 0;
}


 













      

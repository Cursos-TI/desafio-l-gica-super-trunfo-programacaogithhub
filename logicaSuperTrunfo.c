#include <stdio.h>

int main() {

    // Super Trunfo

    char estado, estado2;
    char codigo [10], codigo2 [10];
    char cidade [20], cidade2 [20];
    int populacao, populacao2;
    float area, area2;
    float Pib, Pib2;
    int pontosTuristicos, pontosTuristicos2;

    float densidade, densidade2;
    float pibPerCapita, pibPerCapita2;


    // Cadastro da Carta 1

    printf ("Digite a letra do estado (A-H):\n");
    scanf (" %c", &estado);

    printf ("Codigo:\n");
    scanf ("%s", codigo);

    printf ("Nome da cidade:\n");
    scanf ("%s", cidade);

    printf ("População:\n");
    scanf (" %d", &populacao);

    printf ("Area:\n");
    scanf (" %f", &area);

    printf ("PIB:\n");
    scanf (" %f", &Pib);

    printf ("Quantidade de pontos Turisticos:\n");
    scanf ("%d", &pontosTuristicos);

    // Cadastro da Carta 2

    printf ("Digite a letra do estado (A-H):\n");
    scanf (" %c", &estado2);
    
    printf ("Codigo:\n");
    scanf ("%s", codigo2);

    printf ("Nome da cidade:\n");
    scanf ("%s", cidade2);

    printf ("Total de Habitantes:\n");
    scanf (" %d", &populacao2);

    printf ("Area:\n");
    scanf (" %f", &area2);

    printf ("PIB:\n");
    scanf (" %f", &Pib2);

    printf ("Quantidade de pontos Turisticos:\n");
    scanf ("%d", &pontosTuristicos2);

    // Calculo da Densidade Populacional e PIB per Capita

    densidade = populacao / area;    // Densidade = População ÷ Área
    densidade2 = populacao2 / area2;
    pibPerCapita = Pib / populacao;  // Pib per Capita = PIB ÷ População 
    pibPerCapita2 = Pib2 / populacao2;


    // Exibindo as cartas

    printf ("\nCarta 1!\n");

    printf ("Estado: %c\n", estado);
    printf ("Código: %s\n", codigo);
    printf ("Cidade: %s\n", cidade);
    printf ("Habitantes: %d\n", populacao);
    printf ("Area: %.2f\n", area);
    printf ("PIB: %.2f\n", Pib);
    printf ("Pontos Turisticos: %d\n", pontosTuristicos);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf ("Pib per capita: R$ %.2f\n", pibPerCapita);


    printf("\n");

    printf ("Carta 2!\n");

    printf ("Estado: %c\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Cidade: %s\n", cidade2);
    printf ("Habitantes: %d\n", populacao2);
    printf ("Area: %.2f\n", area2);
    printf ("PIB: %.2f\n", Pib2);
    printf ("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf ("Pib per capita: R$ %.2f\n", pibPerCapita2);

    // Comparação entre as cartas (Usando PIB)

    printf("\nCOMPARAÇÃO ENTRE AS CARTAS!\n");
    printf ("Atributo escolhido: PIB per Capita.\n");

    printf ("%s: R$ %.2f\n", cidade, pibPerCapita);
    printf ("%s: R$ %.2f\n", cidade2, pibPerCapita2);

    // Logica de dicisão: MAIOR PIB VENCE

    if (pibPerCapita > pibPerCapita2) {
        printf("Resultado: Carta 1 (%s) Venceu!\n", cidade);

    } else {
         if (pibPerCapita2 > pibPerCapita) {
        printf("Resultado: Carta 2 (%s) Venceu!\n", cidade2);
} else {
    printf ("Resultado: Empate\n");
}
}
   return 0;
   
  }
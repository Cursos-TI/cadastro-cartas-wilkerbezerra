#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Desafío Nível Mestre

/*
  Objetivo: 
  Seu programa em C deve agora permitir ao usuário inserir os dados de duas cartas, assim como nos níveis anteriores, mas com uma mudança importante: a população agora deve ser armazenada como unsigned long int para acomodar números maiores. As demais informações permanecem com os mesmos tipos. Após a leitura dos dados, seu programa deverá:

  Calcular a Densidade Populacional e o PIB per Capita: Assim como no nível intermediário, calcule e armazene esses valores.
 
  Calcular o Super Poder: Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). Armazene o Super Poder como float. Atenção: Preste muita atenção na conversão de tipos ao somar valores de tipos diferentes!
 
  Comparar as Cartas: Compare as duas cartas atributo por atributo (exceto estado, código e nome), incluindo o Super Poder. Lembre-se: para a densidade populacional, a carta com o menor valor vence; para os demais atributos (incluindo Super Poder), a carta com o maior valor vence.
 
  Exibir os Resultados das Comparações: Para cada atributo, imprima na tela qual carta venceu (Carta 1 ou Carta 2), exibindo o resultado da comparação (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).
*/

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  //Variáveis da Carta 01
    char estadoCarta01;
    char codigoCarta01[10];
    char nomeDaCidadeCarta01[20];
    unsigned long int populacaoCarta01;
    float areaDaCidadeCarta01;
    float pibCarta01;
    int numeroPontosTuristicosCarta01;
    float densidadePopulacionalCarta01;
    float pibPerCaptaCarta01;
    float superPoderCarta01;
    
    //Variáveis da Carta 02
    char estadoCarta02;
    char codigoCarta02[10];
    char nomeDaCidadeCarta02[20];
    unsigned long int populacaoCarta02;
    float areaDaCidadeCarta02;
    float pibCarta02;
    int numeroPontosTuristicosCarta02;
    float densidadePopulacionalCarta02;
    float pibPerCaptaCarta02;
    float superPoderCarta02;

  // Área para entrada de dados

     //Informações sobre a Carta 1
    printf("Preencha os dados da Carta 01: \n");

    printf("Letra que representa o Estado: ");
    scanf("%c", &estadoCarta01);

    printf("Código da Carta [letra do estado + número de 01 a 04]: ");
    scanf("%s", codigoCarta01);
    getchar(); //limpa o buffer

    printf("Nome da cidade: ");
    fgets(nomeDaCidadeCarta01,20,stdin);
    nomeDaCidadeCarta01[strcspn(nomeDaCidadeCarta01,"\n")] = 0;
    
    printf("Número de habitantes da cidade: ");
    scanf("%lu", &populacaoCarta01);
    
    printf("Área da cidade: ");
    scanf("%f", &areaDaCidadeCarta01);

    printf("PIB: ");
    scanf("%f", &pibCarta01);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numeroPontosTuristicosCarta01);
    getchar();

    densidadePopulacionalCarta01 = populacaoCarta01 / areaDaCidadeCarta01;
    pibPerCaptaCarta01 = pibCarta01 / populacaoCarta01;

    superPoderCarta01 = populacaoCarta01 + areaDaCidadeCarta01 + pibCarta01 + numeroPontosTuristicosCarta01 + pibPerCaptaCarta01 + (1/densidadePopulacionalCarta01);

    // Informações sobre a Carta 2
    
    printf("\nPreencha os dados da Carta 02: \n");
    
    printf("Letra que representa o Estado: ");
    scanf("%c", &estadoCarta02);

    printf("Código da Carta [letra do estado + número de 01 a 04]: ");
    scanf("%s", codigoCarta02);
    getchar(); //limpa o buffer

    printf("Nome da cidade: ");
    fgets(nomeDaCidadeCarta02,20,stdin);
    nomeDaCidadeCarta02[strcspn(nomeDaCidadeCarta02,"\n")] = 0;
    
    printf("Número de habitantes da cidade: ");
    scanf("%lu", &populacaoCarta02);
    
    printf("Área da cidade: ");
    scanf("%f", &areaDaCidadeCarta02);

    printf("PIB: ");
    scanf("%f", &pibCarta02);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numeroPontosTuristicosCarta02);

    densidadePopulacionalCarta02 = populacaoCarta02 / areaDaCidadeCarta02;
    pibPerCaptaCarta02 = pibCarta02 / populacaoCarta02;

    superPoderCarta02 = populacaoCarta02 + areaDaCidadeCarta02 + pibCarta02 + 
    numeroPontosTuristicosCarta02 + pibPerCaptaCarta02 + (1/densidadePopulacionalCarta02);

  // Área para exibição dos dados da cidade

    printf("\nComparação de Cartas: \n");
    printf("População: Carta 1 Venceu (%d)\n",populacaoCarta01 > populacaoCarta02);
    printf("Área: Carta 1 Venceu (%d)\n",areaDaCidadeCarta01 > areaDaCidadeCarta02);
    printf("PIB: Carta 1 Venceu (%d)\n",pibCarta01 > pibCarta02);
    printf("Pontos Turísticos: Carta 1 Venceu (%d)\n", numeroPontosTuristicosCarta01 > numeroPontosTuristicosCarta02);
    printf("Densidade Populacional: Carta 2 Venceu (%d)\n", densidadePopulacionalCarta01 > densidadePopulacionalCarta02);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibCarta01 > pibCarta02);
    printf("Super Poder: Carta 1 venceu (%d)\n\n", superPoderCarta01 > superPoderCarta02);

return 0;
} 

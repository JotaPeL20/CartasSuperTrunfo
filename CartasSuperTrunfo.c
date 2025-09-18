#include <stdio.h>  

int main(){
    
    
  // Variáveis primeira carta
  char Estado1;
  char Codigo_da_carta1[4];
  char Nome_da_cidade1[50];
  unsigned long int Populacao1;
  unsigned int Pontos_Turisticos1;
  float Area1, PIB1;
  float PIB_Per_Capita1, Densidade_Populacional1;
  float SuperPoder1;

  // Variáveis segunda carta
  char Estado2;
  char Codigo_da_carta2[4];
  char Nome_da_cidade2[50];
  unsigned long int Populacao2;
  unsigned int Pontos_Turisticos2;
  float Area2, PIB2;
  float PIB_Per_Capita2, Densidade_Populacional2;
  float SuperPoder2;

  // Cabeçalho do jogo

  printf("SUPER TRUNFO DE PAÍSES - CADASTRO DE CARTAS\n\n");

  // Leitura de dados da primeira carta
  printf("Registre a sua carta 1\n\n");

  printf("Digite o Estado (A-H): "); //O jogador irá digitar a letra correspondente ao Estado
  scanf("%c", &Estado1);

  printf("Digite o Código da Carta(ex: A01): "); //O jogador irá digitar o código da carta
  scanf("%s", Codigo_da_carta1);

  printf("Digite o Nome da Cidade: "); //O jogador irá digitar o nome da cidade presente na carta
  scanf("%s", Nome_da_cidade1);

  printf("Digite a População: "); //O jogador irá digitar a populaçao da cidade
  scanf("%lu", &Populacao1);

  printf("Digite a Área da Cidade (km²): "); //O jogador irá digitar a área da cidade 
  scanf("%f", &Area1);

  printf("Digite o PIB (bilhões de reais): "); //O jogador irá digitar o PIB da cidade
  scanf("%f", &PIB1);

  printf("Digite o número de Pontos Turísticos: "); //O jogador irá digitar o numero de pontos turísticos da cidade
  scanf("%u", &Pontos_Turisticos1);

  // Cálculos após a leitura dos dados

  PIB_Per_Capita1 = (float) (PIB1 * 1000000000) / Populacao1; //Usando a conversão explícita para float e convertendo bilhões em unidades
  Densidade_Populacional1 = (float) Populacao1 / Area1;
  
  //Cálculo do SuperPoder1 com o inverso da densidade

  float Inverso_Densidade_Populacional1 = Area1 / Populacao1;
  SuperPoder1 = (float) Populacao1 + Area1 + (PIB1 * 1000000000) + Pontos_Turisticos1 + PIB_Per_Capita1 + Inverso_Densidade_Populacional1;
  
  printf("\n\n");

  // Leitura de dados da segunda carta

  printf("Registre a sua carta 2\n\n");

  printf("Digite o Estado (A-H): "); //O jogador irá digitar a letra correspondente ao Estado
  scanf(" %c", &Estado2);

  printf("Digite o Código da Carta (ex: A01): "); //O jogador irá digitar o código da carta
  scanf("%s", Codigo_da_carta2);

  printf("Digite o Nome da Cidade: "); //O jogador irá digitar o nome da cidade presente na carta
  scanf("%s", Nome_da_cidade2);

  printf("Digite a População: "); //O jogador irá digitar a populaçao da cidade
  scanf("%lu", &Populacao2);

  printf("Digite a Área da Cidade (km²): "); //O jogador irá digitar a área da cidade
  scanf("%f", &Area2);

  printf("Digite o PIB (bilhões de reais): "); //O jogador irá digitar o PIB da cidade
  scanf("%f", &PIB2);

  printf("Digite o N° de Pontos Turísticos: "); //O jogador irá digitar o numero de pontos turísticos da cidade
  scanf("%u", &Pontos_Turisticos2);

  printf("\n\n");

  // Cálculos após a leitura dos dados
  PIB_Per_Capita2 = (float) (PIB2 * 1000000000) / Populacao2; //Usando a conversão explícita para float e convertendo bilhões em unidades
  Densidade_Populacional2 = (float) Populacao2 / Area2;
  
  //Cálculo do SuperPoder2 com o inverso da densidade
  float Inverso_Densidade_Populacional2 = Area2 / Populacao2;
  SuperPoder2 = (float) Populacao2 + Area2 + (PIB2 * 1000000000) + Pontos_Turisticos2 + PIB_Per_Capita2 + Inverso_Densidade_Populacional2;
  
  // Exibição das cartas cadastradas
    
  printf("CARTAS CADASTRADAS\n\n");

  // Carta 1 

  printf("Carta 1\n"); 
  printf("Estado: %c\n", Estado1);
  printf("Código: %s\n", Codigo_da_carta1);
  printf("Nome da Cidade: %s\n", Nome_da_cidade1);
  printf("População: %lu habitantes\n", Populacao1);
  printf("Área: %.2f Km²\n", Area1);
  printf("PIB: %.2f bilhões de reais\n", PIB1);
  printf("Número de Pontos Turísticos: %u\n", Pontos_Turisticos1);
  printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional1);
  printf("PIB per Capita: %.2f reais\n", PIB_Per_Capita1);
  printf("Super Poder: %.2f\n", SuperPoder1);
  printf("\n");
    
  // Carta 2

  printf("Carta 2\n");  
  printf("Estado: %c\n", Estado2);
  printf("Código: %s\n", Codigo_da_carta2);
  printf("Nome da Cidade: %s\n", Nome_da_cidade2);
  printf("População: %lu habitantes\n", Populacao2);
  printf("Área: %.2f Km²\n", Area2);
  printf("PIB: %.2f bilhões de reais\n", PIB2);
  printf("Número de Pontos Turísticos: %u\n", Pontos_Turisticos2);
  printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional2);
  printf("PIB per Capita: %.2f reais\n", PIB_Per_Capita2);
  printf("Super Poder: %.2f\n", SuperPoder2);
  printf("\n");


  //Comparação das cartas 
  
  printf("COMPARAÇÃO DAS CARTAS\n\n");

  // População (maior vence)
  int Resultado_Populacao = (Populacao1 > Populacao2)? 1 : 0;
  printf("População: Carta %d venceu (%d)\n", Resultado_Populacao ? 1 : 2, Resultado_Populacao);

  // Área (maior vence)
  int Resultado_Area = (Area1 > Area2)? 1 : 0;
  printf("Área: Carta %d venceu (%d)\n", Resultado_Area ? 1 : 2, Resultado_Area);

  //PIB (maior vence)
  int Resultado_PIB = (PIB1 > PIB2)? 1 : 0;
  printf("PIB: Carta %d venceu (%d)\n", Resultado_PIB ? 1 : 2, Resultado_PIB);

  //Pontos Turísticos (maior vence)
  int Resultado_Pontos_Turisticos = (Pontos_Turisticos1 > Pontos_Turisticos2)? 1 : 0;
  printf("Pontos Turísticos: Carta %d venceu (%d)\n", Resultado_Pontos_Turisticos ? 1 : 2, Resultado_Pontos_Turisticos);

  //Densidade Populacional (menor vence)
  int Resultado_Densidade_Populacional = (Densidade_Populacional1 < Densidade_Populacional2)? 1 : 0;
  printf("Densidade Populacional: Carta %d venceu (%d)\n", Resultado_Densidade_Populacional ? 1 : 2, Resultado_Densidade_Populacional);

  //PIB per Capita (maior vence)
  int Resultado_PIB_Per_Capita = (PIB_Per_Capita1 > PIB_Per_Capita2)? 1 : 0;
  printf("PIB per Capita: Carta %d venceu (%d)\n", Resultado_PIB_Per_Capita ? 1 : 2, Resultado_PIB_Per_Capita);

  //Super Poder (maior vence)
  int Resultado_Super_Poder = (SuperPoder1 > SuperPoder2)? 1 : 0;
  printf("Super Poder: Carta %d venceu (%d)\n", Resultado_Super_Poder ? 1 : 2, Resultado_Super_Poder);



  return 0;


}
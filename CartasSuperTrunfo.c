#include <stdio.h>

int main() {

  printf ("Cartas Super Trunfo!\n");

  // Carta 1
  
  char Estado [] = "Ceará";
  char Codigo [] = "C01";
  char Cidade [] = "Fortaleza";
  float Populaçao = 2578483;
  float Area = 314.93; // km²
  float Pib = 65160893000.00; // em reais
  int Numero_de_pontos_turisticos = 27;

  // Carta 2

  char Estado2 [] = "Bahia";
  char Codigo2 [] = "A02";
  char Cidade2 [] = "Salvador";
  float Populaçao2 = 2568928.00;
  float Area2 = 693.44; // km² 
  float Pib2 = 62954487490.00; // em reais
  int Numero_de_pontos_turisticos2 = 30;


printf("\nCarta 1:\n");
printf("Estado: %s\n", Estado);
printf("Codigo: %s\n", Codigo);
printf("Cidade: %s\n", Cidade);
printf("Populaçao: %d\n", Populaçao);
printf("Area: %f = km²\n", Area);
printf("Pib: R$ %2.f =  \n", Pib);
printf("Pontos turisticos: %d\n", Numero_de_pontos_turisticos);

printf("\nCarta 2:\n");
printf("Estado2: %s\n", Estado2);
printf("Codigo2: %s\n", Codigo2);
printf("Cidade2: %s\n", Cidade2);
printf("Populaçao2: %d\n", Populaçao2);
printf("Area2: %f = km²\n", Area2);
printf("Pib2: R$ %2.f\n", Pib2);
printf("Pontos turisticos2: %d\n", Numero_de_pontos_turisticos2);

return 0;
} 

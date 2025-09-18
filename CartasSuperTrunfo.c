#include <stdio.h>

int main() {

  printf ("Cartas Super Trunfo!\n");
  // Carta 1
  
  char Estado [] = "Ceará";
  char Codigo [] = "C01";
  char Cidade [] = "Fortaleza";
  int População = 2578483;
  float Area = 314.93; // km²
  float Pib = 65160893000.00; // em reais
  int Numero_de_pontos_turisticos = 27;

  // Carta 2

  char estado [] ="Bahia";
  char Codigo2 [] = "A02";
  char Cidade [] = "Salvador";
  int População = 2568928.00;
  float Area = 693.44; // km² 
  float Pib = 62954487490.00; // em reais
  int Numero_de_pontos_turisticos = 30;


printf("\nCarta 1:\n");
printf("Estado: %s\n", Estado);
printf("Código: %s\n", Codigo);
printf("Capital: %s\n", Cidade);
printf("Área: %.3f km²\n", Area);
printf("Pib: R$ %.2f\n", Pib);
printf("Pontos turísticos: %d\n", Numero_de_pontos_turisticos);

printf("\nCarta 2:\n");
printf("Estado: %s\n", Estado);
printf("Código: %s\n", Codigo2);
printf("Capital: %s\n", Cidade);
printf("Área: %.3f km²\n", Area);
printf("Pib: R$ %.2f\n", Pib);
printf("Pontos turísticos: %d\n", Numero_de_pontos_turisticos);

return 0;
} 

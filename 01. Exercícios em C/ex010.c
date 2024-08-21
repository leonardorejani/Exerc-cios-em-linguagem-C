#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {

setlocale (LC_ALL, "portuguese_brazil");

float veic, perc, percn, imp, impn, total;

printf("Qual o preço do veículo?\n");
scanf("%f", &veic);

printf("Qual o percentual de lucro do distribuidor?\n");
scanf("%f", &perc);

printf("Qual o percentual dos impóstos dobre o veículo?\n");
scanf("%f", &imp);


percn = veic*(perc/100);
impn = veic*(imp/100);
total = veic+(percn+impn);


printf("Valor total do veículo: %.2f\n", veic);
printf("Lucro do distribuidor: %.2f\n", percn);
printf("impóstos sobre o veículo %.2f\n", impn);
printf("Preço total do veículo: %.2f\n", total);


}
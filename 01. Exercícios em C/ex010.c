#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {

setlocale (LC_ALL, "portuguese_brazil");

float veic, perc, percn, imp, impn, total;

printf("Qual o pre�o do ve�culo?\n");
scanf("%f", &veic);

printf("Qual o percentual de lucro do distribuidor?\n");
scanf("%f", &perc);

printf("Qual o percentual dos imp�stos dobre o ve�culo?\n");
scanf("%f", &imp);


percn = veic*(perc/100);
impn = veic*(imp/100);
total = veic+(percn+impn);


printf("Valor total do ve�culo: %.2f\n", veic);
printf("Lucro do distribuidor: %.2f\n", percn);
printf("imp�stos sobre o ve�culo %.2f\n", impn);
printf("Pre�o total do ve�culo: %.2f\n", total);


}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

setlocale (LC_ALL, "Portuguese_Brazil");

float area, r, d;

printf("Informe o raio do c�rculo.\n");
scanf("%f", &r);

d = r*r;
area = (d*3.1416);

printf("A �rea do c�rculo �: %.2f\n", area);

}
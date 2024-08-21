#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

setlocale (LC_ALL, "Portuguese_Brazil");

float area, r, d;

printf("Informe o raio do círculo.\n");
scanf("%f", &r);

d = r*r;
area = (d*3.1416);

printf("A área do círculo é: %.2f\n", area);

}
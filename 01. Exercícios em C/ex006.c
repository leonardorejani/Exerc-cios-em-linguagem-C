#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

setlocale (LC_ALL, "Portuguese_Brazil");

float area, base, altura;

printf("Informe a base do triângulo.\n");
scanf("%f", &base);

printf("Informe a altura do triângulo.\n");
scanf("%f", &altura);

area = (base*altura)/2;

printf("A área do triângulo é: %.2f\n", area);

}
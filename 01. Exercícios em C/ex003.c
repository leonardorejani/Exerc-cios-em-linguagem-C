#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main () {

setlocale(LC_ALL, "Portuguese_Brazil");

float n1, n2, n3, p1, p2, p3, media;

printf("Informe a primeira nota: ");
scanf("%f", &n1);
printf("Informe o valor do peso: ");
scanf("%f", &p1);

printf("Informe a segunda nota: ");
scanf("%f", &n2);
printf("Informe o valor do peso: ");
scanf("%f", &p2);

printf("Informe a terceira nota: ");
scanf("%f", &n3);
printf("Informe o valor do peso: ");
scanf("%f", &p3);

media = ((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);

printf("O resultado da media pomderada é: %.2f", media);

}
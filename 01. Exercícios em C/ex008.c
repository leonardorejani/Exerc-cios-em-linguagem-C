#include <stdio.h>
#include <locale.h>//BIBLIOTECA PARA ACENTUA��O GR�FICA
#include <math.h> //BIBLIOTECA PARA C�LCULOS

int main () {

setlocale (LC_ALL, "Portuguese_Brazil"); //ACEITAR ACENTUA��O DA L�NGUA PORTUGUESA

float n, n2, n3, n4, n5;

printf("Escreva um n�mero positivo maior que 0:\n");
scanf("%f", &n);

n2 = n*n;
n3 = n*n*n;
n4 = sqrt(n); //SQRT PARA RA�Z QUADRADA
n5 = cbrt(n); //CBRT PARA RA�Z C�BICA

if (n>0) {   

    printf("\n");
    printf("o n�mero digitado ao quadrado: %.2f\n", n2);
    printf("o n�mero digitado ao cubo: %.2f\n", n3);
    printf("a raiz quadrada do n�mero digitado: %.2f\n", n4);
    printf("a raiz c�bica do n�mero digitado: %.2f\n", n5);
}
else {
    printf("Esse valor � negativo ou igual a zero!");
}

}
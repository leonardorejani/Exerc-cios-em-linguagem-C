#include <stdio.h>
#include <locale.h>//BIBLIOTECA PARA ACENTUAÇÃO GRÁFICA
#include <math.h> //BIBLIOTECA PARA CÁLCULOS

int main () {

setlocale (LC_ALL, "Portuguese_Brazil"); //ACEITAR ACENTUAÇÃO DA LÍNGUA PORTUGUESA

float n, n2, n3, n4, n5;

printf("Escreva um número positivo maior que 0:\n");
scanf("%f", &n);

n2 = n*n;
n3 = n*n*n;
n4 = sqrt(n); //SQRT PARA RAÍZ QUADRADA
n5 = cbrt(n); //CBRT PARA RAÍZ CÚBICA

if (n>0) {   

    printf("\n");
    printf("o número digitado ao quadrado: %.2f\n", n2);
    printf("o número digitado ao cubo: %.2f\n", n3);
    printf("a raiz quadrada do número digitado: %.2f\n", n4);
    printf("a raiz cúbica do número digitado: %.2f\n", n5);
}
else {
    printf("Esse valor é negativo ou igual a zero!");
}

}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

 setlocale(LC_ALL, "Portuguese");

int n1, n2, n3, n4, soma;

printf("Informe o primeiro número.");
scanf("%d", &n1);

printf("Informe o segundo número.");
scanf("%d", &n2);

printf("Informe o terceiro número.");
scanf("%d", &n3);

printf("Informe o quarto número.");
scanf("%d", &n4);

soma = n1+n2+n3+n4;

printf("A soma dos 4 número é de: %d\n", soma);

 system("pause");
return 0;
}

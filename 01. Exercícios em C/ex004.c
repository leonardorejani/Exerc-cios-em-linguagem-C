#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale (LC_ALL, "Portuguese_Brazil");

    float sal, nov_sal; 

    printf("Digite o seu sal�rio:\n");
    scanf("%f", &sal);

    nov_sal = sal+(sal*0.25);

    printf("O sal�rio com aumento � de : %.2f", nov_sal);
}
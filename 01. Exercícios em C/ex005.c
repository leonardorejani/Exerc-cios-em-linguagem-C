#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale (LC_ALL, "Portuguese_Brazil");

    float sal, perc, percn, nov_sal;

    printf("Informe o sal�rio:\n");
    scanf("%f", &sal);

    printf("Informe o percentual de aumento:\n");
    scanf("%f", &perc);

    percn = (sal*(perc/100));
    nov_sal = sal+percn;

    printf("O valor do aumento �: %.2f\n", perc);
    printf("O resultado �: %.2f\n", nov_sal);

}
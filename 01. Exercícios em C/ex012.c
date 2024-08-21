#include <stdio.h>
#include <locale.h>


    
int main() {

        setlocale (LC_ALL, "portuguese_brazil");
    
    int kg, g, total;

    printf("O saco de ração é de quantos Kg? \n");
    scanf("%d", &kg);

    printf("Qual a quantidade servida para os dois gatos? \n");
    scanf("%d", &g);

    total= (kg-(g*10));

    printf("A quantidade de ração no pacote após 5 dias é de: %d\n", total); 
}
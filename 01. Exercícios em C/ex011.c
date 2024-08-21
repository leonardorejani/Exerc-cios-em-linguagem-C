#include <stdio.h>
#include <locale.h>


    
int main() {

        setlocale (LC_ALL, "portuguese_brazil");

    float horas_trabalhadas, salario_minimo;
    float valor_hora_trabalhada, salario_bruto, imposto, salario_a_receber;

    printf("Digite o número de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);

    printf("Digite o valor do salário minimo: ");
    scanf("%f", &salario_minimo);

    valor_hora_trabalhada = salario_minimo / 2;

    salario_bruto = horas_trabalhadas * valor_hora_trabalhada;

    imposto = 0.03 * salario_bruto;

    salario_a_receber = salario_bruto - imposto;

    printf("\n");
    printf("Salário mínimo/2: R$ %.2f\n", valor_hora_trabalhada);
    printf("Salário bruto: R$ %.2f\n", salario_bruto);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salário a receber: R$ %.2f\n", salario_a_receber);
    
    

}
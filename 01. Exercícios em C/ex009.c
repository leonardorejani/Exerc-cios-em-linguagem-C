#include <stdio.h>
#include <locale.h>

int main() {

setlocale(LC_ALL, "portuguese_brazil");

    const int PE_EM_POLEGADAS = 12;
    const int JARDAS_EM_PES = 3;
    const int MILHAS_EM_JARDAS = 1760;

    float pes;
    float polegadas, jardas, milhas;

    printf("Digite a medida em pés: ");
    scanf("%f", &pes);

    polegadas = pes * PE_EM_POLEGADAS;
    jardas = pes / JARDAS_EM_PES;
    milhas = jardas / MILHAS_EM_JARDAS;

    printf("Medida em polegadas: %.2f\n", polegadas);
    printf("Medida em jardas: %.2f\n", jardas);
    printf("Medida em milhas: %.6f\n", milhas);

  return 0;
}
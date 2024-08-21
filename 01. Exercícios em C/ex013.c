#include <stdio.h>

int main() {

    float alturaDegrau, alturaDesejada;
    int degrausNecessarios;

    printf("Digite a altura de cada degrau (em metros): ");
    scanf("%f", &alturaDegrau);

    printf("Digite a altura que deseja alcançar (em metros): ");
    scanf("%f", &alturaDesejada);

    if (alturaDegrau <= 0) {
        printf("A altura do degrau deve ser um valor positivo.\n");
        return 1;
    }

    alturaDegrau = alturaDegrau*100;
    alturaDesejada = alturaDesejada*100;

    degrausNecessarios = ((alturaDesejada + alturaDegrau) / alturaDegrau);

    printf("Você precisa subir %d degraus para alcançar a altura desejada.\n", degrausNecessarios);
}

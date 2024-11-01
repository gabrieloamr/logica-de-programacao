#include <stdio.h>

int main() {
    float t, vm, d, lts;

    printf("Tempo gasto na viagem (horas): ");
    scanf("%f", &t);
    printf("Velocidade media durante a viagem (Km/h): ");
    scanf("%f", &vm);

    d = vm * t;
    lts = d / 12;

    printf("Distancia percorrida: %.2lfKm\n", d);
    printf("Quantidade de combustivel utilizada: %.2lfL\n", lts);

    return 0;
}
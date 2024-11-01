#include <stdio.h>

int main() {
    float TC, TF;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &TC);

    TF = (9 * TC + 160) / 5;

    printf("Temperatura equivale a %.2lf graus Farenheit\n", TF);

    return 0;
}
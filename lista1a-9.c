#include <stdio.h>

int main() {
    float salMin, Kw, valor;

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salMin);
    printf("Digite a quantidade de Kw gasta: ");
    scanf("%f", &Kw);

    valor = (salMin / 700) * Kw;

    printf("A quantidade de Kw gasta equivale a R$ %.2lf\n", valor);


    return 0;
}
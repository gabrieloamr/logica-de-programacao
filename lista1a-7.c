#include <stdio.h>

int main() {
    int A, B, temp;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    temp = A;
    A = B;
    B = temp;

    printf("Valores depois da troca:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return 0;
}
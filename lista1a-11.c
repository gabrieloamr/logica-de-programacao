#include <stdio.h>  

int somaImpares(int n) {
    int soma = 0;

    for (int i = 1; i <= n; i++) {
        if (i%2 != 0) {
            soma += i; // soma = soma + i
        }
    }

    return soma;
}

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("A soma de todos os numeros impares ate %d e igual a %d\n", n, somaImpares(n));

    return 0;
}
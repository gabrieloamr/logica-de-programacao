#include <stdio.h>  

int main() {
    int n, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i%2 != 0) {
            soma += i; // soma = soma + i
        }
    }

    printf("A soma dos numeros impares ate %d e igual a %d\n", n, soma);

    return 0;
} 
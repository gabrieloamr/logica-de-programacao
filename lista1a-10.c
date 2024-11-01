#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    
    int anterior = 0, atual = 1, proximo;

    for (int i = 2; i <= n; i++) {
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    return atual;
}

int main() {
    int n;
    printf("Digite a posicao do termo: ");
    scanf("%d", &n);

    printf("O %d-esimo termo da sequencia de fibonacci e %d\n", n, fibonacci(n));

    return 0;
}
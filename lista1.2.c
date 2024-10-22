#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, antecessor, sucessor;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);

    antecessor = num - 1;
    sucessor = num + 1;

    printf("O antecessor do numero %d é %d e o sucessor é %d\n", num, antecessor, sucessor);

    return 0;
}
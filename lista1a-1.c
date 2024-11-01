#include  <stdio.h>
#include <stdlib.h>

int main() {
    int razao, primeiroTermo, posicaoTermoDesejado, termoDesejado;  

    printf("Digite a razao da PA:\n");
    scanf("%d", &razao);
    printf("Digite o primeiro termo da PA:\n");
    scanf("%d", &primeiroTermo);
    printf("Digite a posicao do termo desejado:\n");
    scanf("%d", &posicaoTermoDesejado);

    termoDesejado = primeiroTermo + (posicaoTermoDesejado - 1) * razao;

    printf("O termo na posicao %d da PA é %d\n", posicaoTermoDesejado, termoDesejado);

    return 0;
}
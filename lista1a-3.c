#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, dezenaNum;

    printf("Digite um numero de 4 algarismos:\n");
    scanf("%d", &num);

    if (num < 1000 || num > 9999) {
        printf("Digite um numero com 4 algarismos apenas!\n");    // ex: 6764 //
    } else {
        dezenaNum = (num / 10) % 10;
        printf(" O algarismo na casa das dezenas do numero %d é %d\n", num, dezenaNum);
    }

    return 0;
}
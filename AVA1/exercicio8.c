//O programa cria um vetor de 5 números inteiros e utiliza ponteiros para acessar seus elementos.
//Os valores são lidos usando aritmética de ponteiros, e em seguida o programa imprime o dobro de cada valor.
//Esse exercício foca no uso de ponteiros em C.

#include <stdio.h>

int main() {
    int v[5];
    int *p = v;

    for(int i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", (p + i));
    }

    for(int i = 0; i < 5; i++) {
        printf("%d ", *(p + i) * 2);
    }

    return 0;
}

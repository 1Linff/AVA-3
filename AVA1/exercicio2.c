//O programa cria um vetor de 5 posições para armazenar números inteiros.
//Utilizando um laço de repetição for, ele lê 5 valores digitados pelo usuário e os armazena no vetor.
//Depois, outro laço percorre o vetor de trás para frente, exibindo os valores em ordem inversa.
//Esse exercício funciona com vetores e estruturas de repetição.

#include <stdio.h>

int main() {
    int v[5];

    printf("Digite 5 numeros:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
    }

    printf("Vetor invertido:\n");
    for(int i = 4; i >= 0; i--) {
        printf("%d", v[i]);
    }
    return 0;
}

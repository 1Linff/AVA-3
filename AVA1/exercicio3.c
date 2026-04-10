//O programa lê uma matriz 3x3 utilizando dois laços de repetição for.
//Cada elemento da matriz é multiplicado por 5, e o resultado é exibido na tela.
//Esse exercício demonstra o uso de matrizes e laços aninhados.

#include <stdio.h>

int main() {
    int m[3][3];

    printf("Digite os 9 numeros da matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    printf("Matriz multiplicada por 5:\n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d\t", m[i][j] * 5); // 0 \t
        }
        printf("\n");
    }

    return 0;
}

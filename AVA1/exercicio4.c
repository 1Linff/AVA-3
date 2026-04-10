//O programa cria uma matriz identidade 3x3, onde os elementos da diagonal principal são iguais a 1 e os demais são 0.
//Em seguida, ele multiplica uma matriz informada pelo usuário pela matriz identidade.
//O resultado dessa multiplicação é a própria matriz original, comprovando o conceito de identidade matriz.

#include <stdio.h>

int main() {
    int m[3][3], identidade[3][3];

    printf("Digite a matriz 3x3:\n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(i == j)
                identidade[i][j] = 1;
            else
                identidade[i][j] = 0;
        }
    }

    printf("Resultado da multiplicacao:\n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            int soma = 0;
            for(int k = 0; k < 3; k++) {
                soma += m[i][k] * identidade[k][j];
            }
            printf("%d\t", soma);
        }
        printf("\n");
    }

    return 0;
}

//O programa lê um vetor de 3 elementos e uma matriz 3x3.
//Depois, realizamos a multiplicação do vetor pelas colunas da matriz, gerando um novo conjunto de valores.
//Esse exercício envolve operações matemáticas com vetores e matrizes.

#include <stdio.h>

int main() {
    int v[3], m[3][3];

    printf("Digite 3 valores para o vetor: \n");
    for(int i = 0; i < 3; i++) 
    scanf("%d", &v[i]);

printf("Digite os 9 valores para a matrix m (3x3):\n");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("\n %d", &m[i][j]);

    printf("Resultado:\n");
    for(int j = 0; j < 3; j++) {
        int soma = 0;
        for(int i = 0; i < 3; i++) {
            soma += v[i] * m[i][j];
        }
        printf("%d ", soma);
    }

    printf("\n");

    return 0;
}

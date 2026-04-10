//O programa define uma estrutura para armazenar nome e nota de alunos.
//Ele utiliza alocação dinâmica de memória para criar um vetor de tamanho definido pelo usuário.
//Uma função percorre esse vetor e retorna o aluno com nota maior.
//Esse exercício utiliza ponteiros, alocação dinâmica ( malloc) e struct.

#include <stio.h>
#include <stdlib.h>

struct Aluno {
    char nome[50];
    float nota;
};

struct Aluno* maiorNota(struct Aluno *a, int n) {
    struct Aluno *maior = a;
    for(int i = 1; i < n; i++) {
        if((a + i)->nota > maior->nota) 
{
            maior = (a + i);
        }
    }

    return maior;
}

int main() {
    int n;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);

    struct Aluno *alunos = malloc(n * sizeof(struct Aluno));

    for(int i = 0; i < n; i++) {
        printf("Nome e nota do aluno %d:", i + 1);
        scanf(" %s %f", (alunos + i)->nome, &(alunos + i)->nota);
    }

    struct Aluno *top = maiorNota(alunos, n);

    printf("Maior nota: %s %.2f\n", top->nome, top->nota);

    free(alunos);

    return 0;
}

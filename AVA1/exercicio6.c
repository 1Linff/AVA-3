//O programa utiliza uma estrutura para armazenar dados de 10 alunos, como nome, matrícula e média final.
//Após a leitura dos dados, ele separa os alunos em dois vetores: aprovados (média maior ou igual a 5) e reprovados (média menor que 5).
//Por fim, exibe os dados de cada grupo.
//Esse exercício trabalha com estruturas (struct) e vetores.

#include <stdio.h>

struct Aluno {
    char nome[30];
    int matricula;
    float media;
}

int main() {
    struct Aluno alunos[10], aprovados[10], reprovados[10];
    int a = 0, r = 0;

    for(int i = 0; i < 10; i++) {
        printf("Didite nome, matricula e media do aluno %d: ", i + 1);
        
        scanf(" %29s %d %f", alunos[i].nome, &alunos[i].matricula, &alunos[i].media);

        if(alunos[i].media >= 5)
            aprovados[a++] = alunos[i];
        else
            reprovados[r++] = alunos[i];
    }

    printf("\nAprovados:\n");
    for(int i = 0; i < a; i++)
        printf("Nome: %-15s | Media: %.2f\n", aprovados[i].nome, aprovados[i].media);

    printf("\rReprovados:\n");
    for(int i = 0; i < r; i++)
        printf("Nome: %-15s | Media: %.2f\n", reprovados[i].nome, reprovados[i].media);

    return 0;
}

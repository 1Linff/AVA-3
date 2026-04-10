#include <stdio.h>
#include <stdlib.h>

typedef struct Cliente {
    int id;
    int tempoAtendimento;
    struct Cliente *prox;
} Cliente;

typedef struct {
    Cliente *inicio;
    Cliente *fim;
} Fila;

void inicializarFila(Fila *f) {
    f->inicio = NULL;
    f->fim = NULL;
}

void enqueue(Fila *f, int id, int tempoAtendimento) {
    Cliente *novo = (Cliente *) malloc(sizeof(Cliente));

    if (novo == NULL) {
        printf("erro de alocacao de memoria.\n");
        return;
    }

    novo->id = id;
    novo->tempoAtendimento = tempoAtendimento;
    novo->prox = NULL;

    if (f->fim == NULL) {
        f->inicio = novo;
        f->fim = novo;
    } else {
        f->fim->prox = novo;
        f->fim = novo;
    }
}

Cliente *dequeue(Fila *f) {
    if (f->inicio == NULL) {
        return NULL;
    }

    Cliente *removido = f->inicio;
    f->inicio = f->inicio->prox;

    if (f->inicio == NULL) {
        f->fim = NULL;
    }

    return removido;
}

void simularAtendimento(Fila *f) {
    int tempoEspera = 0;
    Cliente *atendido;

    printf("\n------ Atendimento dos clientes ------\n");

    while ((atendido = dequeue(f)) != NULL) {
        printf("Cliente ID: %d | Tempo de espera: %d minutos\n",
               atendido->id, tempoEspera);

        tempoEspera += atendido->tempoAtendimento;
        free(atendido);
    }
}

int main() {
    Fila fila;
    int n, i;
    int id, tempoAtendimento;

    inicializarFila(&fila);

    printf("quantos clientes deseja cadastrar?");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\nCliente %d\n", i);
        printf("Digite o ID: ");
        scanf("%d", &id);
        printf("digite o tempo de atendimento em minutos:");
        scanf("%d", &tempoAtendimento);

        enqueue(&fila, id, tempoAtendimento);
    }

    simularAtendimento(&fila);

    return 0;
}
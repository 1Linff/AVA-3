#include <stdio.h>
#include <stdlib.h>

typedef struct Documento {
    int id;
    int paginas;
    int prioridade;
    struct Documento *prox;
} Documento;

typedef struct {
    Documento *inicio;
    Documento *fim;
} FilaPrioridade;

void inicializarFila(FilaPrioridade *f) {
    f->inicio = NULL;
    f->fim = NULL;
}

void enqueuePrioridade(FilaPrioridade *f, int id, int paginas, int prioridade) {
    Documento *novo = (Documento *) malloc(sizeof(Documento));
    Documento *atual;
    Documento *anterior = NULL;

    if (novo == NULL) {
        printf("Erro de alocacao de memoria.\n");
        return;
    }

    novo->id = id;
    novo->paginas = paginas;
    novo->prioridade = prioridade;
    novo->prox = NULL;

    if (f->inicio == NULL) {
        f->inicio = novo;
        f->fim = novo;
        return;
    }

    atual = f->inicio;

    while (atual != NULL && atual->prioridade <= prioridade) {
        anterior = atual;
        atual = atual->prox;
    }

    if (anterior == NULL) {
        novo->prox = f->inicio;
        f->inicio = novo;
    }else if (atual == NULL) {
        f->fim->prox = novo;
        f->fim = novo;
    }else {
        anterior->prox = novo;
        novo->prox = atual;
    }
}

Documento *dequeue(FilaPrioridade *f) {
    if (f->inicio == NULL) {
        return NULL;
    }

    Documento *removido = f->inicio;
    f->inicio = f->inicio->prox;

    if (f->inicio == NULL) {
        f->fim = NULL;
    }

    return removido;
}

void exibirFila(FilaPrioridade *f) {
    Documento *aux = f->inicio;

    if (aux == NULL) {
        printf("\nFila vazia.\n");
        return;
    }

    printf("\n------ Fila de impressao ------\n");
    while (aux != NULL) {
        printf("ID: %d | paginas: %d | prioridade: %d\n",
               aux->id, aux->paginas, aux->prioridade);
        aux = aux->prox;
    }
}

void imprimirDocumentos(FilaPrioridade *f) {
    Documento *doc;

    printf("\n--- Ordem de impressao ---\n");

    while ((doc = dequeue(f)) != NULL) {
        printf("imprimindo documento ID: %d | paginas: %d | prioridade: %d\n",
               doc->id, doc->paginas, doc->prioridade);
        free(doc);
    }
}

int main() {
    FilaPrioridade fila;
    int n, i;
    int id, paginas, prioridade;

    inicializarFila(&fila);

    printf("quantos documentos deseja inserir?");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\nDocumento %d\n", i);
        printf("Digite o ID: ");
        scanf("%d", &id);
        printf("digite o numero de paginas: ");
        scanf("%d", &paginas);
        printf("digite a prioridade: ");
        scanf("%d", &prioridade);

        enqueuePrioridade(&fila, id, paginas, prioridade);
    }

    exibirFila(&fila);
    imprimirDocumentos(&fila);

    return 0;
}
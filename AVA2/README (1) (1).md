Inversão de String com Pilha em C


Descrição:

Este programa em C recebe uma string digitada pelo usuário e retorna essa string invertida utilizando uma pilha implementada manualmente com alocação dinâmica.

A inversão ocorre devido ao comportamento da pilha (LIFO - Last In, First Out), onde o último elemento inserido é o primeiro a ser removido.


Funcionamento:
O usuário digita uma string
Cada caractere é empilhado
Os caracteres são desempilhados e impressos
O resultado é a string invertida


Estrutura:
struct No: representa um nó da pilha (armazena um caractere e um ponteiro)
struct Pilha: representa a pilha (guarda o topo)


Funções principais:
push: insere um elemento na pilha
pop: remove e retorna o elemento do topo
vazia: verifica se a pilha está vazia
inicializa: inicializa a pilha


Restrições atendidas
não utiliza funções prontas para inverter string
não utiliza vetor auxiliar
manipulação feita apenas com pilha


Exemplo de uso:

Entrada:
abc

Saída:
cba


Compilação e execução:
gcc programa.c -o programa
./programa


Conceitos utilizados:
Estrutura de dados: Pilha (Stack)
Alocação dinâmica (malloc / free)
Ponteiros
Lista encadeada
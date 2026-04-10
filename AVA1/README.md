# Lista 1 - Estrutura de Dados
Abaixo estão detalhados os exercícios propostos e a lógica aplicada em cada solução:

## Exercício 1

Este programa lê três palavras digitadas pelo usuário e as armazena em variáveis do tipo string.

Em seguida, ele imprime essas palavras na ordem inversa da digitada, ou seja, a terceira palavra aparece primeiro, depois a segunda e por último a primeira.

Para isso, o programa utiliza as funções `scanf` para leitura dos dados e `printf` para exibição.

[Ver código](https://github.com/khornns-pixel/atividade-estrutura-de-dados/blob/main/lista1/exercicio1.c)

---

## Exercício 2

O programa cria um vetor de 5 posições para armazenar números inteiros.

Utilizando um laço de repetição `for`, ele lê 5 valores digitados pelo usuário e os armazena no vetor.

Depois, outro laço percorre o vetor de trás para frente, exibindo os valores em ordem inversa.

Esse exercício trabalha com vetores e estruturas de repetição.

[Ver código](https://github.com/khornns-pixel/atividade-estrutura-de-dados/blob/main/lista1/exercicio2.c)

---

## Exercício 3

O programa lê uma matriz 3x3 utilizando dois laços de repetição `for`.

Cada elemento da matriz é multiplicado por 5, e o resultado é exibido na tela.

Esse exercício demonstra o uso de matrizes e laços aninhados.

[Ver código](https://github.com/khornns-pixel/atividade-estrutura-de-dados/blob/main/lista1/exercicio3.c)

---

## Exercício 4

O programa cria uma matriz identidade 3x3, onde os elementos da diagonal principal são iguais a 1 e os demais são 0.

Em seguida, ele multiplica uma matriz informada pelo usuário pela matriz identidade.

O resultado dessa multiplicação é a própria matriz original, comprovando o conceito de matriz identidade.

[Ver código](https://github.com/khornns-pixel/atividade-estrutura-de-dados/blob/main/lista1/exercicio4.c)

---

## Exercício 5

O programa lê um vetor de 3 elementos e uma matriz 3x3.

Depois, realiza a multiplicação do vetor pelas colunas da matriz, gerando um novo conjunto de valores.

Esse exercício envolve operações matemáticas com vetores e matrizes.

[Ver código](https://github.com/khornns-pixel/atividade-estrutura-de-dados/blob/main/lista1/exercicio5.c)

---

## Exercício 6

O programa utiliza uma struct para armazenar dados de 10 alunos, como nome, matrícula e média final.

Após a leitura dos dados, ele separa os alunos em dois vetores: aprovados (média maior ou igual a 5) e reprovados (média menor que 5).

Por fim, exibe os dados de cada grupo.

Esse exercício trabalha com estruturas (struct) e vetores.

[Ver código](https://github.com/khornns-pixel/atividade-estrutura-de-dados/blob/main/lista1/exercicio6.c)

---

## Exercício 7

O programa armazena dados de 5 livros utilizando uma struct, contendo título, autor e ano.

O usuário informa um título para busca, e o programa percorre o vetor verificando quais livros possuem o título informado.

Se encontrar, exibe os dados do livro.

Esse exercício utiliza struct e comparação de strings com `strcmp`.

[Ver código](https://github.com/khornns-pixel/atividade-estrutura-de-dados/blob/main/lista1/exercicio7.c)

---

## Exercício 8

O programa cria um vetor de 5 números inteiros e utiliza ponteiros para acessar seus elementos.

Os valores são lidos usando aritmética de ponteiros, e em seguida o programa imprime o dobro de cada valor.

Esse exercício foca no uso de ponteiros em C.

[Ver código](https://github.com/khornns-pixel/atividade-estrutura-de-dados/blob/main/lista1/exercicio8.c)

---

## Exercício 9

O programa lê três valores inteiros e chama uma função que recebe esses valores por referência.

A função organiza os valores em ordem crescente diretamente nas variáveis originais.

Além disso, retorna 1 se os três valores forem iguais, ou 0 caso contrário.

Esse exercício trabalha com funções e ponteiros (passagem por referência).

[Ver código](https://github.com/khornns-pixel/atividade-estrutura-de-dados/blob/main/lista1/exercicio9.c)

---

## Exercício 10

O programa define uma struct para armazenar nome e nota de alunos.

Ele utiliza alocação dinâmica de memória para criar um vetor de tamanho definido pelo usuário.

Uma função percorre esse vetor e retorna o aluno com a maior nota.

Esse exercício utiliza ponteiros, alocação dinâmica (`malloc`) e struct.

[Ver código](https://github.com/khornns-pixel/atividade-estrutura-de-dados/blob/main/lista1/exercicio10.c)

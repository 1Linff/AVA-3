DESAFIO 1

O primeiro desafio foi feito para simular o atendimento de uma fila de clientes usando fila dinâmica com structs e ponteiros, cada cliente possui um ID e um tempo de atendimento e eles são colocados na fila na ordem em que chegam.

O programa começa lendo a quantidade de clientes que serão cadastrados, depois disso os clientes são inseridos no final da fila. Em seguida, o atendimento é simulado de forma sequencial, mostrando na tela o ID do cliente atendido e o tempo de espera até ele ser chamado.

O tempo de espera de cada cliente é calculado pela soma dos tempos de atendimento das pessoas que estão na frente dele na fila.

Para fazer isso, o código usa:

uma função para inicializar a fila uma função para inserir clientes na fila uma função para remover clientes da fila uma função para simular o atendimento

A implementação foi feita sem usar vetores para representar a fila, utilizando apenas alocação dinâmica de memória com malloc e free.

DESAFIO 2

O segundo desafio foi feito para simular uma fila de impressão com prioridade usando structs, ponteiros e alocação dinâmica de memória, cada documento possui um ID, a quantidade de páginas e um valor de prioridade, onde quanto menor esse valor, maior é a prioridade de impressão.

O programa começa lendo quantos documentos serão inseridos, depois cada documento é colocado na fila na posição correta de acordo com sua prioridade. Se dois documentos tiverem a mesma prioridade, o programa mantém a ordem em que eles chegaram.

Depois das inserções, o código mostra como a fila ficou organizada e em seguida simula a impressão dos documentos, exibindo na tela a ordem em que eles serão atendidos.

Para fazer isso foi usado:

uma função para inicializar a fila uma função para inserir os documentos respeitando a prioridade uma função para remover documentos da fila uma função para exibir a fila uma função para simular a impressão

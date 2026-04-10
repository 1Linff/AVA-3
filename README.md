Este código em C foi feito para simular o atendimento de uma fila de clientes usando fila dinâmica com structs e ponteiros. Cada cliente possui um ID e um tempo de atendimento, e eles são colocados na fila na ordem em que chegam.

O programa começa lendo a quantidade de clientes que serão cadastrados. Depois disso, os clientes são inseridos no final da fila. Em seguida, o atendimento é simulado de forma sequencial, mostrando na tela o ID do cliente atendido e o tempo de espera até ele ser chamado.

O tempo de espera de cada cliente é calculado pela soma dos tempos de atendimento das pessoas que estão na frente dele na fila.

Para fazer isso, o código usa:

uma função para inicializar a fila
uma função para inserir clientes na fila
uma função para remover clientes da fila
uma função para simular o atendimento

A implementação foi feita sem usar vetores para representar a fila, utilizando apenas alocação dinâmica de memória com malloc e free, como pedido na atividade.

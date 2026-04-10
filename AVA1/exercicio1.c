//Este programa lê três palavras digitalizadas pelo usuário e armazenadas em variáveis ​​do tipo string.
//Em seguida, ele imprime essas palavras na ordem inversa da digitada, ou seja, 
//a terceira palavra aparece primeiro, depois a segunda e por último a primeira.
//Para isso, o programa utiliza as funções scanfpara leitura dos dados e printfpara exibição.

#include <stdio.h>

int main() {
    char p1[20], p2[20], p3[20];

    printf("Digite 3 palavras:\n");
    scanf("%s %s %s", p1, p2, p3);

    printf("Ordem inversa: %s %s %s\n", p3, p2, p1);

    return 0;
}

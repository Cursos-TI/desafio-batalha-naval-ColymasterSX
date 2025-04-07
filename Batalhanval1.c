#include <stdio.h>


int main(){

//criei as variaves    
char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};//Linha com 10 vetores da caracteristicas de A ate J.
int soma = 0;//Variavel soma recebendo 0.
int matriz[10][10];//E a matriz pra o tabuleiro.


printf("--- tabuleiro naval ---\n");//printf para imprimir a mensagem no terminal.
printf("\n");//printf para pula uma linha completa.
printf("  ");//printf so pra diexa um espaço na linha.

for (int a = 0; a < 10; a++)//for criando a variavel (a) recendo 0,tendo com operador relacional (a) sendo menor que 10 e verdadeiro,e incrementando(++) a variavel.
{
    printf("%c ", linha[a]);//printf pra imprimir em uma linha,as informações dentro do vetor no terminal.
}
    printf("\n");//printf so pra pular uma linha deixando mais organizado no terminal.

for (int i = 0; i < 10; i++)//for criando a variavel (i) recendo 0,tendo com operador relacional (i) sendo menor que 10 e verdadeiro,e incrementando(++) a variavel.
{
    printf("%d ", i);//pra imprimir uma coluna de 0 ate 9 no terminal.

for (int j = 0; j < 10; j++)//for criando a variavel (j) recendo 0,tendo com operador relacional (j) sendo menor que 10 e verdadeiro,e incrementando(++) a variavel.
{
    matriz[i][j] = soma;//matriz com os indices [i] e [j] pra cria a matriz como um plano carteziano, tendo o valor nas coordenadas igual a soma(que é 0).

    matriz[4][4] = 3;//codego substituindo o valor 0 na cordenada especifica na matriz indicados no indices [ ] [ ],recendo 3,pra indica o navio.
    matriz[4][5] = 3;//codego substituindo o valor 0 na cordenada especifica na matriz indicados no indices [ ] [ ],recendo 3,pra indica o navio.
    matriz[4][6] = 3;//codego substituindo o valor 0 na cordenada especifica na matriz indicados no indices [ ] [ ],recendo 3,pra indica o navio.

    matriz[3][0] = 3;//codego substituindo o valor 0 na cordenada especifica na matriz indicados no indices [ ] [ ],recendo 3,pra indica o navio.
    matriz[4][0] = 3;//codego substituindo o valor 0 na cordenada especifica na matriz indicados no indices [ ] [ ],recendo 3,pra indica o navio.
    matriz[5][0] = 3;//codego substituindo o valor 0 na cordenada especifica na matriz indicados no indices [ ] [ ],recendo 3,pra indica o navio.

    printf("%d ", matriz[i][j]);//printf pra imprimir toda a matriz no terminal.
    
}
    printf("\n");//printf para pula uma linha completa.
}
 
return 0;

}
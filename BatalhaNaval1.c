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
    printf("%d ", i + 1);//pra imprimir uma coluna de 0 ate 9 no terminal.

for (int j = 0; j < 10; j++)//for criando a variavel (j) recendo 0,tendo com operador relacional (j) sendo menor que 10 e verdadeiro,e incrementando(++) a variavel.
{
    matriz[i][j] = soma;//matriz com os indices [i] e [j] pra cria a matriz como um plano carteziano, tendo o valor nas coordenadas igual a soma(que é 0).
    
    for (int i = 0; i < 1; i++)//a variavel recebe 0, tendo um limite de uma linha de execuçao por causa da (i < 1),e incrementa(++) pra finalizar a execução
    {
     for (int j = 0; j < 3; j++)//a variavel recebe 0,que vai ate 3 colunas,por causa do (j < 3);incrementa(++) pra finaizar
     {
        matriz[i][j] = 3;//substituir o valor de 0 da matriz por 3,nas coordenas especifica no loop alinhado
     }
    
    }
    
    for (int j = 5; j < 6; j++)//a variavel recebe 5,pra definir qual coluna da matriz vai ocorrer a execução do codego,por causa (j < 6)
    {
     for (int i = 0; i < 3; i++)//a variavel recebe 0,pra definir a linha da matriz a ser executada indo ate 3 casas por causa (i < 3)
     {
        matriz[i][j] = 3;//vai substituir o valor de 0 na matriz por 3,nas coordenadas especifica no loop alinhado
     }
    
    }
    printf("%d ", matriz[i][j]);//printf pra imprimir toda a matriz no terminal.
    
}
    printf("\n");//printf para pula uma linha completa.
}
 
return 0;

}
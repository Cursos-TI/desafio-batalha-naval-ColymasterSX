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

for (int j = 0; j < 10; j++)
 {
        matriz[i][j] = soma;//matriz com os indices [i] e [j] pra cria a matriz como um plano carteziano, tendo o valor nas coordenadas igual a soma(que é 0).
    
//codegos das formas geometricas

//cruz
//parte 1
    for (int i = 0; i < 5; i++)//criei o loop pra pecorrer as linhas
    {
       if (i + j < 8)//quando a soma de I e J for menor que 8 vai executar
       {
        for (int j = 3; j < 4; j++)//criei pra pecorrer a coluna
        {
            matriz[i][j] = 1;//vai troca o valor 0 da matriz por 1 nas areas da execução
        }
        
       }
       
    }
//cruz
//parte 2
    for (int i = 2; i < 3; i++)// criei pra pecorrer uma linha
    {
        if (i + j >= 3 || i + j < 7 )//quando a soma de I e J for maio ou igual a 3 e for menor que 7 vai executar
        {
           for (int j = 1; j < 6; j++)//criei pra pecorrer as colunas
           {
            matriz[i][j] = 1;//vai troca o valor 0 da matriz por 1 nas areas da execução
           }
           
        }
        
    }

//cone 
//parte 1
    for (int i = 3; i < 6; i++)//pecorrer uma linha da matriz
    {
        if (i + j == 10)// quando a soma de I e J for 10 vai executar o codego
        {
           for (int j = 0; j < 10; j++)//pecorre a matriz toda,porem so vai executar onde a comparação for verdadeira
           {
            matriz[i][j] = 2;//substituir o valor de 0 da matriz por 2,pra indicar a forma geometrica
           }
           
        }
        
    }
//parte 2
    for (int i = 4; i < 5; i++)//pecorrer uma linha da matriz
    {
        if (i + j > 10 && i + j < 13)//ta restrigindo o raio de alcance da execução,pra somente executar conforme a comparação
        {
           for (int j = 0; j < 10; j++)//pecorre a matriz toda,porem so vai executar onde a comparação for verdadeira
           {
            matriz[i][j] = 2;//substituir o valor de 0 da matriz por 2,pra indicar a forma geometrica
           }
           
        }
    }
//parte 3
    for (int i = 5; i < 6; i++)//pecorrer uma linha da matriz
    {
        if (i + j > 10 && i + j < 15)//ta restrigindo o raio de alcance da execução,pra somente executar conforme a comparação
        {
           for (int j = 0; j < 10; j++)//pecorre a matriz toda,porem so vai executar onde a comparação for verdadeira
           {
            matriz[i][j] = 2;//substituir o valor de 0 da matriz por 2,pra indicar a forma geometrica
           }
           
        }
    }

//octaedro
//parte 1
    for (int i = 6; i < 7; i++)//pecorrer uma linha da matriz
    {
       if (i + j > 5 && i + j < 9 )//ta restrigindo o raio de alcance da execução,pra somente executar conforme a comparação
       {
        for (int j = 0; j < 10; j++)//pecorre a matriz toda,porem so vai executar onde a comparação for verdadeira
        {
           matriz[i][j] = 3;//substituir o valor de 0 da matriz por 3,pra indicar a forma geometrica
        
        }
       }
    }
//parte 2
    for (int i = 5; i < 8; i++)//pecorrer as linhas da matriz
    {
        if (i + j > 4 && i + j < 9 )//ta restrigindo o raio de alcance da execução,pra somente executar conforme a comparação
      {   
        for (int j = 1; j < 2; j++)//pecorre somente em uma coluna,aonde sera executada o codego
        {
            matriz[i][j] = 3;//substituir o valor de 0 da matriz por 3,pra indicar a forma geometrica
    
        }
      }
    }

        printf("%d ", matriz[i][j]);//printf pra imprimir toda a matriz no terminal.
}
    printf("\n");
}

    return 0;

}
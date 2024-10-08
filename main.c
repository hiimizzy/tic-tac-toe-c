#include<stdio.h>
#define jogadorX 'x'
#define jogador0 '0'

#define caracterb '_'
#define qlinha 3
#define qcoluna 3
int main(int argc, char const *argv[]){
/*
    [0]  [1]  [2]  
[0]--1----2----3----
[1]--4----5----6----
[2]--7----8----9----
*/ 

/*  1        2        3       -1
    0,0     0,1     0,2

    4       5         6           
    1,0    1,1      0,2        -4

    7       8         9
    2,0    2,1      2,2        -7

*/

    char tabuleiro[qlinha][qcoluna];
    int coluna;
    int linha;
    int posicao;

    for(linha = 0; linha < qlinha; linha +=1)
        for(coluna = 0 ; coluna < qcoluna; coluna +=1)
        tabuleiro[linha][coluna] = 'caracterb';


    while (1){

        printf("Jogador %c sua vez \n");
    scanf("%d",&posicao);


    if(! (posicao > 1 && posicao < 9)){
        printf("\nPosição inválida, digite novamente!\n");

        continue;
    }

    if(posicao > 1 && posicao < 3){
        tabuleiro[0][posicao - 1] = jogadorX;
    }

    else if(posicao > 4 && posicao < 6){
        tabuleiro[1][posicao - 4] = jogadorX;
    }

    else if(posicao > 7 && posicao < 9){
        tabuleiro[2][posicao - 7] = jogadorX;
    }

    for(linha = 0 ; linha < qlinha; linha += 1){
        for(coluna = 0; coluna < qcoluna; coluna += 1)
        printf("%c", tabuleiro[linha][coluna]);

    }

    }
    
    
        
}
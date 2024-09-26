#include<stdio.h>
#define jogadorX'x'
#define jogador0'0'

#define qlinha 3
#define qcoluna 3
int main(int argc, char const *argv[]){
/*
    [0]  [1]  [2]  
[0]--1----2----3----
[1]--4----5----6----
[2]--7----8----9----
*/ 
    char tabuleiro[qlinha][qcoluna];
    int coluna;
    int linha;
    int posicao;
    for(linha = 0; linha < qlinha; linha +=1)
        for(coluna = 0 ; coluna < qcoluna; coluna +=1)
        tabuleiro[linha][coluna] = '_';

    printf("Jogador %c sua vez \n");
    scanf("%d",&posicao);

    if(posicao = 1)
        tabuleiro[0][0] = jogadorX;

    else if(posicao = 2)
        tabuleiro[0][1] = jogadorX;

    else if(posicao = 3)
        tabuleiro[0][2] = jogadorX;

    else if(posicao = 4)
        tabuleiro[1][0] = jogadorX;

    else if(posicao = 5)
        tabuleiro[1][1] = jogadorX;

    else if(posicao = 6)
        tabuleiro[1][2] = jogadorX; 

    else if(posicao = 7)
        tabuleiro[2][0] = jogadorX; 

    else if(posicao = 8)
        tabuleiro[2][1] = jogadorX; 

    else if(posicao = 9)
        tabuleiro[2][2] = jogadorX; 

    for(linha = 0 ; linha < qlinha; linha += 1){
        for(coluna = 0; coluna < qcoluna; coluna += 1)
        printf("%c", tabuleiro[linha][coluna]);

    }
        
}
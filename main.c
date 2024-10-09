#include<stdio.h>
#include<stdio.h>

char jogo[3][3]; //representa tabuleiro 
char jogador1[50],jogador2[50]; //armazenar os nomes dos jogadores, suporta 50 caracteres

void iniciarMatriz(){
    int i,j; //variaveis contadoras
    for(i=0; i<3; i++){
        for(i=0; i<3; i++){
            jogo[i][j] = 'a'; //indicar que a posiçao está vazia
        }
    }
}

//1ºfunção 
//vai mostrar se é x ou 0
int eValid(char letra){
    if(letra == 'x' || letra == '0'){
        return 1;
    }
    else{
        return 0;
    }
       
}

//2º função
int coordenadaEhValid(int l, int c){
    if(l >= 0 && l < 3 && c>=0 && c<3){
        return 1;
    }
    return 0;

}

//3º função
int posicEhVazia(int l,int c){
    if(jogo[l][c] != 'x' && jogo[l][c] != '0'){
        return 1;
    }
    return 0;
}

//4 funções para verificar a vitória do jogador
//percorrer todas as linhas, verificar em cada linha se a posição possui x ou 0.
int ganhouLinha(){
    int i,j,igual=1;
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            if(eValid(jogo[i][j]) && jogo[i][j] == jogo[i][j+1]){
                igual++;
            }
            if(igual == 3)
                return 1;
            igual = 1;
        }
        return 0; //ninguem venceu pelas linhas
}
}
//verificar se ganhou por coluna
int ganhouColuna(){
    int i,j,igual=1;
    for(i=0; i<3; i++){
        if(eValid(jogo[j][i]) && jogo[j+1][i]){
            igual++;
        }
        if(igual == 3)
        return 1;
        igual=1;
    }
    return 0; //ninguem ganhou 
}

int ganhoudiagPrincipal(){
    int i, igual=1;//uma var para percorrer a matriz 
    for(i=0; i<2; i++){
        if(eValiid(jogo[i][i]) && jogo[i][i] == jogo[i+1][i+1]){
            igual++;
        }
        if(igual == 3){
            return 1;
        }else{
            return 0;
        }
    }
}

int ganhoudiag2(){
    int i,igual=1;
    for(i=0; i<3; i++){
        if(eValid(jogo[][]) && jogo[][] == jogo[][])
    }
}




#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void main(void){
    char pMisteriosa[TAM];
    char pDescoberta[TAM];
    char letra;
    int cont;

//LEITURA DA PALAVRA DE TAMANHO 10
    for(cont=0;cont<TAM;cont++){
        printf("digite uma letra: ");
        pMisteriosa[cont] = getc(stdin);
        pDescoberta[cont] = '*';
//LIMPAR O BUFFER DE TECLADO
        //fflush(stdin); //windows
        __fpurge(stdin); //linux
    }
//LIMPAR A TELA DO PROMPT

    //system("clc"); //windows
    system("clear"); //linux
    while((pDescoberta[0] == '*' ) || (pDescoberta[1] == '*')  || (pDescoberta[2] == '*')  || (pDescoberta[3] == '*')  || (pDescoberta[4] == '*')  || (pDescoberta[5] == '*') || (pDescoberta[6] == '*' ) || (pDescoberta[7] == '*' ) || (pDescoberta[8] == '*' ) || (pDescoberta[9] == '*' )){
        printf("digite uma letra que a palavra possa ter: ");
//LÊ UMA LETRA E LIMPA O BUFFER DE TECLADO
       scanf("%c", &letra);
        __fpurge(stdin); //linux
        //fflush(stdin); //windows
//COMPARA SE A LETRA FAZ PARTE DA PALAVRA
        for(cont=0;cont<TAM;cont++){
            if(letra == pMisteriosa[cont]){
                pDescoberta[cont] = letra;
            }
        }

//VAI ESCREVENDO A PALAVRA QUE ESTÁ SENDO REVELADA
        for(cont=0;cont<TAM;cont++){
            printf("%c", pDescoberta[cont]);
        }
            printf("\n");

    }

}

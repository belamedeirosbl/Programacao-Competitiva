#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int testcase;
    scanf("%d\n", &testcase);
    for (int caso = 0; caso < testcase; caso ++){
        
        char texto[51];
        char resposta[51];
        gets(texto);
        int tamanho = strlen(texto);
        int posiresp = 0;
        for (int i = 0; i < tamanho; i++){
            if (i == 0 && (texto[i] != ' ')){
                resposta[0] = texto[0];
                posiresp++;
            }
            if (texto[i] != ' ' && (texto[i-1] == ' ')){
                resposta[posiresp] = texto[i]; 
                posiresp++;
            }
        }
        resposta[posiresp] = '\0';
        printf("%s\n", resposta);
        memset(resposta, '\0', strlen(resposta));
    }
    return 0;
}


//beecrowd | 1272
//https://judge.beecrowd.com/pt/problems/view/1272
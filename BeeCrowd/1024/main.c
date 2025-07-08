#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(){
    int testcase;
    char nome[1001];
    int tamanho;
    char aux;
    scanf("%d\n", &testcase);
    for (int i = 0; i < testcase; i++){
        scanf("%[^\n]\n", &nome);
        tamanho = strlen(nome);
        for (int i = 0; i < tamanho; i++){
            if (isalpha(nome[i])){
                nome[i] = nome[i] + 3;
            } 
        }
        for (int i = 0; i < tamanho/2; i++){
            aux = nome[i];
            nome[i] = nome[tamanho-i-1];
            nome[tamanho - i -1] = aux;
        }
        for (int metade = tamanho/2; metade < tamanho; metade ++){
            nome[metade]--;
        }
        printf("%s\n", nome);
    }
    return 0;
}

//beecrowd | 1024
//https://judge.beecrowd.com/pt/problems/view/1024
#include <stdio.h>
#include <string.h>

int main(){
    char n[10000];
    char d;
    while(scanf(" %c %s", &d , n) != EOF){
        if(d == '0' && !strcmp(n, "0")) break;
        int tamanhoN = strlen(n);
        int resptam = tamanhoN;
        for (int i = 0; i < tamanhoN; i++){
            if (n[i] == d){
                resptam --;
            }
        }
        if (resptam == 0){
            printf("0\n");
            continue;
        } 
        char resposta[resptam + 1];
        int posiresp = 0; 
        for (int i = 0; i < tamanhoN; i++){
            if (n[i] != d){
                resposta[posiresp] = n[i];
                posiresp ++;
            }
        }
        int contzero = 0;
        int zero = 1;
        for (int i = 0; i < posiresp; i++){
            if (resposta[i] == '0'){
                contzero ++;
                if (contzero == posiresp - 1){
                    zero = 0;
                } 
            }
            else break;
        }
        if (contzero == 0){
            resposta[resptam] = '\0'; 
            printf("%s\n", resposta);
        }
        else{
            if (zero == 0){
                printf("0\n");
            }
            else{
                int tamanhoX = resptam - contzero;
                char x[tamanhoX + 1];
                for (int inicio = 0; inicio < tamanhoX; inicio++){
                    x[inicio] = resposta[inicio + contzero];
                }
                x[tamanhoX] = '\0';
                printf("%s\n", x);
                }
            
        }
    }
    return 0;
}

//https://judge.beecrowd.com/pt/problems/view/1120
//beecrowd | 1120
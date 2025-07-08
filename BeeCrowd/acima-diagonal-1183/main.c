#include <stdio.h>
int main(){
        char O;
        float matriz[12][12], novo, soma = 0, cont = 0;
        scanf("%c", &O);
        for (int linha = 0; linha <= 11; linha++){
                for (int coluna = 0; coluna <= 11; coluna++){
                        scanf("%f", &novo);
                        matriz[linha][coluna] = novo;
                        if (coluna > linha){
                                soma += novo;
                                cont ++;
                        }
                }
        }
        if (O == 'S'){
                printf("%.1f\n", soma);
        }
        else{
                printf("%.1f\n", soma/cont);
        }
        return 0;
}
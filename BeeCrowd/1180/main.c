#include <stdio.h>
int main(){
    int N, menor, posic;
    scanf("%d", &N);
    int X[N];
    for (int i = 0; i < N; i++){
        scanf("%d", &X[i]);
    }
    for (int i = 0; i < N; i++){
        if (i == 0){
            posic = i;
            menor = X[i];
        }
        if (X[i] < menor){
            menor = X[i];
            posic = i;
        } 
        
    }
    printf("Menor valor: %d\nPosicao: %d\n", menor, posic);
}

//beecrowd | 1180
//https://judge.beecrowd.com/pt/problems/view/1180
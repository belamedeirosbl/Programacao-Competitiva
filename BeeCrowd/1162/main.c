#include <stdio.h>
#include <stdio.h>
int main() {
    int testcase, L;
    scanf("%d", &testcase);
    for (int i = 0; i < testcase; i++){
        scanf("%d", &L);
        int tamanho[L], cont = 0;
        for (int l = 0; l < L; l++){
            scanf("%d", &tamanho[l]);
        }
        int ordenado = 1;
        while (ordenado == 1){
            for (int t = 0; t < L-1; t ++){
                if (tamanho[t] > tamanho[t+1]){
                    int aux;
                    aux = tamanho[t];
                    tamanho[t] = tamanho[t+1];
                    tamanho[t+1] = aux;
                    cont ++;
                }
            }
            for (int i = L-1; i > 0; i--){
                if (tamanho[i] < tamanho[i-1]){
                    ordenado = 1;
                    break;
                }
                else ordenado = 0;
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", cont);
    }
    return 0;
}

//beecrowd | 1162
//https://judge.beecrowd.com/pt/problems/view/1162
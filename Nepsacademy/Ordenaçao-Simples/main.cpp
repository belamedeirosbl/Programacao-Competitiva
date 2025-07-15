#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <bitset>
#include <utility>
#include <climits>

using namespace std;
int main(){
    int quantidade;
    cin >> quantidade;
    vector<int>numeros(quantidade);
    for(int i = 0; i < quantidade; i++){
        cin >> numeros[i];
    }
    for(int i = 0; i < quantidade - 1; i++){
        for(int j = 0; j < quantidade - 1; j++){
            if(numeros[j] > numeros[j+1]){
                int aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
        }
    }
    for(int i = 0; i < quantidade; i++){
        cout << numeros[i];
        cout << " ";
    }
    return 0;
}

//Ordenação Simples
//https://neps.academy/br/guide/mestre-dos-algoritmos-parte-1/content/ordenacao-simples
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
    int linha, coluna;
    cin >> linha >> coluna;
    int sumLinhaAtual;
    int sumLinhaMax = -1;
    vector<int>sumColuna(coluna,0);
    for(int i = 0; i < linha; i++){
        sumLinhaAtual = 0;
        for(int j = 0; j < coluna; j++){
            int pos;
            cin >> pos;
            sumLinhaAtual += pos;
            sumColuna[j] += pos;
        }
        if(sumLinhaAtual > sumLinhaMax){
            sumLinhaMax = sumLinhaAtual;
        }
    }
    int sumColunaMax = -1;
    for(int i = 0; i < coluna; i++){
        if(sumColunaMax < sumColuna[i]){
            sumColunaMax = sumColuna[i];
        }
    }
    if(sumLinhaMax > sumColunaMax){
        cout << sumLinhaMax << endl;
    }else{
        cout << sumColunaMax << endl;
    }
    return 0;
}

//MINHOCA - Campo de Minhocas
//
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
    int sizefila;
    int contador = 1;
    while(cin >> sizefila){
        if(sizefila == 0){
            break;
        }
        int posicao = 1;
        int resposta;
        bool encontrou =  false;
        for(int i = 1; i <= sizefila; i++, posicao++){
            int ingresso_atual;
            cin >> ingresso_atual;
            if(ingresso_atual == posicao && encontrou == false){
                resposta = posicao;
            }
        }
        cout << "Teste " << contador << '\n' << resposta << '\n' << '\n';
        contador++;
    }
    return 0;
}

//QUERM - Quermesse
//https://br.spoj.com/problems/QUERM/
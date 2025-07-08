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
typedef long long ll;
using namespace std;
int main(){
    long long int tiposDePedras, quantidadePorBolso;
    cin >> tiposDePedras >> quantidadePorBolso;
    vector<long long int>pedras;
    for(int i = 0; i < tiposDePedras; i++){
        long long int valor;
        cin >> valor;
        pedras.push_back(valor);
    }
 
    long long int dias = 0;
    for(int i = 0; i < tiposDePedras; i++){
        long long int pedra = pedras[i];
        if(pedra % quantidadePorBolso == 0){
            dias += pedra/quantidadePorBolso;
        }else{
            dias += (pedra/quantidadePorBolso) + 1;
        }
    }
    if((dias % 2) != 0) {
        cout << ((dias/2)+1) << endl;
        
    }else{
        cout << (dias/2) << endl;
    }
 
    
    return 0;
}
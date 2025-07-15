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
    int total, maximo; 
    cin >> total >> maximo;
    if(total%(maximo+1) == 0){
        cout << "Carlos";
    }else{
        cout << "Paula";
    }
    
    return 0;
} 

//CHOCPJ09 - Competiçăo de chocolate
//https://br.spoj.com/problems/CHOCPJ09/
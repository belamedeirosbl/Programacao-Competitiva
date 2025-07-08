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
#include <iomanip>  

using namespace std;
int main(){
    stack<string>pilha;
    map<string, bool>mp;
    int size;cin >> size;
    while(size--){
        string nome;
        cin >> nome;
        mp[nome] = true;
        pilha.push(nome);
    }
    while(!pilha.empty()){
        string top = pilha.top();
        pilha.pop();
        if(mp[top] == true){
            cout << top << endl;
            mp[top] =  false;
        }
    }
    return 0;
}

//B. Chat Order
//https://codeforces.com/contest/637/problem/B
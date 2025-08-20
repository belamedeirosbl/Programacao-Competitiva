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


/*
int busca(int min, int inicio, int fim, int sum){
    if(sum > maxSum){
        maxSum = sum;
        }
        if(min < 0 || fim <= vet.size()){
            return 0;
            }
            sum += busca(min-vet[fim], inicio, fim+1, sum);
            sum += busca(minutos, inicio+1, inicio+1, 0);
            }
            */


int main(){
    int maxSum = 0, livros, minutos;
    vector<int>vet;
    int inicio = 0;
    cin >> livros >> minutos;
    for(int i = 0; i < livros; i++){
        int x; cin>>x; vet.push_back(x);
    }
    int min = minutos;
    int sum = 0;
    for(int i = 0; i < livros; i++){
        min -= (livros[&i]);
        if(min < 0){
            inicio++;
            i = inicio;
            sum = 0;
            min = minutos;
        }
        sum++;
        if(sum > maxSum){
            maxSum = sum;
        }
    }
    //int resp = busca(minutos,0,0,0);
    cout << maxSum << endl;
    return 0;
}

//B. Books
//https://codeforces.com/problemset/problem/279/B
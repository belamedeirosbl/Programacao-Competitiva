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
    string line;
    vector<int>vetorcontador(9,0);
    int k; cin >> k;
    for(int i = 0; i < 4; i++){
        cin >> line;
        for(int j = 0; j < 4; j++){
            if(line[j] != '.'){
                int n = line[j] - '0';
                vetorcontador[n-1]++;
            }
        }
    }
    int resp = 0;
    for(int i = 0; i < 9; i++){
        if(vetorcontador[i] > k*2){
            resp = 1;
            break;
        }
    }
    if(resp == 0){
        cout << "YES";
    }else   {cout << "NO";}
    
    return 0;
}

//A. Collecting Beats is Fun
//https://codeforces.com/contest/373/problem/A
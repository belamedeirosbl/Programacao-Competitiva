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

typedef long long ll;
vector<int>memo(1e6+1,-1);

void fatorial(){
    ll n = 1;
    for(int i = 2; i <= 1000000; i++){
        ll x = n * i;
        while(x%10 == 0){
            x/=10;
        }
        x = x%1000000;
        memo[i] = x;
        n = x;
    }
}


int main(){
    memo[1] = 1;
    ll n;
    fatorial();
    int i = 1;
    while(cin >> n){
        cout << "Instancia " << i << endl;
        cout << memo[n]%10 << endl;
        i++;
    }
    return 0;
}

//FATORIAL - Fatorial
//https://br.spoj.com/problems/FATORIAL/
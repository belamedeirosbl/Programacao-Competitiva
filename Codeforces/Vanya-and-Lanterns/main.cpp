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

typedef long long ll;
using namespace std;

int main(){
    
    int n, l, d;
    vector<int>lanternas;
    cin >> n >> l;
    for(int i = 0; i < n; i++){
        int lant;
        cin >> lant;
        lanternas.push_back(lant);
    }
    sort(lanternas.begin(), lanternas.end());
    double menordist = 0;
    for(int i = 0; i < n-1; i++){
        if(lanternas[i+1] - lanternas[i] > menordist){
            menordist = lanternas[i+1] - lanternas[i];
        }
    }
    menordist = menordist/2;
    
    if(lanternas[0] != 0 && menordist < lanternas[0]){
        menordist = lanternas[0];
    }
    if(lanternas[n-1] + menordist < l){
        menordist = l - lanternas[n-1];
    }
    cout << fixed <<  setprecision(10) << menordist << endl;
    return 0;
}

//B. Vanya and Lanterns
//https://codeforces.com/contest/492/problem/B
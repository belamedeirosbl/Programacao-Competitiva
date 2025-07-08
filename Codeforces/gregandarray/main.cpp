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
 
int main() {
    int size, op, queries; cin >> size >> op >> queries;
    vector<int>v;
    for(int i = 0; i < size; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    vector<vector<int>>operacoes;
    for(int i = 0; i < op; i++){
        for(int j = 0; j < 3; j++){
            int x; cin >> x;
            operacoes[i].push_back(x);
        }
    }
    return 0;
}
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

int main() {
    map<int,int>valorVezes;
    int cases; cin >> cases;
    for(int i = 0; i < cases; i++){
        for(int j = 0; j < 3; j++){
            int value;
            cin >> value;
            if(valorVezes.find(value) != valorVezes.end()){
                valorVezes[value]++;
            }else{
                valorVezes[value] = 1;
            }
        }
        for(auto p : valorVezes){
            if(p.second == 1){
                cout << p.first << endl;
                break;
            }
        }
        valorVezes.clear();
    }
    return 0;
}

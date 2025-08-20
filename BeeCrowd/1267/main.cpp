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
    
    int n, d; 
    while(cin >> n >> d){
        if(n == 0 && d == 0){
            break;
        }
        vector<int>v(n,0);
        bool ans = false;
        for(int i = 0; i < d; i++){
            for(int j = 0; j < n; j++){
                int x; cin >> x;
                if(x == 1){
                    v[j]++;
                    if(v[j] == d){
                        ans = true; 
                    }
                }
            }
        }
        if(ans){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
    
        }
    }
    
    
    return 0;
}

//https://www.beecrowd.com.br/repository/UOJ_1267.html
//beecrowd | 1267

